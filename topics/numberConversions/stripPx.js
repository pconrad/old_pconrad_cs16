function report(s)
{
 // Comment out only one of the following lines

  //  window.alert(s);   // in browser, use window.alert(s) or document.write(s)
	window.document.write("<pre>" + s + "</pre>");
 // print(s);   // for command line javascript, use print(s) 
}

function checkExpect(check,expect)
{
  try {
    result = eval(check);
    if (result==expect) {
      report("Test case " + check + " passed! (result: " + result + ")");
   }  else {
      report("Test case " + check + " FAILED: expected: " + expect 
                                  + " result: " + result);
     } // else
  } catch (err) {
    report("Test case " + check + 
          " FAILED: an error occurred: ");
    for (var i in err) report (i + ' = ' + err[i]); //  all properties of err
    report("NOTE: If a syntax error is reported on 'line 12', for example, and line 12 is the line where the eval function appears, this may be actually a syntax error in the argument to check, and not an error in the JavaScript source at line 12 of this file'");

    }
}

function stripPx(s) {
    var strippedString;   

  try {
      strippedString = s.replace("px","");
      var result = parseInt(strippedString);
      if (typeof result == "number" && !isNaN(result) )
	  return result;
      else 
          return error;
    }
  catch (err) {
      return "error";
  }
}


function testCases()
{
   checkExpect('stripPx("152px")',152);
   checkExpect('stripPx(152)',"error");
   checkExpect('stripPx("foo")',"error");

}

// testCases();
