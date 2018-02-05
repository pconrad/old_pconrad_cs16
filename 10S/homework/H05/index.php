<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H05","Fri","Lab","04.09",
		  "Etter 1.3, 2.1-2.3 (Problem Solving, C Program Structure, Constants, Variables, Assignment Statements)");
echo $h->as_title();
?>
<script type="text/javascript" src="../exam.js" ></script>
<link rel="stylesheet" href="../homework.css" type="text/css" />



<style type="text/css">
<!--
#bookstoreMemo {font-style: italic; font-size: 0.8em;}
#bookstoreMemo p {margin:0em; padding:0em; ,margin-top:0.2em; margin-bottom:0.2em;}

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
  <?php echo $h->as_h1_withLineBreaks();
		  require("../cs16HomeworkHeader.php");?><br />
  Please read sections 1.3, 2.1-2.3 in the Etter textbook (see Homework <a href="../H04">H04</a> for information on the copy that is on reserve in the library). Then, answer these questions:
  <ol>
  <li>Section 1.3 presents  a five step problem solving methodology in the context of a program that calculates the distance between two points.<br />
    <br />
      <ol>
        <li>(4 pts) What is the formula that is used to calculate this distance? Describe it in math notation, rather than in C.<br />
          <br />  
          <br />  
        </li>
        <li>(4 pts) How does this formula look after it is converted into C code?<br />  
          <br />  
          <br />  
          <br />
        </li>
      </ol>
  </li>
  <li>Section 2.1 begins with a review of the C program solution to the problem outlined in Section 1.3, including a review of each line of code and its purpose in the program. This description includes many defintions of technical terms. <br />
    <br />
    
    These technical terms are helpful to know, because when your program contains syntax errors, the resulting error messages often contain these technical terms.<br />
      <br />
      <ol>
        <li>(4 pts) Which of the lines of code is a <em>pre-processor directive</em> that pulls in information related to the square root function?<br />
          <br />
          <br />
        </li>
        <li>(4 pts) Section 2.1 describes declarations and statements. Java and C++ also have declarations and statements—in those languages, the two can be interleaved in many different orders. That is not true in C, though. <br />
          <br />
          Instead, in C, which must come first: declarations, or statements? <br />
          <br />
          <br />
          <?php require("../pleaseTurnOver.php"); ?>
        </li>
      </ol>
  </li>
<li>(4 pts) In Section 2.2, the author mentions that C is a case-sensitive language. What does this mean? <br />
  <br />
  <br />
  <br />
  <br />
  <br />  
  <br />
</li>
<li>Section 2.2 describes both scientific notaton, and how to use #define to set up the value of a symbolic constant.<br />
      <ol>
        <li>(3 pts) Using these two ideas, write the #define that sets up the symbol AVOGADRO to have the value 6.02214179×10<sup>23</sup><br />
          <br />
          <br />
          <br />
          <br />
        </li>
        <li>(3 pts) A <code>#define </code>is an example of a pre-processor directive. <br />
          What is the other pre-processor directive we've already encounted in Chapter 2? <br />
            <br />
            <br />
            <br />
          <br />
        </li>
        <li>(2 pts) All declarations and statements in C end with a semicolon. Is this true of pre-processor directives?<br />  
          <br />  
          <br />
          <br />  
          <br />
                        </li>
      </ol>
</li>
<li>Section 2.2 describes ASCII codes—and also refers you to an appendix where you can look them up for any character.<br />
  <br />
  <ol>
    <li>(2 pts) What is the ASCII code for the capital letter <code>'A'</code>?<br />
      <br />
      <br />
    </li>
    <li>(2 pts) What is the ASCII code for the lowercase letter <code>'a'</code> ?<br />
      <br />
      <br />
    </li>
    <li>(2 pts) What is the ASCII code for the digit <code>'0'</code> (zero)?<br />
      <br />
      <br />
    </li>
    <li>(2 pts) What is the ASCII code for the space character <code>' '</code> ?<br />
      <br />
      <br />
      </li>
    </ol>
</li>
<li>Section 2.3 discusses both unary operators and binary operators.
  <br />
  <br />
  <ol>
    <li>(2 pts) Give an example of a unary operator<br />
      <br />
      <br />
      <br />
      </li>
      <li>(2 pts) Give an example of a binary operator<br />
        <br />
        <br />
      </li>
    </ol>
</li>
</ol>
<ol><p>&nbsp;  </p>
</ol>
<hr />
End of H05
</body>
</html>
