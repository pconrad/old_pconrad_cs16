<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H16","Wed","Lecture","05.05",
		  "Addresses. Pointers and Arrays (Etter 6.1, 6.2)");
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
<p>Read Section 6.1and 6.2 in your Etter textbook—and review your lecture notes from the week of April 26,28,30.</p>
<p>In addition, keep in mind that in the textbook, Etter uses %u as the format specifier for pointers, while in lecture I tend to use %p instead. <br />
  <br />
The difference is that %u prints the address value as an &quot;unsigned integer&quot;, in base 10, while %p prints the address value in hexadecimal.</p>
<p>&nbsp;</p>
<p>On p. 294, there are eight practice problems—the answers to those problems can be found on p. 418 in your textbook.</p>
<p>Work through those problems for practice and then check your answers against those in the back of the book.</p>
<ul>
  <li>	Note, as you check your answers, that the questions go across and then down (first column is all the odd numbered problems) while the answers go down then across (first column is answers 1–4.)</li>
</ul>
<p>Then answer the questions on the back of this sheet.</p>
<?php require("../pleaseTurnOver.php"); ?>
<hr />
<ol>
    <li>(10 pts) Assume that an array <code>h</code> is defined with the following statement:<br />
      <br />
      <code>int h[] = {13,42,26,98,45,11,19};</code><br />
      <code>int *ptr1 = &amp;h[1];</code><br />
      <p>Give a diagram of memory allocation similar to the one shown in the answer on p. 418 to the practice questions.<br />
        <br />
      </p>
      <table border="1" cellspacing="1" cellpadding="1">
        <tr>
          <th scope="col">&nbsp;</th>
          <th scope="col">value</th>
          <th scope="col">offset</th>
        </tr>
        <tr>
          <td>h[0]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
        <tr>
          <td>h[1]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
        <tr>
          <td>h[2]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
        <tr>
          <td>h[3]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
        <tr>
          <td>h[4]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
        <tr>
          <td>h[5]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
        <tr>
          <td>h[6]</td>
          <td>&nbsp;</td>
          <td>&nbsp;</td>
        </tr>
      </table>
      <p><br />
      </p>
    </li>
    <li>Continuing with the same definitions of <code>h</code> and <code>ptr1</code> give the value of each of these expressions:<br />
      <br />
      <blockquote>
        <ol>
          <li>(5 pts) <code>*h</code><br />
            <br />
          </li>
          <li>(5 pts) <code>*(h+1)</code><br />
            <br />
          </li>
          <li>(5 pts) <code>*h</code> + 1<br />
              <br />
          </li>
          <li>(5 pts) <code>*h + 2</code><br />
            <br />
          </li>
          <li>(5 pts) <code>*ptr1</code><br />
            <br />
          </li>
          <li>(5 pts) <code>*(ptr1 + 1)</code><br />
            <br />
          </li>
        </ol>
      </blockquote>
    </li>
  </ol>
<hr />
<p> End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
