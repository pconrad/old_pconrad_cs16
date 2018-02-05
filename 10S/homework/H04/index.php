<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H04","Wed","Lecture","04.07",
		  "Prep for lab02, Simple function definitions (handout)");
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
.style1 {font-size: smaller}
.style2 {font-size: larger}
-->
</style>
</head>

<body onload="updatePointCount();">
		  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
<p>For this assignment, the reading is a handout that was distributed in lecture, and is also available online at this link:<br />
    <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H04/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H04/handout</a><br />
</p>
<p>Once you've read that handout, write answers to the questions on the reverse side of this sheet (use the <a href="H04.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol>
  <li>(10 pts) Write a C function definition for a function called <code>areaOfTriangle</code> that returns the area of a triangle as a real number. The function should take two parameters that are both real numbers, namely <code>base</code> and <code>height</code>. The formula for area of a triangle is 1/2 base times height.<br />
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
      <br />
     <p><span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Please turn over for more questions to answer</span><br />
    </p>
          <p style="page-break-before:always"><br />
            <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Continued from other side</span><br />
          </p>
    </li>
<li>(10 pts) Write a C function called <code>howManyEggs</code> that return an integer. The function should take an integer parameter called <code>dozens</code>, and returns the value of that parameter, multiplied by 12.<br />
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
      <br />
  </li>
<li>(10 pts) Write a C function that takes the radius of a circle as a parameter (a real number) and returns the area of that circle. Use the value 3.14159 for pi.<br />
  <br />
  (Note: in a real program we'd probably want to use 3.141592653589793238462643—that's more like the accuracy that a double value can hold, but that's too much to expect you to write out for a homework assignment.)<br />
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
      </li>
  
  <li>(10 pts) Write a C function that takes a value in inches and returns the corresponding value in centimeters. You choose an appropriate name, and a name for the parameter. The conversion factor is 1in = 2.54 cm. <br />
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
  </li>
  <!--- -->
</ol>
<hr />
End of H04
</body>
</html>
