<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, Handout for H20: the type expression game</title>
<link rel="stylesheet" type="text/css" href="../../homework.css" />
<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}
div.floatRight {float:right}
div.floatLeft {float:left;}
div.tableDiv {width: 20em;}
td {text-align:center; height:1.5em;}
.strikethrough {text-decoration: line-through;}
.highlight {background-color:yellow;}
.smallerFont {font-size: 0.9em;}
.instructions {font-family: Verdana, Arial, Helvetica, sans-serif}

table.tableWithSpaceToLeftAndRight {margin-left: 3em; margin-right: 3em;}

p { margin-top: 0.4em; margin-bottom: 0.1em; padding-top: 0.1em; padding-bottom: 0.1em;}
-->
h1 {font-size: 1em; font-family: Arial, Helvetica, sans-serif; text-align:left; margin: 0em; padding: 0em;}
h2 {font-size: 1.3em; font-family: Arial, Helvetica, sans-serif; text-align:center; margin: 0em; padding: 0em; margin-top: 0.2em; margin-bottom: 0.2em;}

.style1 {font-size: small}
</style>
</head>

<body onload="updatePointCount();">
<h1>CS16, 10S, UCSB—Handout for <a href="..">H20</a>—The type expression game (<a href="handout.H20.pdf">PDF</a>)</h1>
<p style="margin:0em; padding:0em;">  <a href=".">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H20/handout</a>&nbsp;<br />
  <br />
</p>
<hr />
<div class="instructions floatingBox" style="width:12em;"><strong>PLEASE ALSO READ: <br />
In Etter, 6.4, 7.1, 7.2</strong></div>
<h2 align="center">Why type is important</h2>
<p >The concept of type is very important in C. This is also true in C++, which you'll study if you go on to CS24, CS32, and CS48. And, the way types work in C++ is very similar—almost identical, in fact— to how they work in C.
<p >When you get error messages from either the Ch interpreter or the cc compiler, the message may say things like: <code>found&nbsp;(int&nbsp;*)&nbsp;value where (int)&nbsp;value was&nbsp;expected</code>. So understanding the difference between <code>int&nbsp;</code>and&nbsp;<code>int&nbsp;*</code> is very important to getting your programs to compile correctly, and understanding the messages you get when they don't.
<h2 align="center">The basic exercise</h2>

<div class="floatingBox" style="width:25em;">
<pre>
int main(int argc, char *argv[])
{
  int a;
  int *b;
  // rest of the program would go here
  return 0;
}
</pre>
</div>
<p >A basic exercise I've used in C/C++ courses for many years is the one illustrated below. We start with a segment of code, such as the one shown in the box at the right hand side of the page.</p>
<p >This is obviously not a &quot;useful&quot; C program—to be useful, there would have to be some more code at the comment line that says &quot;rest of code goes here&quot;. However, it does give us a context to answer some questions about type.</p>
<p >The question is in the form a table where the left column contains an expression, and the right column asks what the type of that expression would be. For example:</p>

<div class="tableDiv" style="float:right; margin-right: 5em;">
<p align="center">What the correct answers are:</p>
<table border="1" cellpadding="1" cellspacing="1" class="tableWithSpaceToLeftAndRight">
  <tr>
    <td width="90">Expression</td>
    <td width="199">Type</td>
  </tr>
  <tr>
    <td>a</td>
    <td class="instructions">int</td>
  </tr>
  <tr>
    <td>b</td>
    <td class="instructions">int *</td>
  </tr>
  <tr>
    <td>*a</td>
    <td class="instructions">error</td>
  </tr>
  <tr>
    <td>*b</td>
    <td><span class="instructions">int</span></td>
  </tr>
  <tr>
    <td>&amp;a</td>
    <td><span class="instructions">int *</span></td>
  </tr>
  <tr>
    <td>&amp;b</td>
    <td><span class="instructions">int **</span></td>
  </tr>
</table>
</div>

<div class="tableDiv" >
<p align="center">What you'll be given as the problem</p>
<table border="1" cellpadding="1" cellspacing="1" class="tableWithSpaceToLeftAndRight">
  <tr>
    <td width="90">Expression</td>
    <td width="199">Type</td>
  </tr>
  <tr>
    <td>a</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>b</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>*a</td>
    <td class="instructions">&nbsp;</td>
  </tr>
  <tr>
    <td>*b</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>&amp;a</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>&amp;b</td>
    <td>&nbsp;</td>
  </tr>
</table>
</div>

<p  style="clear:both;">&nbsp;</p>
<p><strong>Here's how the first four are solved.</strong></p>
<p><code>a</code> is of type <code>int</code>, so the correct answer is <code>int</code> (cover up the <code>a</code> in the declaration <code>int a; </code>and what is left is <code>int</code>).</p>
<p><code>b</code> is of type <code>int *</code>,  so the correct answer is <code>int</code> * (cover up the <code>b</code> in the declaration <code>int *b; </code>and what is left is <code>int</code> *).</p>
<p >We'll continue with explanations of  (*a, *b, &amp;a and &amp;b) on the next page.</p>

<?php require("../../pleaseTurnOver.php"); ?>

<h3 >How to find the type of <code>*a, *b, &amp;a</code> and <code>&amp;b</code></h3>
<div class="floatingBox" style="width:25em;">
<pre>
int main(int argc, char *argv[])
{
  int a;
  int *b;
  // rest of the program would go here
  return 0;
}
</pre>
</div>
<p >We continue now with an explanation of the last four lines in the exercise on the previous page—the code appears again in the box at the right hand side of the page.</p>
<p >&nbsp;</p>
<table border="1" cellpadding="1" cellspacing="1" class="tableWithSpaceToLeftAndRight">
  <tr>
    <td width="90">Expression</td>
    <td width="199">Type</td>
  </tr>
  <tr>
    <td>*a</td>
    <td class="instructions">&nbsp;</td>
  </tr>
  <tr>
    <td>*b</td>
    <td>&nbsp;</td>
  </tr>
  
  <tr>
    <td>&amp;a</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>&amp;b</td>
    <td>&nbsp;</td>
  </tr>
</table>
<p >&nbsp;</p>
<p ><code>*a</code> is an error—since <code>a</code> is not a pointer, it cannot be dereferenced. So the correct answer is <strong>error</strong>.</p>
<p><code>*b</code> however, is not an error: since b is of type <code>int *</code>, it points to something of type <code>int</code>. So the answer is <code>int</code></p>
<ul>
  <li>The unary <code>*</code> operator means &quot;dereference&quot;, i.e. follow the pointer.</li>
  <li>So if we follow an <code>int *</code> pointer, to what it points to, what we are left with is an <code>int</code>. So the correct answer is <code>int </code></li>
  <li>Here's another way to think about it:
    <ul>
        <li>The unary <code>*</code> in an expression takes away a star from the declaration.</li>
      <li>So if a <code>*</code> appears in front of something of type <code>int *</code>, the stars cancel each other out, and we are left with <code>int</code>.</li>
      <li>Using this rule, if there isn't a star to remove, then you have an error.</li>
    </ul>
  </li>
</ul>
<p >For <code>&amp;a</code>, we start by noting that <code>a</code> is of type <code>int</code>, and taking the address of an <code>int</code> gives us an<code> int *</code>. So the answer is<code> int *</code></p>
<ul>
  <li>You can also think of it this way: an <code>&amp;</code> operator <em>adds a star to the type </em>(provided the expression it is applied to is a valid expression)</li>
</ul>
<p>Similarly for <code>&amp;b</code>, since <code>b</code> is of type <code>int *</code>, taking the address of <code>b</code> gives us an <code>int **</code></p>
<ul>
  <li>The adding a star rule still applies. An<code> int **</code> is a pointer to an <code>int *</code>, i.e. an pointer to a pointer to an <code>int</code>.</li>
  <li>Or, we could say that an <code>int **</code> is the address of a variable, which itself contains the address of some other int variable.</li>
</ul>
<?php require('../../nextPagePlease.php'); ?>
<h2>A note about the <code>**</code> variables:</h2>
<ul>
  <li>	<code>**</code> type variables do occur in practice when handling certain pointer situations that arise in CS24 and CS32.</li>
  <li><code>***</code> and <code>****</code> and even higher levels of star are legal, but are much more rare in practice.</li>
  <li>If your code is getting to the point of needing four or more stars, it may be getting too complex, <br />
  and you may want to look for a simpler way to solve your problem.</li>
</ul>

<p>Finally, a note that if we put in  <code>double</code> (or <code>char</code>, etc.) instead of <code>int</code>, the rules are the same:—e.g. for <code>double *c;</code> we have:<br />
  </p>
<ul>
  <li><code>c</code> of type <code>double *</code>, <code>*c</code> of type <code>double</code>, and <code>&amp;c </code>of type <code>double **</code>.</li>
</ul>
<h2 >Adding arrays into the type expression game</h2>

<p >As we recall the name of an array is a pointer to its first element.</p>
<p >So in the type expression game, if we are given the name of an array of int for example, we should treat it as an <code>int *</code>.</p>
<p></p>
<p >Also, each element of the array is of the type of the array, and array subscripting, is just another form of pointer dereference, i.e.</p>
<ul><li><code>a[0] </code>is equivalent to <code>*(a)</code></li>
  <li><code>a[1]</code> is equivalent to <code>*(a + 1)</code></li>
</ul>
<p>See if you can use those facts to understand the answers in the example below.</p>
<div class="floatingBox" style="width:20em;">
  <p align="center">Code:</p>
  <pre>int main()<br />
{
  int a[] = {12, 23, 45};
  double b[] = {0.4, 0.5, 0.6};
  // ...
  return 0;
}</pre>
</div>
<div class="tableDiv" ">
  <p align="center">What the correct answers are:</p>
  <table border="1" cellpadding="1" cellspacing="1" class="tableWithSpaceToLeftAndRight">
    <tr>
      <td width="90">Expression</td>
      <td width="199">Type</td>
    </tr>
    <tr>
      <td><code>a</code></td>
      <td class="instructions">int *</td>
    </tr>
    <tr>
      <td><code>*a</code></td>
      <td class="instructions">int</td>
    </tr>
    <tr>
      <td><code>a[1]</code></td>
      <td class="instructions">int</td>
    </tr>
    <tr>
      <td><code>a[3]</code></td>
      <td><span class="instructions">int<br />
        <span class="style1">(*see explanation)</span></span></td>
    </tr>
    <tr>
      <td><code>&amp;a</code></td>
      <td><span class="instructions">int **</span></td>
    </tr>
    <tr>
      <td><code>b</code></td>
      <td><span class="instructions">double *</span></td>
    </tr>
    <tr>
      <td><code>b[2]</code></td>
      <td><span class="instructions">double</span></td>
    </tr>
    <tr>
      <td><code>*b[2]</code></td>
      <td><span class="instructions">error</span></td>
    </tr>
    <tr>
      <td><code>&amp;b[2]</code></td>
      <td><span class="instructions">double *</span></td>
    </tr>
  </table>
</div>
<p  style="clear:both;">&nbsp;</p>
<p  style="clear:both;">*Note that although it is likely a logic error to subscript a[3] when a contains only elements a[0], a[1] and a[2], it is <em>not</em> a <em>type </em>error. 
So the correct answer here is still <code>int</code>, not error.</p>
<?php require("../../pleaseTurnOver.php"); ?>
<h2>Adding structs into the type expression game</h2>
<p >As we recall from previous homework assignments, and sections 7.1 and 7.2 in the textbook, a struct is a way to<em> create a new type</em>—in addition to int, double, char, char *, int *, etc. A struct has members inside it: for example:</p>
<div class="floatingBox" style="width:15em">
<pre>
struct Point {
  double x;
  double y;
};

struct Time {
  int h;
  int m;
};

int main()
{
   struct Point p;
   struct Point *q;
   struct Time *t;
   int a;
   // ... 
   return 0;
}
</pre>
</div>
    <p>In the type expression game, if we reference a variable that is an entire struct, the answer is the type of that struct.</p>
    <table border="1" cellpadding="5" cellspacing="1" class="tableWithSpaceToLeftAndRight">
      <tr>
        <td width="90">Expression</td>
        <td>Type</td>
        <td width="90">Expression</td>
        <td>Type</td>
      </tr>
      <tr>
        <td><code>p</code></td>
        <td class="instructions"><div align="left">struct Point</div></td>
        <td><code>&amp;p</code></td>
        <td class="instructions"><div align="left">struct Point *</div></td>
      </tr>
      <tr>
        <td><code>*q</code></td>
        <td class="instructions"><div align="left">struct Point</div></td>
        <td><code>t</code></td>
        <td class="instructions"><div align="left">struct Time *</div></td>
      </tr>
      <tr>
        <td><code>q</code></td>
        <td class="instructions"><div align="left">struct Point *</div></td>
        <td><code>*p</code></td>
        <td class="instructions"><div align="left">error <span class="style1">(p isn't a pointer)</span></div></td>
      </tr>

      <tr>
        <td><code>&amp;q</code></td>
        <td><div align="left"><span class="instructions">struct Point **<span class="style1"></span></span></div></td>
        <td><code>*t</code></td>
        <td><div align="left"><span class="instructions">struct Time<span class="style1"></span></span></div></td>
      </tr>
    </table>
    <p>If we reference an individual member of a struct, the answer is the type of the member of the struct. Here are some examples:</p>
<table border="1" cellpadding="5" cellspacing="1" class="tableWithSpaceToLeftAndRight">
      <tr>
        <td width="90">Expression</td>
        <td>Type</td>
      </tr>
      <tr>
        <td><code>p.x</code></td>
        <td class="instructions"><div align="left">double</div></td>
      </tr>
      <tr>
        <td><code>&amp;(p.y)</code></td>
        <td class="instructions"><div align="left">double *</div></td>
      </tr>
      <tr>
        <td><code>(*q).x</code></td>
        <td class="instructions"><div align="left">double</div></td>
      </tr>

      <tr>
        <td><code>(*t).h</code></td>
        <td class="instructions"><div align="left">int</div></td>
      </tr>
    </table>
<p>If we reference a member of a struct that doesn't exist, or use the . operator on something that isn't a struct, that's an error. Deferencing something that isn't a pointer is also still an error, just as before:</p>
<table border="1" cellpadding="5" cellspacing="1" class="tableWithSpaceToLeftAndRight">
  <tr>
    <td><code>(*t).x</code></td>
    <td class="instructions"><div align="left">error<span class="style1"><br />
    </span></div></td>
    <td class="instructions"><div align="left"><span class="style1">(*t is a struct Time; there's no x in a struct Time)</span></div></td>
  </tr>
  <tr>
    <td><code>a.x</code></td>
    <td class="instructions"><div align="left">error</div></td>
    <td class="instructions"><div align="left"><span class="style1">(a isn't a struct, so you can't use the . on it)</span></div></td>
  </tr>
  <tr>
    <td><code>q.x</code></td>
    <td class="instructions"><div align="left">error<span class="style1"><br />
    </span></div></td>
    <td class="instructions"><div align="left"><span class="style1">(q isn't a struct&mdash;it's a struct Point *, so you can't use the . on it)</span></div></td>
  </tr>
  <tr>
    <td><code>(*p).x</code></td>
    <td><div align="left"><span class="instructions">error<span class="style1"><br />
    </span></span></div></td>
    <td><div align="left"><span class="instructions"><span class="style1">(we can't dereference p, because it isn't a pointer)</span></span></div></td>
  </tr>
</table>
<?php require("../../nextPagePlease.php"); ?>
<h2>Introducing the -&gt; notation into the Type Expression Game</h2>
<p>Finally, we need to keep in mind that <code>p-&gt;x</code> is an abbreviation for <code>(*p).x </code>So whenever we see <code>p-&gt;x</code>, we can just convert to <code>(*p).x</code> and then apply the rules above. Here are some examples:</p>
<table border="1" cellpadding="5" cellspacing="1" class="tableWithSpaceToLeftAndRight">
  <tr>
    <td width="90"><code>q-&gt;x</code></td>
    <td class="instructions"><div align="left">double</div></td>
    <td class="instructions"><div align="left">
      <p><span class="style1">same as (*q).x</span></p>
    </div></td>
  </tr>
  <tr>
    <td><code>p-&gt;y</code></td>
    <td class="instructions"><div align="left">
        <p>error<br />
        </p>
    </div></td>
    <td class="instructions"><div align="left">
      <p><span class="style1">(p-&gt;y means (*p).y and we can't dereference p, because it isn't a pointer)</span></p>
      </div></td>
  </tr>
  <tr>
    <td><code>t-&gt;y</code></td>
    <td class="instructions"><div align="left">error</div></td>
    <td class="instructions"><div align="left"><span class="style1">(t-&gt;y means (*t).y, and *t is of type struct Time, which has no member called y</span></div></td>
  </tr>
  <tr>
    <td><code>t-&gt;m</code></td>
    <td><div align="left"><span class="instructions">int<span class="style1"></span></span></div></td>
    <td><div align="left"><span class="instructions style1"s>same as (*t).m</span></div></td>
  </tr>
  <tr>
    <td><code>&amp;(t-&gt;m)</code></td>
    <td><div align="left"><span class="instructions">int *<span class="style1"></span></span></div></td>
    <td><div align="left"><span class="instructions style1"s="s">apply &amp; to  (*t).m which adds a *</span></div></td>
  </tr>
</table>
<p>Eventually, you'll get used to the <code>p-&gt;x</code> syntax, and you won't need to convert to understand what to do with the <code>p-&gt;x</code> notation.</p>
<h2>Nested structs, and arrays inside structs</h2>
<div class="floatingBox" style="width:16em; font-size:0.7em;">
  <pre>
struct Point {
  double x;
  double y;
};

struct Circle {
  struct Point center;
  double radius;
};

struct Student {
  int perm;
  char name[10];
};

int main()
{
  struct Circle circles[4];
  struct Student s;
  struct Student students[5];
  struct Circle *e;
  struct Circle f;
  // real code would go here
  return 0;
}
</pre>
</div>
<p>As you have seen on previous homeworks, we can have structs inside other structs, arrays inside other structs, and arrays of structs. Those work pretty much the way you would expect—here are a few examples to illustrate. These pertain to the code at the right hand side of the page.<br />
</p>
<table border="1" cellpadding="2" cellspacing="1" class="tableWithSpaceToLeftAndRight" style="font-size:0.7em;">
  <tr>
    <td><code>circles[0]</code></td>
    <td class="instructions"><div align="left">struct Circle<span class="style1"></span></div></td>
    <td class="instructions"><div align="left" class="style1">one element of the array</div></td>
  </tr>
  <tr>
    <td><code>circles</code></td>
    <td class="instructions"><div align="left">struct&nbsp;Circle&nbsp;*</div></td>
    <td class="instructions"><div align="left"><span class="style1">the name of the array is a pointer to the first element</span></div></td>
  </tr>
  <tr>
    <td><code>s.name</code></td>
    <td class="instructions"><div align="left">char&nbsp;*<span class="style1"></span></div></td>
    <td class="instructions"><div align="left"><span class="style1">name is an array of char inside s</span></div></td>
  </tr>
  <tr>
    <td><pre>students[0].name[1]</pre></td>
    <td><div align="left"><span class="instructions">char<span class="style1"></span></span></div></td>
   <td class="instructions"><div align="left"><span class="style1">one char in the name array inside one struct Student inside the students array </span></div></td>
  </tr>
  <tr>
    <td><pre>e-&gt;center</pre></td>
    <td><div align="left"><span class="instructions">struct Point<span class="style1"></span></span></div></td>
    <td class="instructions"><div align="left"><span class="style1">e is a struct Circle *, e-&gt;center is a struct Point</span></div></td>
  </tr>
  <tr>
    <td><pre>e-&gt;center.x</pre></td>
    <td><div align="left"><span class="instructions">double<span class="style1"></span></span></div></td>
    <td class="instructions"><div align="left"><span class="style1">e is a struct Circle *, e-&gt;center is a struct Point, and then we can select the x field inside of it.</span></div></td>
  </tr>
  <tr>
    <td><pre>e-&gt;center-&gt;y</pre></td>
    <td><div align="left"><span class="instructions">error<span class="style1"></span></span></div></td>
    <td class="instructions"><div align="left"><span class="style1">e is a struct Circle *, e-&gt;center is a struct Point&mdash;not a struct Point *.  So we can't apply the -> to it.</span></div></td>
  </tr>
</table>
<p>&nbsp;</p>
<p>See <a href="http://www.cs.ucsb.edu/~pconrad/cs16/topics/typeExpressions">http://www.cs.ucsb.edu/~pconrad/cs16/topics/typeExpressions</a> for more practice problems.</p>
<hr />
End of  Handout for H20
</body>
</html>
