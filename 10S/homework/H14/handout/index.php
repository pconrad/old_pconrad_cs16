<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, H14 Handout (more on structs)</title>
<script type="text/javascript" src="../../exam.js" ></script>
<link rel="stylesheet" type="text/css" href="../../homework.css" />
<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}

td {text-align:center; height:1.5em;}
h3 {font-size: 1.0em;}

div.floatingBox {width: 10em; border-color:#003399; border-size: 4px; border-style: outset; float: right; padding:3px;}
div#container {width: 800px;}
p {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:5px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:4px;}
-->
</style>
</head>

<body onload="updatePointCount();">
<div id="container">
<h1>CS16, 10S, <strong>Handout to go with H14</strong> (more on structs) (<a href="handout.H14.pdf">printable PDF</a>)</h1>
<p>Available online at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H14/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H14/handout<br />
</a>The assignment is available at <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H14">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H14</a><br />
</p>
<hr />
<p>This handout—which is your reading assignment for H14—covers structs, which are not covered in the textbook until Chapter 7. We are covering them a bit earlier than the textbook coverage, because they will open up some more interesting problem solving opportunities. This builds on the <a href="../../H13/handout">handout from H13</a></p>
<p>However, if you want to read some additional material about structs, you may read Section 7.1 and 7.2 in the Etter text, or Section 12.1 of the online Oualline text (<a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">on-campus link</a>, <a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">off-campus link</a>)</p>
<hr />
<h3>Passing structs to functions</h3>
<p>We can pass a struct to a function, and return a struct from a function. In this respect, structs act just like other variables.<br />
  <br />
  Suppose we have a struct Point, and we want to determine its distance from the origin.<br />
  <br />
  As a reminder: the distance formula tells us that the distance between two arbitary points (<em>x</em><sub>1</sub>&nbsp;<em>y</em><sub>1</sub>) and (<em>x</em><sub>2</sub>,&nbsp;<em>y</em><sub>2</sub>) is given by:<br />
  <br />
  <img src="../../../../../images/math/distanceFormula.png" alt="Distance formula" width="416" height="31" /><br />
</p>
<div class="floatingBox">Formula images from Wikipedia &quot;<a href="http://en.wikipedia.org/wiki/Distance">Distance</a>&quot; and &quot;<a href="http://en.wikipedia.org/wiki/Midpoint">Midpoint</a>&quot; pages, used under <a href="http://en.wikipedia.org/wiki/Wikipedia:CC-BY-SA">CC-BY-SA license</a></div>
<p>But when (<em>x</em><sub>1</sub>&nbsp;<em>y</em><sub>1</sub>) is the origin, i.e. (0,0), then the formulat reduces to:</p>
<p><img src="../../../../../images/math/distanceFormulaWhenX1Y1IsOriginReducesTo.png" alt="Distance formula reduces to" width="163" height="31" /></p>
<p>Or, renaming the variables (<em>x</em><sub>2</sub>,&nbsp;<em>y</em><sub>2</sub>) to simply (<em>x</em>,&nbsp;<em>y</em>) we have that<br /> 
  the distance of (<em>x</em>,&nbsp;<em>y</em>) from the origin is given by:<br />
  <br />
  <img src="../../../../../images/math/distanceOfXYfromOrigin.png" alt="Distance is square root of  the sum of x squared plus  y squared" width="141" height="31" /><br />
  <br />
  Recall that:</p>
<ul>
  <li>we can use<code> #include &lt;math.h&gt;</code> and compile with <code>-lm</code> to get access to the built-in function <code>sqrt</code> to do square root.</li>
  <li>we get access to members of structs by using the dot operator (review the <a href="../../H13/handout">handout from H13</a>, if you don't recall this.)<br />
    </li>
  </ul>
<p>So, here's the definition of a struct Point:<br />
</p>
<pre>struct Point
{
  double x;
  double y;
};</pre>
<p>And here is a function that returns the distance of a struct Point p from the origin:</p>
<pre>
double distanceFromOrigin(struct Point p)
{
   return sqrt(p.x * p.x + p.y * p.y);
}
</pre>
<div class="floatingBox">Recall that <code>pow(x,y)</code> is <code>#include &lt;math.h&gt;</code> library function for x<sup>y</sup> (where <code>x</code>,<code> y</code> and the result returned are all of type double.)</div>
<p>We can also <strong>pass two structs to a function</strong>—here's the distance formula, using structs:<br />
</p>

<pre>
double distanceBetween(struct Point p1, struct Point p2)
{
   return sqrt( pow(p2.x - p1.x, 2.0) + pow(p2.y - p1.y, 2.0) );
}
</pre>
<?php require("../../pleaseTurnOver.php"); ?>

<p><br />
</p>
<p><strong>Returning a struct from a function</strong></p>

<div class="floatingBox" style="width: 300px;"><img src="../../../../../images/math/282px-Midpoint.svg.png" alt="Midpoint between two points" width="282" height="115" longdesc="http://en.wikipedia.org/wiki/Midpoint" />
</div>
<p style="width:400px">Recall that the midpoint of a line segment connecting two points is defined as shown in the image at right. Keeping that in mind, we can write a function that takes two struct Point instances as parameters, and returns a  struct Point instance reresenting the midpoint between those two points.</p>
<p style="width:400px">Note that the return type of the function is <code>struct Point</code> and that we have to declare a variable of type called <code>result</code> to return as the result of the function.</p>
<pre style="clear:both;">
struct Point
{
  double x;
  double y;
};
</pre>
<div class="floatingBox" style="width: 300px;">Syntax tip: the struct definition has a semicolon (<code>;</code>) after the closing brace.  The function definition doesn't.</div>

<pre>
struct Point midPoint(struct Point p1, struct Point p2)
{
   struct Point result;
   result.x = (p1.x + p2.x)/2.0;
   result.y = (p1.y + p2.y)/2.0;
   return result;
}

</pre>
<p><strong>Printing the value of a struct</strong></p>
<p>One difference between variables that have a struct type and regular int, double, char, char * variables is that printf can't handle struct variables directly. That is, while there are %i, %lf, %c, and %s format specifiers for int, double, char and char * (respectively) there is nothing similar for a struct variable.</p>
<p>So, if want to print out a struct variable, we typically must write our own function to do it. Here's an example of what that might look like for a <code>struct Point</code></p>
  <pre>
void printPoint(struct Point p)
{
   printf("(%lf,%lf)",p.x, p.y);
}  
  </pre>

<p>Here's an example of a main that uses this function, and the output that might go with it.<br />
Note that we can put a <code>printf</code> on the same line before and after the <code>printPoint</code> call to make the line of code appear more natural—more as if we had done something like <code>printf(&quot;x=%i\n&quot;,x);</code> for an <code>int</code> variable called <code>x</code>.</p>
<table border="1" cellspacing="1" cellpadding="3">
  <tr>
    <th scope="col">main function</th>
    <th scope="col">output</th>
  </tr>
  <tr>
    <td><div align="left"><pre>
int main()
{
  struct Point p1={3.0,4.2};
  struct Point p2={-1.0,1.0};
  
  // print points
  printf("p1="); printPoint(p1); printf("\n");
  printf("p2="); printPoint(p2); printf("\n");

  return 0;
}
</pre></div></td>
    <td><div align="left">
    <pre>
-bash-4.1$ ./printPoint 
p1=(3.000000,4.200000)
p2=(-1.000000,1.000000)
-bash-4.1$   </pre>
    
    </div></td>
  </tr>
</table>
<p>&nbsp;</p>
<hr />
End of  handout that goes with H14
</div>
</body>
</html>
