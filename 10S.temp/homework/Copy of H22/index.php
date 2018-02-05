<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H22","Fri","Lab","05.26",
		  "More on binary (Oualline, Chapter 11)");
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
<p>For this homework, the preparation is the lecture on 05/26 and/or Sections 11.1 through 11.6 in Chapter 11 in the online book available at these links: from <a href="http://proquest.safaribooksonline.com/1-56592-306-5/pcp3-CHP-11">on campus</a>, from <a href="https://login.proxy.library.ucsb.edu:9443/login?qurl=http%3a%2f%2fproquest.safaribooksonline.com%2f1-56592-306-5%2fpcp3-CHP-11">off campus</a></p>
<p>Use the homework link on the course web page, and navigate to this assignment to find these links online.</p>
<p>Note that you can check all of the following answers by typing in the expressions at the Ch prompt and seeing what comes back. <strong>However, you'll have to solve similar problems on the final exam by hand, without a calculator. </strong>So I would encourage you to <strong>use Ch to check your answers, not to come up with your answers.</strong> But you are free to do as you wish. The primary purpose of the homework is to help you prepare for the exams—so how you use Ch here isn't a question of academic honesty, but rather a question of plain old common sense in terms of how to spend your time.<br />
</p>
<ol style="clear:both;"><li>
  <div class="floatingBox"  style="width:30em;">
 <code>0x1A</code> means the hexadecimal value 1A, because any integer that starts with <code>0x</code> in C is interpreted as hexadecimal. It evalutes to 26 because 
 <span class="floatingBox" ><code>0x1A</code> </span> is 0001 1010 in binary, and if we add up those bits (16 + 8 + 2) we get 26.<br />
  <br />
  024 means the octal value 24, because any integer that starts with the digit 0 is interpreted as an octal constant. In binary this is 010 100, which evalutes to 20 (16 + 4).</div>  
  <p>
  (10 pts) For each of the following expressions, show what it will evaluate to, as a simple integer, expressed in decimal format.<br />
  <br />
  The first two are done for you as examples, and explained in the box at right.<br />
  
    </p>
  <table width="100%" border="2" cellspacing="2" cellpadding="2" style="clear:both;">
    <tr>
      <th scope="col">Expression</th>
      <th scope="col">Value in decimal</th>
    </tr>
    <tr>
      <td>0x1A</td>
      <td>26</td>
    </tr>
    <tr>
      <td>024</td>
      <td>20</td>
    </tr>
    <tr>
      <td>0x2B</td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td>031</td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td>0xFF</td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td>037</td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td>0x14</td>
      <td>&nbsp;</td>
    </tr>
  </table>
 <?php require("../pleaseTurnOver.php"); ?>
</li>
<li>
  <div class="floatingBox"  style="width:25em;">
    <p>
 <code>10 &amp; 7 </code> performs a bitwise and on 10 (1010) and 7 (0111). The result is 2, because the only bit that is 1 in both 1010 and 111 is the 2 bit (i.e. the bit wise and result is 0010). <br />
 </p><p>
  <code>0xB &amp; 014</code> yields a similar result, but this time, we start by recognizing the 0xB is 1011 in binary (converted from hex), and 014 is 1100 in binary (converted from octal). Hence the result is 1000 in binary, or 8 in decimal.</p>
  <p><code>0x10 | 0x03</code> gives the answer 19.   The reason is that 0x10 is <code>0001 0000</code> in binary, and 0x03 is 0000 0011 in binary. When we take the bitwise or, we get 0001 0011 in binary, which is (16 + 2 + 1), i.e 19.</p>
  </div>  
  <p>
  (30 pts) For each of the following expressions, show what it will evaluate to, as a simple integer, expressed in decimal format.<br />
  <br />
  The first three are done for you as examples, and explained in the box at right.<br />
    <br />
    See  the reading for example of how the ^,  &lt;&lt; and &gt;&gt; operators work.<br />
    <br />
    Remember that a logical operator such as <code>&amp;&amp;</code> and <code>||</code> will always give a result of either 1 or 0, while bitwise operators <code>&amp;</code> and <code>|</code> give a result that is computed one bit at a time.<br />
    </p>
  <table width="100%" border="2" cellspacing="2" cellpadding="5" style="clear:both;">
    <tr>
      <th scope="col">Expression</th>
      <th scope="col">Value in decimal</th>
    </tr>
    <tr>
      <td><code>10 &amp; 7</code></td>
      <td>2</td>
    </tr>
    <tr>
      <td><span class="floatingBox" style="width:25em;"><code>0xB &amp; 014</code></span></td>
      <td>8</td>
    </tr>
    <tr>
      <td><code>0x10 | 0x03</code> </td>
      <td>19</td>
    </tr>
    <tr>
      <td ><code>8 | 6</code></td>
      <td >&nbsp;</td>
    </tr>
    <tr>
      <td ><code>8 &amp; 6</code></td>
      <td >&nbsp;</td>
    </tr>
    <tr>
      <td ><code>1 &lt;&lt; 4</code></td>
      <td >&nbsp;</td>
    </tr>
    <tr>
      <td ><code>64 &gt;&gt; 2</code></td>
      <td >&nbsp;</td>
    </tr>
    <tr>
      <td ><code>2^4</code></td>
      <td >&nbsp;</td>
    </tr>
    <tr>
      <td><code>7 &amp; 2</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td><code>7 | 2</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td><code>7 &amp;&amp; 2</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td><code>0x0F &amp; 0xBA</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td><code>0x0F | 0xBA</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr >
      <td><code>6 &amp;&amp; 0</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr >
      <td><code>6 || 0</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr >
      <td><code>6 &amp; 0</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr >
      <td><code>6 | 0</code></td>
      <td>&nbsp;</td>
    </tr>
    <tr >
      <td><cpde><code>6 ^ 7</code></cpde></td>
      <td>&nbsp;</td>
    </tr>
  </table>
  </li>
  </ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
