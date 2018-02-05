<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H11","Mon","Lecture","04.26",
		  "Array Initialization (Etter, Chapter 4, Section 5.1)");
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
<p>Your reading assignment for Monday includes Chapter 4, and pages 207-212 of Chapter 5 in your Etter textbook (the first part of Section 5.1).</p>
<p>Chapter 4 covers functions—and a lot of it will be review, since we've already been doing a lot with functions in the course—you've seen them in the homeworks, labs and lectures.   <br />
  <br />
  So, 
you should start reading Chapter 4—but having said that, the rest of the questions on this homework mainly pertain to pages 207-212 of section 5.1. If you want to skip ahead in your reading, that's ok—nothing on pages 207-212 (or on this homework assignment) depends on the material in Chapter 4.</p>
<p>You may work with one other person on this assignment—he/she may be your pair programming partner, or someone else in the course. If you do work with another person, please write his/her name on the line below. (You still must BOTH hand in the homework separately though).<br />
    <br />
    <br />
</p>
<hr />
<p><br />
  <br />
</p>
<?php require("../pleaseTurnOver.php"); ?>
<p>Read pp 207-212 of Section 5.1 in your Etter textbook. Then answer these questions:<strong><br />
</strong></p>
<hr />
<ol>
  <li>Here are several different definitions of the function doIt()—doIt1(), doIt2, etc.<br />
    In each case, indicate what would be printed when the function is called.
      <br />
      <br />
    <ol>
      <li>(10 pts) <br />
          <br />
<pre>
void doIt1()<br />{<br />  int a[] = {30,40,50};<br />  printf(&quot;%d\n&quot;,a[2]);<br />}</pre>        <br />
      </li>
            <li>(10 pts) <br />
          <br />
<pre>void doIt2()<br />{<br />  int a[5] = {0};<br />  printf(&quot;%d\n&quot;,a[2]);<br />}
</pre>        <br />
      </li>
            <li>(10 pts) <br />
          <br />
<pre>void doIt3()<br />{<br />  int a[5] = {1};<br />  printf(&quot;%d\n&quot;,a[2]);<br />}

</pre>        <br />
      </li>
            <li>(10 pts) <br />
          <br />
<pre>void doIt4()<br />{<br />  int a[5];<br />  int i;<br />  for (i=0; i&lt;5; i++)<br />    a[i] = (i+1)*2;<br />  printf(&quot;%d\n&quot;,a[2]);<br />}

</pre>        
<br />
<br />
</p>
            </li>
    </ol>
  </li>
  <!--- -->
</ol>
<hr />
End of H11
</body>
</html>
