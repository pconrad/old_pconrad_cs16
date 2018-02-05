<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H13","Fri","Lab","04.30",
		  "Intro to structs (handout)");
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
-->
</style>
</head>
<body onload="updatePointCount();">
<div id="container">
  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />
<p>For this homework, the preparation is material on the following handout: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H13/handout</a> (<a href="handout/handout.H13.pdf">pdf</a> link)</p>
<div class="floatingBox">The little boxes on the  <a href="handout">handout</a>&mdash;boxes  like this one&mdash;define terms such as <em>field, member</em>, and <em>instance</em>. Each of those terms appears in questions on this assignment.</div>
<p><strong>Be sure to read not only the main text on the handout, <br />
  but also the little boxes off to the side, like the one see to the right of this sentence.</strong><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet<br />  
(use the <a href="H13.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol>
  <li>(5 pts) Write the definition of a struct called <code>struct Date</code> that contains three <code>int</code> fields. <br />
    The names of the fields should be <code>month</code>, <code>day</code> and <code>year</code>.<strong><br />
      </strong><br />
      <br />
      <br />
      <br />
      <br />
      <br />
    </li>
<li>(5 pts) Write a line of code that creates a variable called <code>today</code> of type <code>struct Date<br />
    <br />
    <br />
  <br />
</code></li>
<li>(10 pts) Write three lines of code (<strong>three separate assignment statements)</strong> that use the dot operator to initialize the members of the instance of <code>struct Time</code> that you declared in the previous problem. <br />
  <br />
  Initialize those members to integers representing the date this assignment is due.<br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
<?php require("../pleaseTurnOver.php"); ?>

</li>
<li>For each of the following segments of C code, circle YES or NO to indicate whether memory is allocated as a result.<br />
  <br />
  <ol style="font-size:1.0em;">
    <li>(3 pts)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO<br />
      <br />
      <pre>struct Time
{
   int hours;
   int minutes;
};
<br /></pre>
    </li>
     <li>(3 pts)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO<br />
      <br />
      <pre>int x;<br /><br /></pre>
    </li>
     <li>(3 pts)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO<br />
      <br />
      <pre>struct Time t1;<br /><br /></pre>
    </li>
     <li>(3 pts)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO<br />
      <br />
      <pre>
struct Student
{
   char name[20];
   int permNumber;
   double gpa;
};<br /><br /></pre>
    </li>
      <li>(3 pts)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO<br />
      <br />
      <pre>
struct Time dinnerTime = {17,30}; // 5:30pm 





</pre>
    </li>
    
  </ol>
</li>
<li>(5 pts) Assuming that we have the following declaration for a GPS coordinate:
  <pre>struct GPSCoord
{
   double lat;
   double lon; 
};</pre>
<p>Write a line of code that declares an instance of struct GPSCcoord with the variable name airportSBA, that also initializes that member to the value  latitude: 34.4261944, longitutde: -119.8415000.<br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
</p>
</li>
</ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
