<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H19","Mon","Lecture","05.10",
		  "Even More on Structs (handout)");
echo $h->as_title();
?>
<script type="text/javascript" src="../exam.js" ></script>
<link rel="stylesheet" href="../homework.css" type="text/css" />



<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}
table.thinBorderedTable { border: 1px solid black;}
table.thinBorderedTable th { border: 1px solid #ccc;}
table.thinBorderedTable td { border: 1px solid #ccc;}

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
<p>For this homework, the preparation is material on the following handout: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/<?php echo $h->getAssignment();?>/handout</a> (<a href="handout/handout.<?php echo $h->getAssignment();?>.pdf">pdf</a> link)</p>
<div class="floatingBox"> The little boxes on the  <a href="handout">handout</a>&mdash;boxes  like this one&mdash;also have important information you may need to complete the assignment.</div>


<p><strong>Be sure to read not only the main text on the handout, <br />
  but also the little boxes off to the side, like the one see to the right of this sentence.</strong><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet<br />  
(use the <a href="<?php echo $h->getAssignment();?>.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol style="clear:both;">
  
  <li>
<div class="floatingBox"  style="width:25em;">
  <pre>struct Date<br />{<br />  int m; // month, 1-12
  int d; // day, 1-31
  int y; // year, 4 digits (e.g. 2010)<br />};<br /><br />struct WorkWeek
{
   int hrsWorked[y]; // for each day, mon-sun
   int empNum;
   struct Date weekStarting; // day of Monday

};                 
</pre>
</div>  
  <p>
  (10 pts) The   <code>struct WorkWeek</code> declaration
  in the box at the right is an abstraction of a work week for someone making an hourly wage. The struct definition is accompanied by some function prototypes.    </p>
  <p>Write a line of code (or lines of code) that declare a variable 
    <code>thisWeek</code> 
    of type <code>struct&nbsp;WorkWeek</code>, and initialize with values representing this real world situation:</p>
    <table class="thinBorderedTable">
<tr>
  <th>hours worked</th>
  <td>8 on Monday, 4 on Tuesday, 0 on Wednesday, <br />
    4 on Thursday, 8 on Friday, <br />
    0 on Saturday, 0 on Sunday.</td>
</tr>
<tr>
  <th>employee number</th>
  <td>2493829</td>
</tr>
<tr>
  <th>the week starts on </th>
  <td>May 3rd, 2010</td>
</tr>
</table>    
    <br />
    <br />
    <br />
        <br />
        <br />
        <br />


   <?php require("../pleaseTurnOver.php"); ?>
  </li>
<li>
<div class="floatingBox"  style="width:25em;">
  <pre>struct WorkWeek
{
   int hrsWorked[y]; // for each day, mon-sun
   int empNum;
   struct Date weekStarting; // day of Monday

};
 

// initialize a work week
// sets employee number and weekStarting,
// but initializes all hours worked to 0
void initWorkWeek(struct WorkWeek *ww,
                  int employeeNum,
                  int m, int d, int y);
                  
            
// return the total of all the hrsWorked<br />int totalHours(struct WorkWeek ww);
                  
</pre>
</div>  
  <p>
  The   <code>struct WorkWeek</code> declaration
  in the box at the right repeats the one from the other side of the page. The struct definition is accompanied by some function prototypes.    </p>
<ol><li>
    <p>(10 pts) Suppose you have the following variable declarations:</p>
<pre>
struct WorkWeek nextWeek;
</pre>
<p>Write a function call to the initWorkWeek function that initializes that value with employee number 1234567 and the date 05/10/2010.  <br />
  <br />
  (Note that initWorkWeek  sets all hours to zero.)<br />
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
</p>
</li>
  <li>(10 pts) Now, write the function definition for <code>initWorkWeek</code><br />
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
  <li>(10 pts) Write the function definition for <code>hrsWorked</code></li>
</ol>
  
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
