<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H12","Wed","Lecture","04.28",
		  "Functions, basic principles (Etter,  4.1, 4.2)");
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
.handWritten {font-family: Comic Sans, Comic Sans MS, Geneva, Arial, Helvetica, sans-serif; }
-->
</style>
</head>
<body onload="updatePointCount();">
  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />
<p>Your reading assignment for this week includes all of Chapter 4. The questions on this homework focus on Sections 4.1 and 4.2 of Chapter 4.</p>
<p>You may work with one other person on this assignment—he/she may be your pair programming partner, or someone else in the course. If you do work with another person, please write his/her name on the line below. (You still must BOTH hand in the homework separately though).<br />
    <br />
    <br />
</p>
<hr />
<p><br />
</p>

<p>Read Chapter 4 in your Etter textbook. Then answer these questions:<strong><br />
</strong></p>
<ol>
  <li><p>(5 pts) Briefly explain the idea of &quot;reusability&quot;, and how this relates to the study of &quot;functions&quot; in C—and, for that matter, the study of functions in any programming language. <br />
      <br />
      <br />
      <br />
      <br />
      <br />
      <br />
      <br />
    </p>
 
  </li>
  <li><p>(5 pts) Briefly explain the idea of &quot;abstraction&quot;, how this relates to the study of &quot;functions&quot; in C—and, for that matter, the study of functions in any programming language. <br />
      <br />
      <br />
      <br />
      <br />
    <br />
    <br />
  </p>
 <?php require("../pleaseTurnOver.php"); ?>
  </li>
  <li>In Section 4.1 the author (Delores Etter) offers suggestions about three different debugging approaches—one having to do with <em>compilers</em>, another to do with <em>comments</em>, and a third having to do with something called a <em>driver</em>. <br />
    <br />
    In your <em>own</em> words—<strong>as if you were suggesting it to your pair partner—</strong>not just in words just copied from the text verbatim—briefly explain each of these approaches.  Put the suggestion in the context of a situation where it might be useful.<br />
    <br />
    To give you an idea of what I'm looking for, I've done the first one for you. Let's suppose your pair partner's name is Chris.<br />
    <br />
    <ol>
      <li>(0 pts—done for you as an example) the compiler thing....<br />
          <br />
          <span class="handWritten">Hey, Chris—this error message is confusing. Maybe we could try compiling and running our code with another compiler, to see if we get a different message. Seeing how that other message is worded might  help us figure out what's going on.</span>
        <br />
        <br />
        <br />
      </li>
      <li>(5 pts) the comment thing...<br />
          <br />
          <br />
          <br />
          <br />
        <br />
      <br />
      </li>
      <li>(5 pts) the driver thing...<br />
          <br />
          <br />
          <br />
          <br />
        <br />
          <br />
      </li>
    </ol>
  </li>
  <li>On p. 156-157, Etter describes functions definitions and function prototypes. She shows two ways that the function prototype for the sinc function can be written, and then suggestions  why one of these ways is better than the other.
    <br />
    <br />
    <ol>
      <li>(12 pts) Look at the function definition for the gc_distance function that appears on p. 167. Then write down <strong>two ways </strong>that the function prototype for positive could be written—analogous to the two ways that Etter presents the prototype for sinc on p. 157.<br />
        <br />
        First way: <br />
          <br />
          <br />
          <br />
        Second way:<br />
        <br />
        <br />
        <br />
        <br />
      </li>
      <li>(8 pts) Which of these two ways is preferred by both Etter (and your instructors at UCSB!) and why is that preferred? <br />
          <br />
          <br />
          <br />
          <br />
          <br />
          <br />
        <br />
        </li>
    </ol>
  </li>
</ol>
<hr />
End of <?php echo $h->getAssignment(); ?>
</body>
</html>
