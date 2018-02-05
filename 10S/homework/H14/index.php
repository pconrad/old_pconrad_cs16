<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H14","Fri","Lecture","04.30",
		  "More on structs (handout)");
echo $h->as_title();
?>
<script type="text/javascript" src="../exam.js" ></script>
<link rel="stylesheet" href="../homework.css" type="text/css" />



<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}

td {text-align:center; height:1.5em;}
.smallerFont {font-size: 0.9em;}
div#container {width: 800px;}
p {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:5px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:3px; padding-bottom:3px;}
div.floatingBox {margin-left: 1em;}
-->
</style>
</head>
<body onload="updatePointCount();">
<div id="container">
  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />
<p>For this homework, the preparation is material on the following handout: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H14/handout</a> (<a href="handout/handout.H14.pdf">pdf</a> link)</p>
<div class="floatingBox">The little boxes on the  <a href="handout">handout</a>&mdash;boxes  like this one&mdash;also have important information you may need to complete the assignment.</div>
<p><strong>Be sure to read not only the main text on the handout, <br />
  but also the little boxes off to the side, like the one see to the right of this sentence.</strong><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet<br />  
(use the <a href="H14.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol>
<li>
  <p>(10 pts) Assuming a <code>struct Time </code>is defined like this:</p>
  <pre>
struct Time
{
   int hrs;
   int min;
};
</pre>

<p>Write a function definition for a function with this prototype:</p>

<pre>void printTime(struct Time t);</pre>

<p>that for a struct where the value of hrs is, for example, 9, and the value of min is 20, prints:</p>
<pre>09:20</pre>
<p>and for a struct where the value of hrs is, for example, 17 and the value of min is 7, prints:</p>
<pre>17:07</pre>
<p><strong>A <code>printf</code> tip that may help:</strong> you can use <code>printf("%02d",</code><em>x</em><code>);</code> to print an int expression <em>x</em> in a field of exactly two characters, with a single zero in front of single digit positive integers, and <code>"00"</code> for the number 0.<br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
</p><?php require("../pleaseTurnOver.php"); ?>
</li>
  <li><p>(10 pts) Write a struct definition for a <code>struct Polar</code> that can hold <br />
    the representation of a point in polar coordinates.</p>
  <div class="floatingBox" style="width:252px;"><img src="http://www.cs.ucsb.edu/~pconrad/images/math/250px-CircularCoordinates.svg.png" alt="Polar Coordinates Illustration" />
  <img src="http://www.cs.ucsb.edu/~pconrad/images/math/250px-Polar_to_cartesian.svg.png" alt="Another Polar Coordinates illustration" /> <p>Images  from Wikipedia page &quot;<a href="http://en.wikipedia.org/wiki/Polar_coordinate_system">Polar_coordinate_system</a>&quot; used under <a href="http://en.wikipedia.org/wiki/Wikipedia:CC-BY-SA">CC-BY-SA license</a></p> 
  </div>
  <p>As a reminder, in polar coordinates, a point is represented by two values,<br /> 
    <em>r</em> and &theta; (theta), as illustrated in the pictures shown at right:</p>
  <ul><li><em>r</em> is the distance of the point from the origin <br />
    (or, the radius of the circle centered at the origin on which the point lies)</li>
    <li> &theta; is the angle between the x-axis and a line from the origin to the point</li>
  </ul>
  <p>The members of the <code>struct Polar </code>should be called  <code>r </code>and <code>theta</code><br /> 
    and should both be of type <code>double</code>.<br />
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />
  </p>
  </li>
  <li>
    <p>(20 pts) Given the definition of <code>struct Polar</code> from the previous problem. along with this definition:</p>
    <pre>struct Point
{
  double x;
  double y;
};</pre>
<p>Write the definition of a function called PointToPolar that takes a struct Point as its one argument, and returns a struct Polar as the result.</p>
<p>As a reminder, the formulas to convert from XY to Polar Coordinates are as follows:<br />
    <br />
        <img src="../../../../images/math/XYCoordToPolarFormulaForR.png" alt="r equals square root of x squared plus y squared" width="114" height="31" longdesc="http://en.wikipedia.org/wiki/Polar_coordinate_system" /><br />
        <br />
        <img src="../../../../images/math/XYCoordToPolarFormulaForTheta.png" alt="Formula to convert xy to polar coordinates, formulat for theta" width="359" height="84" longdesc="http://en.wikipedia.org/wiki/Polar_coordinate_system" /><br />
  <br />
</p>
 <p>
  You may assume that <code>#include &lt;math.h&gt;</code> is available, and thus you may use:</p>
  <ul>
    <li>the function with prototype 
  <code>double sqrt(double x); </code> to compute square root</li>
    <li>the pre-defined constant <code>M_PI</code> for the value of &pi; </li>
    <li>the function with this prototype to compute arcsin:<br />
          <code>double asin(double x); // x must be in the range -1 to 1</code><br />
      </li>
  </ul>
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
</li>
</ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
