<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H15","Mon","Lecture","05.03",
		  "Addresses and Pointers (Etter 6.1, 6.2)");
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
<p>Read Section 6.1and 6.2 in your Etter textbook—and review your lecture notes from the week of May 26,28,30.</p>
<p>In addition, keep in mind that in the textbook, Etter uses %u as the format specifier for pointers, while in lecture I tend to use %p instead. The difference is that %u prints the address value as an &quot;unsigned integer&quot;, in base 10, while %p prints the address value in hexadecimal.</p>
<p>Then answer these questions:<strong><br />
    </strong></p>
<hr />
<ol>
  <li>p. 285 shows the program <a href="../../../textbooks/etterC3e/Source/C/p6_1.c">chapter6_1</a> and p. 285 shows the program <a href="../../../textbooks/etterC3e/Source/C/p6_2.c">chapter6_2</a> <br />
    <br />
    (In the online version of this homework, you can click on those names as links and get access to the source code in case you want to copy and paste the code and run it.)<br />
      <br />
    <br />
    <ol>
      <li>(3 pts) p. 284 in your book shows sample output from the program <a href="../../../textbooks/etterC3e/Source/C/p6_1.c">chapter6_1:</a><br />
<pre>a = 1; address of a = 1245052<br />
b = 2; address of b = 1245048<br />
<br /></pre> 
<p>My question to you is this: if you ran this program on CSIL, would the output be the same or different?  If different, which parts would be the same, and which parts would be different? And most importantly, <strong>explain why. <br />
  <br />
</strong>(Hint: the answer I'm looking for can be found somewhere in the textbook on pages 284-285.)<br />
  <br />
  <br />
  <br />
  <br />
  <br />
  <br />
</p>       
      </li>
      <li>(3 pts) Same question, but for the sample output from the program  <a href="../../../textbooks/etterC3e/Source/C/p6_2.c">chapter6_2</a> <br />
          <br />
        <pre>a = -858993460;  address of a = 1245052<br />b = -858993460;  address of b = 1245048<br />                      </pre>
        (Hint: again, the answer I'm looking for can be found somewhere in the textbook on pages 284-285.)<br />
        <br />
        <br />
        <br />
        <br />
        <br />
        <br />
      <?php require("../pleaseTurnOver.php");?>
      </li>
    </ol>
  </li>
  <li>On p. 288, there are four practice problems—the answers to those problems can be found on p. 417 in your textbook.<br />
    <br />
  The following problems should be done in a similar fashion—of course, the answers are NOT in your book—you need to come up with those on your own!<br />
  <br />
  Remember that if p is a pointer, its meaning depends on whether it is deferenced with a *.<br />
  Also, how you think about it depends on whether it is on the right hand side (<em><strong>rhs</strong></em>) of an assignment statment (<em><strong>rvalue</strong></em>) or the left hand side (<em><strong>lhs</strong></em>) of an assignment statment (<em><strong>lvalue</strong></em>)<br />
  <br />
  <ul>
    <li>p as an <em><strong>rvalue</strong></em> returns the address stored in p (i.e. the address of what p points to)</li>
    <li>(*p) as an <em><strong>rvalue</strong></em> returns the value of what p points to (e.g. an int, if p is an int *)</li>
    <li>p as an <em><strong>lvalue</strong></em> means store the result of the <em><strong>rhs</strong></em> (which should be an address) in p.<br />
    i.e. make p point to some place new!</li>
    <li>(*p) as an lvalue doesn't change <em><strong>where</strong></em> p points—it changes the value</li>
  </ul>
    <br />
    <ol>
      <li>(2 pts) <br />
        <br />
        <pre>int a=3, b=4, *ptr;<br /><br />ptr = &amp;a;
        </pre>
        <p>&nbsp;</p>
      </li>
      <li>(2 pts) <br />
        <br />
        <pre>int a=5, b=6, *ptr=&amp;a;<br /><br />b = *ptr;
         </pre>
        <p>&nbsp;</p>
      </li>
      <li>(2 pts) <br />
        <br />
        <pre>int a=7, b=8, c=9, *ptr=&amp;b;<br /><br />a = *ptr;<br />*ptr = c;
              </pre>
        <p>&nbsp;</p>
      </li>
      <li>(3 pts) <br />
        <br />
        <pre>int a=10, b=11, c=12, *p1=&amp;b, *p2;<br /><br />p2 = &amp;c;
a = *p1;
p1 = &amp;a;
<br /><br />
              </pre>
      </li>
      <li>(3 pts) <br />
        <br />
        <pre>int a=13, b=14, *p1=&amp;a, *p2=&amp;b, *p3;<br /><br />(*p1) = (*p2);
p3 = p1;</pre>
        <p>&nbsp;</p>
      </li>  
      <li>(3 pts) <br />
        <br />
        <pre>int a=15, b=16, *p1=&amp;a, *p2=&amp;b, *p3;<br /><br />p3 = p1;<br />p1 = p2;<br />p2 = p3;<br /></pre>
        <p>&nbsp;</p>
      </li>
    </ol>
  </li>
  <!--- -->
</ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
