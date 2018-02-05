// exam.js  P. Conrad, UD 03/08/2007 
// Functions to count points on an exam

function pointCount(n)
{
   var text = n.data;
   
   // look for (x pts) where x is some sequence of [0-9]+
   // save the result of [0-9]+ in result[1]
   
   var pointRegExp = new RegExp("\([ ]*([0-9]+)([^0-9A-z])*pt[s]?[ ]*\)");  
   var result = pointRegExp.exec(text);
   
   if (result) // if there was a match
   {
      return parseInt(result[1]); // this contains the numeric part
   }
   else
   {
     return 0; // otherwise, there weren't any points in this text element
   }
}

function countPoints(n) {                     // n is a Node 
    if (n.nodeType == 3 /*Node.TEXT_NODE*/)   // Check if n is a Text object
        return pointCount(n);                 // If so, parse its text and return number of points
    
	// Otherwise, iterate through n's children, totalling up the points
	var numpoints = 0; 
    for(var m = n.firstChild; m != null; m = m.nextSibling) 
	{
        numpoints += countPoints(m);  
    }
    return numpoints;   // Return total of all children's points
}

function updatePointCount()
{
  var whereToPutIt = window.document.getElementById("pointCount");
  whereToPutIt.innerHTML = ("Total Points: " + countPoints(document.body));
}