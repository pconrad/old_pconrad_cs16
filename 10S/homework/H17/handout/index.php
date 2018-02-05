<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, H17 Handout (even more on structs)</title>
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
<h1>CS16, 10S, <strong>Handout to go with H17</strong> (even more on structs) (<a href="handout.H17.pdf">printable PDF</a>)</h1>
<p>Available online at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H17/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H17/handout<br />
</a>The assignment is available at <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H17">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H17</a><br />
</p>
<hr />
<p>This handout—which is your reading assignment for H17—covers more about structs, which are not covered in the textbook until Chapter 7. We are covering them a bit earlier than the textbook coverage, because they will open up some more interesting problem solving opportunities. This builds on the <a href="../../H13/handout">handout from H13</a> and the <a href="../../H14/handout">handout from H14</a></p>
<p>If you want to read some additional material about structs, you may read Section 7.1 and 7.2 in the Etter text, or Section 12.1 of the online Oualline text (<a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">on-campus link</a>, <a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">off-campus link</a>)</p>
<hr />
<div style="font-size: 1.4em;">
<h3>structs and the idea of abstraction</h3>
<p>One of the useful aspects of structs is that they allow us to  work with more data in a single operation. This is much more convenient than having to manipulate each individual number separately. For instance, with the following definition... </p>
<pre>struct Point
{
  double x;
  double y;
};
</pre>
<p>... we can think in terms of a &quot;point&quot; rather than having to work with the x and the y as separate items.</p>
<p>And with the definition...
</p>
<pre>struct Time
{
  int hours;
  int minutes;
};
</pre>
<p>... we can think in terms of working with a time of day as a single item, rather than working with the hours and minutes separately.</p>

<p>Thus structs are a basic tool of <em>abstraction</em>, which is one of the most important ideas in Computer Science.</p>  

<p>Our study of structs is also laying a foundation here for studying the ideas of Object-Oriented Programming in later courses, including CS24,32,48, and 56.   Even if you don't go on to take further CS courses formally at UCSB, if you have any involvement in programming, you are bound to encounter object-oriented programming.  So this is important foundational material.</p>
<p>In this homework assignment, we build on H13 and H14 by covering: (a) using assignment statements with entire structs, or members of structs (b) using structs with pointers, (c) arrays of structs, (d) arrays inside structs and (e) structs inside other structs</p>
</div>
<?php require("../../pleaseTurnOver.php"); ?>
<h3>(a) Using assignment statements with structs</h3>
<p>Suppose we declare three struct Time variables and initialize them as follows:</p>
<pre>
  struct Time t1 = {8,15};
  struct Time t2 = {12,30};
  struct Time temp;
</pre>
<p>We can then use assignment statements with these structs just like we would with any other variable.  Here, for example are three assignment statements that cause <code>t1</code> and <code>t2</code> to swap their values:</p>
<pre>
  temp = t1; 
  t1 = t2;
  t2 = temp;
</pre>
<p>The file <code><a href="code/assignment">assignment.c</a></code> in the <code><a href="code">code</a></code> directory associated with this assignment contains a full C program showing this code in context&mdash;you are encouraged to go online where you can follow the links and look at the entire program.    You can also copy this code into your own  <code>~/cs16/H17</code> directory with this command:</p>
<pre>mkdir ~/cs16/H17<br />cp -r /cs/faculty/pconrad/public_html/cs16/10S/homework/H17/handout/code/* ~/cs16/H17</pre>
<p>After you copy the code, you can compile and run the code for yourself to see how this works.  You may like to experiment with the code to investigate further how struct assignment works—this may be helpful as you work on the H17 problems.</p>

<h3>(c) arrays of structs</h3>
<div class="floatingBox" style="width:15em; margin-left:1em;">
<p>As a reminder, here's the definition:</p>
<pre>struct Time
{
  int hours;
  int minutes;
};
</pre>
</div>
<p>Once we have a struct definition like struct Time (see box to the right) we can make an array of struct Time. For example, if we wanted to store the typical starting times Tuesday/Thursday classes at UCSB, we could create an array like this:<br />
  <br />
<pre>
// make an array of 6 struct Time variables
struct Time classTimesTR[6]; </pre>
<p>And initialize the elements of the array with assignment statements like this:</p>
<pre>
classTimesTR[0].hours = 8; classTimesTR[0].minutes=0;
classTimesTR[1].hours = 9; classTimesTR[1].minutes=30;
classTimesTR[2].hours = 11; classTimesTR[2].minutes=0;
classTimesTR[3].hours = 12; classTimesTR[3].minutes=30;
classTimesTR[4].hours = 14; classTimesTR[4].minutes=0;
classTimesTR[5].hours = 15; classTimesTR[5].minutes=30;
</pre>
<p>We could then call a printTime function in a for loop to print each of these times:</p>
<pre>
  int i;
  for (i=0; i<6; i++)
    {
      printf(" classTimesTR[%i]=",i); printTime(classTimesTR[i]); printf("\n");
    }
</pre>


<p>The output would look like this:</p>
<pre>-bash-4.1$ ./arrayOfStruct 
 classTimesTR[0]=08:00
 classTimesTR[1]=09:30
 classTimesTR[2]=11:00
 classTimesTR[3]=12:30
 classTimesTR[4]=14:00
 classTimesTR[5]=15:30
-bash-4.1$ 

</pre>
<p>To see this code in the context of a complete program, look at <a href="code/arrayOfStruct.c">arrayOfStruct.c</a> in the <a href="code">code</a> directory. Experimenting with this program may help you answer the questions on this homework assignment.</p>
<hr />
End of  handout that goes with H17</div>
</body>
</html>
