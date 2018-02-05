<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H17","Fri","Lab","05.07",
		  "Even More on Structs (handout)");
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
p {margin-top: 0px; margin-bottom: 0px; padding-top:5px; padding-bottom:6px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:4px;}
div.floatingBox {margin-left:1em;}
-->
</style>
</head>
<body onload="updatePointCount();">
<div id="container">
  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />
<p>For this homework, the preparation is material on the following handout: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H17/handout</a> (<a href="handout/handout.H17.pdf">pdf</a> link)</p>
<div class="floatingBox">The little boxes on the  <a href="handout">handout</a>&mdash;boxes  like this one&mdash;also have important information you may need to complete the assignment.</div>


<p><strong>Be sure to read not only the main text on the handout, <br />
  but also the little boxes off to the side, like the one see to the right of this sentence.</strong><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet<br />  
(use the <a href="H17.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol style="clear:both;">
  
  <li>
<div class="floatingBox"><pre>
struct Point
{
  double x;
  double y;
};
</pre></div>  
  <p>
  Using the  struct Point declaration
  shown at the right of this page:</p>
    <ol>
  <li>(10 pts) Declare an array of struct Point that can hold 5 points.<br />
      <br />
      <br />
            <br />
            <br />
          <br />
        </li>
  <li>(10 pts) Write a for loop that assigns the x values of each of the 5 points to the following numbers:<br />
    <br /> 
    <code>0.0, 1.0, 2.0, 3.0, 4.0</code><br />
    <br />
    and that assigns the y value of each point to the x value squared.<br />
    <br />
    Note that the index of an array should be an integer—so use an int variable to index into the array—but that you can assign an int value to a double variable, and it will be automatically converted into a double.<br />
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
  </ol>
   <?php require("../pleaseTurnOver.php"); ?>
  </li>
  <li>(5 pts) Write a struct definition that is an abstraction of a complex number. <br />
    <br />
    As a reminder: a complex number is a number of the form <em>a&nbsp;</em>+&nbsp;<em>bi</em>, such as 3 + 5<em>i.<br />
      <br />
      </em>It has two parts:
    <ul>
      <li>a real part, represented by <em>a</em></li>
        <li> an imaginary part represented by <em>b</em>, which is a real coefficient of <em>i</em>, the square root of -1.<br />
        </li>
      </ul>
    <p>Your struct definition should be capable of representing complex numbers such as 2.5&nbsp;+&nbsp;0.5<em>i</em><br />
      <br />
      <br />
      <br />
      <br />
      <br />
      <br />
    </li>
  <li>(5 pts) Write a struct definition that is an abstraction of a quadratic equation of the form <em>f</em>(<em>x</em>)&nbsp;=&nbsp;<em>ax</em><sup>2</sup>&nbsp;+&nbsp;<em>bx</em>&nbsp;+&nbsp;<em>c.<br />
    <br />
  </em>Your abstraction should be able to store the values of a, b and c together in one 
    struct—each of which can be any real number.
    <p><br />
      <br />
      <br />
      <br />
      <br />
      <br />
      <br />
    </li>
  <li><div class="floatingBox">Formula images from Wikipedia page for <a href="http://en.wikipedia.org/wiki/Quadratic_equation">Quadractic Equation</a>, used under CC-BY-SA license terms.</div>
    (10 pts) In the quadratic formula, if the discriminant is negative, then the quadratic equation will have two complex roots, with values as follows:<br />
    <br />
    <img src="../../../../images/math/quadraticFormulaComplexSoln1.png" alt="Complex Solution 1" width="144" height="44" /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;and&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <img src="../../../../images/math/quadraticFormulaComplexSoln2.png" alt="Complex solution 2" width="150" height="44" /><br />
    <br />
      where the -<em>b</em>/2<em>a</em> part is the real part, and the other part is the coefficient of the imaginary part.<br />
      <br />
      Write the definition of a function called firstComplexRoot<br />
      <br /> 
      <ul>
        <li>takes, as its parameter, a variable that represents  a quadratic equation (use your abstraction from question 3), and</li>
        <li>returns a value that represents the first of these two roots (the one on the left, with the + sign between the terms), as a complex number (use your abstraction from question 2).</li>
      </ul>
     <p>Keep in mind that both of your struct definitions may have members called a and b&mdash;so it will be important to keep track of any use of the letter <em>a</em> refers to a value inside the quadratic equation struct that you passed in to the function, or the <em>a</em> inside the complex value that is being returned.</p>
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
</code></li>
</ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
