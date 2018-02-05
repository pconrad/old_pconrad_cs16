



<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H10","Fri","Lecture","04.23",
		  "More on File input, Etter 3.6, pp. 119-126");
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
          
          



<hr />
<p>Homework H09 asked you to read Section 3.6 in your Etter textbook—but only asked questions about the material on pages 116-118. This homework is also about section 3.6, but asks questions about the material on pages 119-126.<br />
  <br />
</p>
<ol>
  <li>On p. 119, Etter (the author) introduces three different ways that a data file can be structured, and then describes each of these three ways in detail on the pages that follow (119-126.)<br />
    <br />
    Briefly describe each of the three ways:<br />
    <br />
  <ul>
    <li>(4 pts)<br />
    <br />
    <br />
  </li>
    <li>(4 pts)<br />
      <br />
          <br />
        <br />
    </li>
    <li>(4 pts)<br />
      <br />
    </li>
  </ul>
  </li>
  <li>One of these three techniques uses a &quot;do/while&quot; loop. This is a kind of loop that we have not yet discussed in lecture, so take a moment to review it by reading pages 102-104 that contrast the while loop and the do/while loop. You may want to review the material on for loops on page 104-107 too.<br />
      <br />
    <ol>
      <li>(2 pts) Is a while loop always executed at least once?         Circle one:    YES        NO<br />
        <br />
      </li>
      <li>(2 pts) Is a do/while loop always executed at least once?   Circle one:    YES        NO<br />
        <br />
      </li>
      <li>(2 pts) Is a for loop always executed at least once?           Circle one:    YES        NO<br />
        <br />
        <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Please turn over for questions to answer</span><br />
        <p style="page-break-before:always"><br />
            <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Continued from other side</span>
      </p>
      </li>
    </ol>
  </li>
  <li>These questions pertain to the program on p. 120-121 (Program <a href="../../../textbooks/etterC3e/Source/C/p3_5.c">chapter3_5</a>)<br />
      <br />
    <ol>
      <li>(3 pts) Why is a for loop more appropriate for this program than a while loop or a do/while loop?<br />
        <br />
        <br />
      </li>
      <li>(3 pts) There are two fscanf function calls in this program. The first call uses &quot;%d&quot; as the second parameter and is outside the for loop.<br />
          <br />
      Why is this call outside the for loop?<br />
      <br />
      <br />
      <br />
      </li>
      <li>(3 pts) The next call uses &quot;%lf %lf&quot; as its format string, and is inside the for loop. <br />
          <br />
        Why is this call inside the for loop?<br />
            <br />
            <br />
          <br />
          <br />
      </li>
      <li>(3 pts) In both cases, the first parameter to the function fscanf is the variable <code>sensor</code>. What is the type of sensor? <br />
        <br />
        (By type, I mean something like <code>int</code> or <code>char *</code>. Here's a hint: neither of those is the correct answer.)<br />  
        <br />  
        <br />
        <br />
      </li>
    </ol>
  </li>
  <li>(10 pts) Look at the program on p. 125, <a href="../../../textbooks/etterC3e/Source/C/p3_7.c">chapter3_7</a><br />
      <br />
    Half way down in this program are two lines of code:<br />
        <code><br />
        if (num_data_pts == 1)<br /> 
            max = min = motion;</code><br />
         <br />
         <br />
  Explain the purpose of these two lines of code.<br />
  <br />
  Note that I'm not looking for an answer that shows a &quot;shallow&quot; understanding of these two lines of code—I'm looking for a deep understanding. <br />
  <br />
  <ul>
    <li>An answer reflecting shallow understanding is: &quot;these two lines of code check whether num_data_pts is 1, and if so, they set max and min equal to the value of the variable motion&quot;. That kind of answer is what I do NOT want, and it will get zero credit.</li>
    <li>An answer reflecting deep understanding will tell me:
      <ul>
        <li>what the variable num_data_pts represents,</li>
        <li>what the variable motion represents</li>
        <li>what the variables min and max represent</li>
        <li>what is special about the situation when num_data_pts is equal to 1, and most importantly</li>
        <li>WHY in that situation, we should set the values of min and max equal to the current value of motion.<br />
           </li>
      </ul>
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
  <br />
  <br />
  <br />
  </li>
  <!--- -->
</ol>
<hr />
End of H10
</body>
</html>
