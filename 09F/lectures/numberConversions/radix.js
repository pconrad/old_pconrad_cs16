
      var debug = false;
      unicodeHeavyCheckMark = String.fromCharCode(0x2714);
      unicodeHeavyBallotX = String.fromCharCode(0x2718);

function randomIndex(n) // returns random index between 0 and n-1
{
   return Math.floor(Math.random()*n);
}

function radixDesc(radix)
{
   var whichWay = randomIndex(2); // returns either 0 or 1

   if (whichWay == 0)
      return "base " + radix;
	  
   switch(radix)
   {
      case 8: return "octal";
	  case 16: return "hexadecimal";
	  case 2: return "binary";
	  case 10: return "decimal";
	  default: return "base " + radix;
   }


}


function randomIntBetween(minVal,maxVal) // returns random index between 0 and n-1
{	
   if (minVal > maxVal)
      {
		alert("problem in randomIntBetween function");
	  }
   var numIntsInRange = maxVal - minVal + 1;
   return Math.floor(Math.random()*numIntsInRange) + minVal;
}

// return a name to use for a form for question i
function formForQuestion(i)
 {
   return("formForQuestion" + i);
 }
 
 function buildQuiz(numQuestions)
 {      
 
 
	
   var theQuizQuestionsDivElement = 
              document.getElementById("theQuizQuestions");
			  
   // the exclamation point means "not".. if I didn't find it, print an error and stop

   if (!theQuizQuestionsDivElement)
   {
     window.alert("Could not find an element with id: " + "theQuizQuestions");
     return;
   }

   var theQuizQuestions = "";

   var i;
   
   var conversions = [ {fromRad: 10, toRad: 2, minVal: 0, maxVal: 255},
                       {fromRad: 2, toRad: 10, minVal: 0, maxVal: 255},
					   {fromRad: 2, toRad: 8, minVal: 0, maxVal: 511 },
					   {fromRad: 8, toRad: 2, minVal: 0, maxVal: 63 },
					   {fromRad: 2, toRad: 16, minVal: 0, maxVal: 65535},
					   {fromRad: 16, toRad: 2, minVal: 0, maxVal: 65535} ]
	
   
   theQuizQuestions += "<table>\n"
   for (i = 1; i<=numQuestions; i++) // index counts up 0,1,2, etc through the array
   {
	  var whichConversion =  randomIndex(conversions.length);
	  
	  var numToConvert = randomIntBetween(conversions[whichConversion].minVal,
	                                      conversions[whichConversion].maxVal);
	    	  
      theQuizQuestions += "<tr>\n"

      // the question number (add one to index)
      theQuizQuestions += "<td style='vertical-align:top'>\n"
      var questionNumber = i;
      theQuizQuestions += questionNumber + ".&nbsp;";
      theQuizQuestions += "</td>\n"
	
      // the question text and code

      theQuizQuestions += "<td style='vertical-align: top'>\n"
      theQuizQuestions += "Convert "
	  
	  var fromRad = conversions[whichConversion].fromRad;
	  var toRad = conversions[whichConversion].toRad;
	
	  
	  theQuizQuestions += formatFor(numToConvert.toString(fromRad), fromRad, toRad);
	   
	  theQuizQuestions += " from " + radixDesc(fromRad) +
	  	                  " to " + radixDesc(toRad);
						  
       theQuizQuestions += "</td>\n"
	   
	   var answer = formatFor(numToConvert.toString(toRad),toRad,fromRad);
	 
       theQuizQuestions += "<td>" + turnAnswerIntoFormElement(formForQuestion(i),answer) + "</td>";

      theQuizQuestions += "</tr>\n"
 
	

   }

   theQuizQuestions += "</table>\n"

   // when you add the text to the innerHTML, it must
   // ALREADY BE well-formed HTML with properly nested
   // tags; otherwise, the browser may not process it properly.
   
   if (debug) { window.alert(theQuizQuestions); }

   theQuizQuestionsDivElement.innerHTML = theQuizQuestions;

}

function turnAnswerIntoFormElement(formName,correct)
{
 // form all the HTML in a variable called
 // formElement then add it all at once.

 var formElement = "";

 formElement += "<form name='" + formName + "' action=''>\n";

 // cellpadding leaves room for the border 
 // that we put around correct answer to not interfere with the
 // answer text itself

 var idOfQuestionControl = questionControlID(formName);

 formElement += "<div id='" + idOfQuestionControl + "'>";
 formElement += makeResponseInputTextElement(formName);
 formElement += makeCheckAnswerButton(formName,correct);

 formElement += "</div>\n"; // end of question control div element

 formElement += "</form>\n";
 return formElement;
}

function questionControlID(formName)
{
  return formName + "questionControl";
}


function responseFieldName (formName)
{
   return formName + "Response";
}

function makeResponseInputTextElement(formName)
{
  return ( "<input type='text' name='" + responseFieldName(formName) + "' id='" + responseFieldName(formName)+ "' value='' size = '16' />"); 
}

function makeCheckAnswerButton(formName,correct)
{
  return ( "<input type='button' name='" + formName + "button' " +
                 " value='press to check' " +
		 "onclick='checkAnswer(\"" + correct + 
					"\", \"" + formName + "\");' />"); 
}


function checkAnswer(answer, formName)
{
   var answerElem = 
      window.document.getElementById(responseFieldName(formName));

   var questionControlDivElement =
       window.document.getElementById(questionControlID(formName));

   var usersAnswer = answerElem.value;

   var userGotItRight = (usersAnswer == answer);

   if (debug)  window.alert("The correct answer is " + answer +
                "\nThe user's answer is " + usersAnswer);
		
   questionControlDivElement.innerHTML   = 
             "Your answer: " + usersAnswer +
             "&nbsp;&nbsp; Correct answer: " + answer;
   
}

function showAnswer(answerElemId,answer)
 {
    var answerElem = document.getElementById(answerElemId);
	answerElem.innerHTML = answer;
 }

