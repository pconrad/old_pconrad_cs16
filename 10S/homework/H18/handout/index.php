<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, H18 Handout (even more on structs)</title>
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
p {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:5px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:4px;}
-->
</style>
</head>

<body onload="updatePointCount();">
<div id="container">
<h1>CS16, 10S, <strong>Handout to go with H18</strong> (structs and pointers) (<a href="handout.H18.pdf">printable PDF</a>)</h1>
<p>Available online at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H18/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H18/handout<br />
</a>The assignment is available at <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H18">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H18</a><br />
</p>
<hr />
<p>This handout—which is your reading assignment for H18—covers the use of pointers with structs—which is not covered in the textbook until Chapter 7. We are covering them a bit earlier than the textbook coverage, because they will open up some more interesting problem solving opportunities. This builds on the <a href="../../H13/handout">handout from H13</a>  the <a href="../../H14/handout">handout from H14</a>, and the <a href="../../H17/handout">handout from H17</a>.</p>
<p>If you want to read some additional material about structs, you may read Section 7.1 and 7.2 in the Etter text, or Section 12.1 of the online Oualline text (<a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">on-campus link</a>, <a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">off-campus link</a>)</p>
<hr />
<h3>structs and pointers</h3>
<p>Let's look at how structs work with pointers, using the example of struct Time (see box at right.)</p>
<div class="floatingBox">
<pre>struct Time
{
  int hours;
  int minutes;
};
</pre>
</div>
<p>Suppose we have a variable t1 of type <code>struct Time</code>:</p>
 <pre> struct Time t1</pre>
 <br />
<p>If we write <code>&amp;t1</code> that means  <em>address of t1</em>—i.e. the location of <code>t1</code> in memory.</p>
<ul>
  <li>What we end up with is a <code>struct Time *</code> </li>
  <li>When reading out loud, we read this as <em>struct Time star</em></li>
  <li>What it means is <em>the address of a struct Time</em>, or equivalently, <em>a pointer to a struct Time</em></li>
  </ul>
<p>On the second page of this handout, we'll look at where a <code>struct Time *</code> could be useful in practice—but first, let's just review some syntax related to pointers, and introduce one new piece of syntax.
<h3>Declaring a pointer to a struct
</h3>
<p>When declaring variables, we use:
<ul>
  <li><code> struct Time</code> for a variable that really <em>is</em> a struct Time (i.e. it has space for the <code>hours</code> part and the <code>minutes</code> part)</li>
  <li><code>struct Time *</code> for a variable that only contains a memory address— someplace a <code>struct Time</code> can be found.</li>
</ul>
<p>Example:</p>
<pre>struct Time t1;  // contains fields t1.hours and t1.minutes (8 bytes long)
struct Time *tp; // a pointer—32 bits (4 bytes).  Stores an address
</pre>
<p>We can initialize the tp variable using the &amp; operator so that it points to t1:</p>
<pre>tp = &amp;t1;</pre>
<p>Once we do that, then t1 and (*tp) refer to the same place in memory—this is the &quot;dereference operation&quot; your read about in Chapter 6 (and worked with in homeworks H15 and H16). We can then access the  fields of t1 through the pointer tp in two different ways. That is, in each row, all three expressions are, in this instance, interchangable:</p>
<table width="100%" border="1" cellspacing="1" cellpadding="5">
  <tr>
    <th scope="col">This expression:</th>
    <th scope="col">is equivalent to this one:</th>
    <th scope="col">or this one:<br /></th>
  </tr>
  <tr>
    <td><code>t1.hours</code></td>
    <td><code>(*tp).hours</code></td>
    <td><code>tp-&gt;hours</code></td>
  </tr>
  <tr>
    <td><code>t1.minutes</code></td>
    <td><code>(*tp).minutes</code></td>
    <td><code>tp-&gt;minutes</code></td>
  </tr>
</table>
<p>&nbsp;</p>
<p>In general, for any expression of the form <code>(*a).b </code></p>
<ul>
  <li>For the expression to be legal, <code>a</code> must be a pointer, and <code>b</code> must be a field in the thing that <code>a</code> points to.</li>
  <li>The expression <code>(*a).b</code> is equivalent to <code>a-&gt;b</code></li>
</ul>
<?php require("../../pleaseTurnOver.php");?>
<h3>Why do we care about using structs with pointers?</h3>
<p>Using structs with pointers turns out to be a very important aspect of C/C++ programming.  </p>
<p>Having this capability opens up a lot of possibilities for structs to &quot;refer&quot; to other structs by pointing to them. This allows us to encode <em>relationships between various pieces of data</em>—for example, the relationship between a struct for an airline flight (say United Airlines flight 6840) and structs that represent the departure and arrival airports for that flight (SBA and SFO). </p>
<p>In CS24, this concept is extended to relationships between <em>objects</em>—which are similar to <em>structs</em> in C, but with a few extra rules. In addition to encoding relationships, we can also use pointers in structs to make <em>linked lists</em> and <em>trees—</em>these are ways of grouping data items together that provide an alternative to arrays. Linked lists and trees have many nice properties that arrays don't have, especially for making programs run fast.</p>
<p>In any case, in CS16 we probably won't get as far as covering structs (or objects) that refer to other structs—even though that's one of the main motivations for covering structs with pointers. </p>
<p>I bring this up because for the examples I will show you, there are alternative ways of solving the problem that don't use pointers with structs—and this may give you the false notion that learning how to use structs with pointers isn't that important. <strong>Nothing could be further from the truth!</strong> Rather, using pointers with structs is so crucial that I want to be sure you understand it. Therefore, we are covering it as early as possible in the course, to give you plenty of practice with this important topic.</p>
<h3>Three ways of assigning a value to a struct—case study in using pointers with structs</h3>
<div class="floatingBox" style="width:15em; margin-left:1em;">
<p>As a reminder, here's the definition:</p>
<pre>struct Time
{
  int hours;
  int minutes;
};
</pre>
</div>
<p>One of the ways we use pointers with structs is when we are passing a struct to a function, and we want to give that function access to modify the struct directly. For example, the following function will assign the values of the <code>h</code> and <code>m</code> parameters to the <code>hours</code> and <code>minutes</code> members of a <code>struct Time</code>.</p>
<pre>
// assign a struct Time a new value, using pointers                           
void setTime(struct Time *t, int h, int m)
{
  (*t).hours = h; // or we could write t->hours = h;                            
  (*t).minutes = m; // or we could write t->minutes = m;                        
}
</pre>
<p>If we have a struct time called t1 declared as follows:</p>
<pre>struct Time t1 = {7,10}; // initialize to 7:10</pre>
<p>then we can call this function to change t1 to the time 8:30 with this function call:</p>
<pre>setTime(&amp;t1, 8, 30); // change t1 to 8:30 </pre>
<p>This would be an alternative to writing:</p>
<pre>
  t1.hours = 8;
  t1.minutes = 30;
 </pre>
  <p>The program <code>structPointers.c</code> in the code directory for this assignment illustrates both of these alternatives in the context of a complete C program—and also shows yet another way to initialize a struct with a function (without using pointers.) You are encouraged to go online and access this complete program through the links provided in the previous sentence. You can also copy this code into your own  <code>~/cs16/H18</code> directory with this command:</p>
  <pre>mkdir ~/cs16/H18<br />cp -r /cs/faculty/pconrad/public_html/cs16/10S/homework/H18/handout/code/* ~/cs16/H18</pre>
  <p>After you copy the code, you can compile and run the code for yourself to see how this works.  You may like to experiment with the code to investigate further how struct pointers work—this may help you with the H18 homework assignment.</p>
  <hr />
End of  handout that goes with H18
<p>&nbsp;</p>
</div>
</body>
</html>
