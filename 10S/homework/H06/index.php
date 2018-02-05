<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H06","Fri","Lecture","04.09",
		  "Etter 2.3 and handout, (assignment, operators, operands)");
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
          
<p>In addition to reading Etter 2.3 again, please also review the following handout  that was distributed in lecture, and is also available online at this link: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H06/handout</a><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet  (use the <a href="H06.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol>
  <li>
    <p><strong>Question: </strong>Given the expression 3 + 4 * 5<br />
      <br />
    Note that you don't have to give as detailed an explanation as on the handout—those detailed explanations were to help you understand where the answers came from. All that you need to provide below is the actual answer to the question.</p>
    <ol>
      <li>(2 pts) What is the value of the expression?<br />
        <br />
      </li>
      <li>(2 pts) What is the type of the expression?<br />
        <br />
      </li>
      <li>(2 pts) How many binary operators are in this expression?<br />
        <br />
      </li>
      <li>(2 pts) What is the left operand of the * operator?<br />
        <br />
      </li>
      <li>(2 pts) What is the right operand of the + operator?<br />
        <?php require("../pleaseTurnOver.php"); ?>
    </li>
    </ol>
    </li>
    <li>Question: Given the expression 6 == (2 + 4) <br />
        <br />
      <ol>
        <li>(2 pts) What is the value of the expression?<br />
          <br />
        </li>
        <li>(2 pts) What is the type of the expression?<br />
          <br />
        </li>
        <li>(2 pts) How many binary operators are in this expression?<br />
          <br />
        </li>
        <li>(2 pts) What are the operands of the == operator?<br />
          <br />
        </li>
      </ol>
    </li>
    <li>Question: Given the expression 7 &gt; (2 + 4 * 5) <br />
      <br />
      <ol>
        <li>(2 pts) What is the value of the expression?<br />
          <br />
        </li>
          <li>(2 pts) What is the type of the expression?<br />
            <br />
        </li>
          <li>(2 pts) How many binary operators are in this expression, and what are they?<br />
            <br />
        </li>
          <li>(2 pts) What are the operands of the + operator?<br />
            <br />
            <br />
        </li>
      </ol>
  </li>
    <li><strong>Question</strong>: Suppose that x is a variable of type int, with the value 3, and y is variable of type int with the value 2.
      <br />
      <br />
      <p>In the expression x = - (y * 3)</p>
      <ol>
        <li>(2 pts) What is the value of the expression?<br />
          <br />
        </li>
        <li>(2 pts) What is the type of the expression?<br />
          <br />
        </li>
        <li>(2 pts) How many binary operators are in this expression?<br />
          <br />
        </li>
        <li>(2 pts) How many unary operators are in this expression?<br />
          <br />
        </li>
        <li>(2 pts) What is the operand of the unary operator?<br />
          <br />
        </li>
        <li>(2 pts) What are the operands of the = operator<br />
          <br />
        </li>
      </ol>
  </li>
    <li>(2 pts) Briefly explain the difference between the = operator and the == operator.<br />
        <br />
      <br />
      <br />
      </li>
  <!--- -->
</ol>
<hr />
End of <?php echo $h->getAssignment(); ?>
</body>
</html>
