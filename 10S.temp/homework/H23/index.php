<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H20","Wed","Lecture","05.12",
		  "The Type Expresssion Game (handout, code)");
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
		  require("../cs16ShortHomeworkHeader.php");?>
  <div class="floatingBox">Also read Sections 6.4, 7.1 and 7.2 in Etter for the next Midterm Exam.
</div>
<div style="font-size:0.9em;">
<p>For this homework, the preparation is material on the following handout: <a href="handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/<?php echo $h->getAssignment();?>/handout</a> (<a href="handout/handout.<?php echo $h->getAssignment();?>.pdf">pdf</a> link)</p>



<p>Once you've read that handout, write answers to the questions on this sheet<br />  
(use the <a href="<?php echo $h->getAssignment();?>.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<div class="floatingBox" style="width: 15em;">
<p><strong>Hints</strong>--for full credit:</p>
<ul>
  <li> don't write<em> pointer to character</em>; <br />
    instead, write <strong>char&nbsp;*</strong></li>
  <li>don't write<em> address of int</em>; <br />
    instead, write <strong>int *</strong></li>
</ul>
</div>
<p>Together with this homework assignment, there is a program</p>
<ul>
  <li>If you didn't get the program handout, you can find the program at:<br />
    <a href="code/types.c" style="font-size:0.8em;">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H20/code/types.c</a><br />
  </li>
</ul>

<p>Assuming each of the expressions below appeared in this program, indicate the type they would have. The first few are done for you as an example.</p>

</div>
<p>(40 pts)&mdash;2 points each for the ones not already filled in<br />
</p>
<table border="1" cellspacing="1" cellpadding="1">
  <tr>
    <td width="90">Expression</td>
    <td width="199">Type</td>
    <td width="13" bgcolor="#000000">&nbsp;&nbsp; &nbsp;  </td>
    <td width="90">Expression</td>
    <td width="199">Type</td>
  </tr>
  <tr>
    <td>x</td>
    <td><span class="style5">int</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>end</td>
    <td>&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>
  </tr>
  <tr>
    <td>&amp;x</td>
    <td><span class="style5">int *</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>end.hrs</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>*x</td>
    <td><span class="style5">error</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>end-&gt;min</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>c.center</td>
    <td><span class="style5">struct Point</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>&amp;(end-&gt;min)</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>&amp;(c.center.x)</td>
    <td><span class="style5">double *</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>pt</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>*val</td>
    <td><span class="style5">double</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>argc</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>c.x</td>
    <td><span class="style5">error</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>&amp;argc</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td height="35">&amp;end</td>
    <td><span class="style5">struct Time **</span></td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>*argc</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>(*cir).x</td>
    <td>&nbsp;</td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>argv[0]</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>(*cir).radius</td>
    <td>&nbsp;</td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>argv[0][0]</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>cir-&gt;center</td>
    <td>&nbsp;</td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>&amp;num</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>cir-&gt;center.y</td>
    <td>&nbsp;</td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>&amp;y</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>cir-&gt;center-&gt;y</td>
    <td>&nbsp;</td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>&amp;val</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>start</td>
    <td>&nbsp;</td>
    <td bgcolor="#000000">&nbsp;</td>
    <td>*num</td>
    <td>&nbsp;</td>
  </tr>
</table>
<p>End of <?php echo $h->getAssignment(); ?></p>
</div>
<h1 style="page-break-before:always; font-size: 1.2em;"><strong>Code for CS16, Homework H20, Spring 2010</strong></h1>
<hr />
<pre>
<?php require("code/types.c"); ?>
</pre>
<hr />
</body>
</html>
