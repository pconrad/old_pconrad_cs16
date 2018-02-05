<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, H13 Handout (intro to structs)</title>
<script type="text/javascript" src="../../exam.js" ></script>
<link rel="stylesheet" type="text/css" href="../../homework.css" />
<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}

td {text-align:center; height:1.5em;}
h3 {font-size: 1.0em;}

div.floatingBox {width: 10em; border-color:#003399; border-size: 4px; border-style: outset; float: right; padding:3px;}
div#container {width: 800px;}
p {margin-top: 0px; margin-bottom: 0px; padding-top:5px; padding-bottom:6px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:4px;}
-->
</style>
</head>

<body onload="updatePointCount();">
<div id="container">
<h1>CS16, 10S, <strong>Handout to go with H13</strong> (intro to structs) (<a href="handout.H13.pdf">printable PDF</a>)</h1>
<p>Available online at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H13/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H13/handout<br />
</a>The assignment is available at <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H13">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H13</a><br />
</p>
<hr />
<p>This handout—which is your reading assignment for H13—covers structs, which are not covered in the textbook until Chapter 7. We are covering them a bit earlier than the textbook coverage, because they will open up some more interesting problem solving opportunities.</p>
<p>However, if you want to read some additional material about structs, you may read Section 7.1 and 7.2 in the Etter text, or Section 12.1 of the online Oualline text (<a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">on-campus link</a>, <a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">off-campus link</a>)</p>
<hr />
<h3>Introduction to structs in C</h3>
<p>In addition to the data types that we've seen so far—data types such as int, double, char, char *, etc.—C gives us the ability to define new data types by combining the existing ones.</p>
<p>For example, we can define a new data type called <code>struct Time</code> that represents  a combination of hours and minutes. </p>

<pre>struct Time
{
   int hours;
   int minutes;
};
</pre>
<div class="floatingBox">The things inside a struct like <code>hours</code> and <code>minutes</code> are called <em>fields</em> in the struct, or <em>members</em> of the struct.</div>
<p>Or, we can define a struct for a GPS coordinate that includes both latitude and longitude:</p>
<pre>struct GPSCoord
{
   double lat;
   double lon; 
};</pre>
<div class="floatingBox"><strong>Syntax tip:</strong> notice that a struct definition has a semicolon after the final closing brace.</div>
<p>It is possible to mix data types in a struct, and to include arrays in a struct—for example:</p>
<pre>struct Student
{
   char name[20];
   int permNumber;
   double gpa;
};</pre>
<p>Better style, in this case, would be to use a #define or a const int for the length of the array, as in these two examples:</p>
<div class="floatingBox"><strong>Syntax tip:</strong> when defining a constant with a <code>#define,</code> <strong>don't </strong>use = and don't put a semicolon on the end. But, when using <code><br />
  const int</code>, you <strong>do</strong> need = and a semicolon.</div>
<table border="1" cellspacing="5" cellpadding="1">
  <tr>
    <th scope="col">using a #define</th>
    <th scope="col">using a const int</th>
  </tr>
  <tr>
    <td><div align="left">
      <pre style="padding:0.4em;">#define STUDENT_NAME_LEN 20
struct Student
{
   char name[STUDENT_NAME_LEN];
   int permNumber;
   double gpa;   
};</pre>
    </div></td>
    <td><div align="left">
      <pre style="padding:0.4em;">const int STUDENT_NAME_LEN=20;
struct Student
{
   char name[STUDENT_NAME_LEN];
   int permNumber;
   double gpa;   
};</pre>
    </div></td>
  </tr>
</table>
<p>Using a <code>#define</code> or <code>const int</code> declaration for the size of the array, i.e. <code>STUDENT_NAME_LEN</code> is useful when we we need to know the size of the array later in the code—for example, to check whether some name we want to store in the <code>name</code> field—from a file, or from the user's input—will fit or not. If it doesn't fit, we have to trim it down—if we just <code>strcpy</code> it into the <code>name</code> field, and it is too big, it might overflow into the <code>permNumber</code> or <code>gpa</code> fields.</p>
<p>Whether to use a <code>#define</code> or a <code>const int</code> is a style issue. My opinion is that either is fine as long as you are consistent—but  you'll see both in other people's code, so it is helpful to know both ways.</p>
<?php require("../../pleaseTurnOver.php");?>
<h3>A struct definition does NOT create a variable, or allocate any memory. </h3>
<p>To make this point more clearly, lets us contrast this with the following declaration of the variable <code>x1</code>:</p>
<pre>double x1=3.5;</pre>

<p>For this declaration, the C compiler (or Ch interpreter) sets aside space—typically 64 bits, though this is machine dependent—for the variable <code>x1</code>. A new variable is created called<code> x1</code>, with an address, a type, and an initial value of 3.5.</p>
<p>By contrast, this declaration:<br />
</p>
<pre>struct Point
{
  double x;
  double y;
};</pre>
<p>sets aside NO space in memory. It only defines a new type. Creating a variable of type <code>struct Point </code>is a separate step, and it looks like this:</p>
<pre>struct Point p1;</pre>
<p>That declares a variable <code>p1</code> of type <code>struct Point</code>—just like the variable x1 above is of type double. The fields in the variable are not initialized to any values in particular.</p>
<div class="floatingBox">The variables p1 and p2 are called <em>instances</em> of a <code>struct Point</code></div>
<p>To initialize the variable <code>p1</code>, we can write two assignment statements.<br />
The <code>dot operator</code> (.) is used to &quot;get inside the struct&quot; and get access to the fields—it follows <br />
the variable (in this case <code>p1</code>) and comes before the field name (in this case, either <code>x</code> or <code>y</code>)</p>
<pre>
  p1.x = 3.5;
  p1.y = 6.0;
</pre>
<p>We can also declare a variable of type struct Point and give it an initial value all at the same time, like this:</p>
<pre>struct Point p2 = {1.0,-1.0};
</pre>

<h3>struct definition are like blueprints—or cookie cutters</h3>
<ul>
  <li>A blueprint helps you build a house—but you can't live in a blueprint.<br />
  On the other hand, from one blueprint, you can build many houses that are identical, except for their location</li>
  <li>A cookie cutter is not a delicious treat—you can't eat a cookie cutter.<br />
  But you can use it to create many identically shaped cookies.</li>
</ul>
<p>So, by analogy, a struct definition does not create any place in memory that we can store something—but once we have it, we can create many variables that all have an identical structure.</p>
<h3>There's more to learn</h3>
<p>Additional topics having to do with structs include (a)&nbsp;passing them as parameters to functions (b)&nbsp;returning them as the result of a function (c)&nbsp;using assignment statements with entire structs, or members of structs (d)&nbsp;using structs with pointers, (e)&nbsp;arrays of structs (f)&nbsp;arrays inside structs. But save that for the next assignment—what you have on this handout is enough to get started.</p>
<p>We should also mention that working with structs in C is laying the foundation for one of the most important topics you'll study in the lower division CS curriculum—namely the idea of classes in C++. C++ classes are covered in the next two courses that follow on after CS24 and CS32. The idea of a C++ class builds directly on the idea of a struct in C, so it is important to get very comfortable with structs in C to be well prepared for CS24 and CS32.</p>
<p>If it is not yet clear why structs are useful, don't worry—there will be examples in lecture that will help to make this more clear.</p>
<hr />
End of  handout that goes with H13
</div>
</body>
</html>
