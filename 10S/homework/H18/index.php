<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H18","Fri","Lecture","05.07",
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
pre {margin-top: 0px; margin-bottom: 0px; padding-top:5px; padding-bottom:5px;}
div.floatingBox {margin-left:1em;}
-->
</style>
</head>
<body onload="updatePointCount();">
<div id="container">
  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />
<p>For this homework, the preparation is material on the following handout: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H18/handout</a> (<a href="handout/handout.H18.pdf">pdf</a> link)</p>
<div class="floatingBox">The little boxes on the  <a href="handout">handout</a>&mdash;boxes  like this one&mdash;also have important information you may need to complete the assignment.</div>


<p><strong>Be sure to read not only the main text on the handout, <br />
  but also the little boxes off to the side, like the one see to the right of this sentence.</strong><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet<br />  
(use the <a href="H18.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol style="clear:both;">
  
  <li>
<div class="floatingBox">
  <pre>struct Student<br />{<br />   char name[20];<br />   int permNumber;<br />   double gpa;<br />};</pre>
</div>  
  <p>
  Using the  <code>struct Student</code> declaration
  shown at the right of this page:</p>
    <ol>
  <li>(5 pts) Declare a variable <code>s</code> that can store information about a student<br />
    <br />
    <br />
    <br />
    <br />
    <br />
  </li>
  <li>(5 pts) Declare a variable p that can contain the address of a struct Student<br />
    <br />
    <br />
    <br />
    <br />
  </li>
  <li>(5 pts) Write an assignment statement that <br />
    makes the variable <code>p</code> (from question 1b)<br />
    point to the variable <code>s</code>.(from question 1a)<br />
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
  <li><div class="floatingBox"><pre>
struct GPSCoord
{
   double lat;
   double lon; 
};<br />  
struct Student
{
   char name[20];
   int permNumber;
   double gpa;
};
<br />struct GPSCoord *cp;<br />struct Student *sp;</pre>
  </div>
    (9 pts) Using the struct definitions and declarations in the box at the right of the page, for each of the expressions below, write an equivalent expression that uses the -&gt; operator, and does not use the * operator.<br />
      <br />
      <code>(*cp).lat</code><br />
      <br />
      <br />
      <code>(*sp).name[i]</code><br />
      <br />
      <br />
      <code>(*sp).gpa</code><br />
      <br />
      <br />
    <br />
    </li>
  <li>(6 pts) Using the same struct definitions and declarations, for each of the expresions below, write an equivalent expressions that does NOT use the -&gt; operator, but uses the * operator with the . instead.<br />
      <br />
    Remember to put the <code>*</code> with the pointer variable inside parentheses so that the <code>*</code> gets applied first.<br />
      In the expression <code>(*a).b </code>(which is equivalent to <code>a-&gt;b</code> ) the parentheses are NOT optional—<code>*a.b</code> is not the same.<br />
      <br />
      <br />
      <br />
      <code>sp-&gt;permNumber</code><br />
      <br />
      <code><br />
      cp-&gt;lon</code><br />
      <br />
      <br />
      <br />
  </li>
  <li>
    <p>(10 pts) Fill in the function definition for <code>setGPSCoord</code> below so that it assigns the values passed in for <code>latitude</code> and <code>longitude</code> to the correct members of the struct that is pointed to by <code>p</code>.</p>
      <pre>
void setGPSCoord(struct GPSCoord *p, double latitude, double longitude)
{<br />
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
}
      </pre>
      
  </li>
  </ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
