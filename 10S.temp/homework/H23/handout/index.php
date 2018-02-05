<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, Handout for H20: the type expression game</title>
<link rel="stylesheet" type="text/css" href="../../homework.css" />
<?php


function requireQuoted($filename) {
    if (is_file($filename)) {
        ob_start();
        include $filename;
        $contents = ob_get_contents();
        ob_end_clean();
        
    }
    echo htmlspecialchars($contents);
}

?>



<style type="text/css">
<!--
#sideTwo {font-size:0.8em;}
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

table.tableWithSpaceToLeftAndRight {margin-left: 3em; margin-right: 3em; }

p { margin-top: 0.4em; margin-bottom: 0.1em; padding-top: 0.1em; padding-bottom: 0.1em;}
-->
h1 {font-size: 1em; font-family: Arial, Helvetica, sans-serif; text-align:left; margin: 0em; padding: 0em;}
h2 {font-size: 1.3em; font-family: Arial, Helvetica, sans-serif; text-align:center; margin: 0em; padding: 0em; margin-top: 0.2em; margin-bottom: 0.2em;}


table.twoColumnCode tr td pre {text-align:left; margin-size: 1px; margin-style:solid; margin-color:black;
   padding:0.5em; margin:0.5em; vertical-align:top; font-size:0.9em;

}

table.twoColumnCode tr td  {vertical-align:top;}

</style>
</head>

<body onload="updatePointCount();">
<h1>CS16, 10S, UCSB—Handout for <a href="..">H23</a>—Parameter Passing (<a href="handout.H23.pdf">PDF</a>)</h1>
<p style="margin:0em; padding:0em;">  <a href=".">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H23/handout</a>&nbsp;<br />
  <br />
</p>
<hr />
<div class=" floatingBox" style="width:12em; margin-left:2em;"><strong class="instructions">PLEASE ALSO READ: <br />
In Etter, 6.4, 7.1, 7.2</strong></div>
<h2 align="center">Some terminology: <em>caller</em> and <em>callee</em> </h2>
<p align="left">Just like the &quot;Pointer fun with Binky&quot; video introduced pointer and pointee for the pointer, and the &quot;thing the pointer points to&quot;, it may be helpful to introduce two similar words when talking about functions:</p>
<ul>
  <li>caller—this is sometimes called the &quot;calling function&quot;. It is the function definition in which the function call appears.</li>
  <li>callee—this is the function that is being called.</li>
</ul>
<h3>Examples of caller and callee</h3>
<p>In example1.c at the left below, there are exactly two function calls that appear in the code as we read from top to bottom. In this case, that also happens to be the order in which the function calls would occur in time.</p>
<ol>
  <li>In the first function call, main is the caller, and squared is the callee.</li>
  <li>In the second function call, main is the caller, and printf is the callee (keep in mind that printf is a function call).</li>
</ol>
<p>In example2.c at the right below, there are five function calls—I list them here in the order in which they can be found in the code reading from top to bottom. However, this is NOT the order in which they would actually occur in time. In fact, on any given run of the program, depending on whether argc==2 or argc!=2, which functions get called is different. </p>
<ol>
  <li>In the first call, doStuff is the caller, and twiceTheValue is the callee.</li>
  <li>In the second call, doStuff is the caller, and printf is the callee.</li>
  <li>In the third call, main is the caller, and printf is the callee (This only happens if argc!=2.)</li>
  <li>The fourth and fifth calls are nested: a call to atoi is nested inside the actual parameter of the call to doStuff
    <ul>
      <li>for  atoi, main is the caller, and atoi is the callee</li>
      <li>for doStuff, main is the caller, and doStuff is the callee</li>
    </ul>
  </li>
</ol>
<p>This should come as no surprise to you at this stage in your study of programming but it is worth mentioning: in general, the order of functions that gets called, and even which functions get called (or not) may depend on the input to the program, and may be different from the order in which the function calls appears when reading top to bottom in the code. Can you work out which functions get called, and in what order, whem argc==2, and the case where argc!=2?</p>
<table class="twoColumnCode">
<tr>
<td><pre>
<?php requireQuoted("code/example1.c"); ?>
</pre></td>
<td><pre>
<?php requireQuoted("code/example2.c"); ?>
</pre></td>
</tr>
</table>
<?php require("../../pleaseTurnOver.php"); ?>
<div id="sideTwo">
<h2 align="center"><br />
Two (well, maybe three) ways to pass parameters in C</h2>
<p >When passing parameters to a function, there are two ways it can happen—well, three if you count passing an array as a separate way:
<ol>
  <li>Passing by value—e.g. <code>int myFunc(int x)</code>;—the value is copied from an expression in the caller to an expression in the callee</li>
  <li>Passing by pointer—e.g. <code>int myFunc(int *p);</code> a pointer  is passed from the caller to the callee.  </li>
  <ul>
    <li>This pointer is often the address of a variable in the caller.</li>
    <li>This allows the callee to directly access the variable in the caller by dereferencing the pointer.</li>
    <li>That means the value can be pulled out of the variable in the caller (used on the right hand side of an assignment), e.g. int x = (*p);</li>
    <li>This means the value of the variable in the caller  can also be changed, by dereferencing the pointer on the left hand side of an assignment statement (e.g. (*p) = 5;</li>
  </ul>
  <li>Passing an array—e.g. <code>int myFunc(int nums[], int n);</code> which is really just a special case of passing a pointer—essentially another way of writing 
    <code>int myFunc(int *nums, int n);</code>
    <ul>
      <li>In C and C++, the name of an array is a pointer to the first element of the array.</li>
      <li>So, when you pass an array name, you are really passing a pointer.</li>
      <li>And, saying a[i] is really just a shorthand for *(a+i), so when you access an array parameter in C, you are accessing the array in the caller.</li>
    </ul>
  </li>
</ol>
<p>We've been over these in lecture, and they are covered in your Etter textbook—so the information above is really just review.</p>
<h2>The overworked ampersand</h2>
<p >In C++, there is yet one more way to pass parameters, and the syntax can be a bit confusing—it adds yet another meaning for the overworked ampersand.  So before we go there, let's review the meaning that the ampersand already has:
</p>
<ol>
  <li>As a <strong>unary operator in an expression</strong> it means <strong>address of </strong> (e.g. <code>scanf(&quot;%i&quot;,<strong>&amp;</strong>x);</code> ) 
    <ul>
      <li>e.g. the right hand side of an assignment, or an actual parameter in a function call)</li>
    </ul>
  </li>
   <li>As a <strong>binary operator  </strong> it means <strong>bitwise and</strong> (e.g. <code>printf(&quot;%i\n&quot;,x <strong>&amp;</strong> y);</code>) 
     <ul>
      <li>see homework H22 and the reading assignment that went with it for a review of bitwise and</li>
    </ul>
  </li>
  <li>As a <strong>binary operator doubled up </strong> it means logical and (e.g. <code>if (x!=0 <strong>&amp;&amp;</strong> y!=0) </code>t means address of
    <ul>
      <li>this always returns either 1 or 0, the C values for true or fal</li>
    </ul>
  </li>
</ol>
<h2>C++ adds yet one more  way to pass parameters: reference parameters (aliases)</h2>
<p >In C++, there is yet one more way to pass parameters. It is very similar to the way passing by pointer works in C, but the syntax is simplified.</p>
<p >In C, to pass by pointer, in the callee, we write something like what you see below in squareIt.c at the left, if, for example, the effect we want is that the variable passed in gets its value squared. Note the following:</p>
<ul>
  <li>In the callee, the formal parameter is of type int *, that is, pointer to integer</li>
  <li>In the caller, the actual parameter is also of type int *—we have to use the &amp; operator to turn the int into an int *, by taking its address. (As we've discussed, an address is a pointer, and a pointer is an address.)</li>
</ul>
<p>In C++, we can still write exactly the same code—the example on the left is valid C++. However, there is another option, as shown on the right in the file squareIt.cpp (as you may recall, .cpp is one of the valid filename endings for C++ code.)</p>
<p>The effect of the C++ code is exactly the same as that of the C code, but the syntax is simplified.</p>
<p>Look at the syntax in the C++ example for the function header: <code>void squareIt(int &amp;x)</code> and note that the &amp; here does NOT MEAN ADDRESS OF. This is different from the address of syntax because the &amp; occurs in front of a variable that is a formal parameter—when it occurs here, in the header of a function definition or a function prototype, it means that the parameter is a <strong>reference parameter.</strong> A reference parameter can be thought of &quot;similar passing by pointer, but with automatic transmission as opposed to standard transmission&quot;. That is:</p>
<ul>
  <li>In the function call, you don't have to use the &amp; in front of the actual parameter</li>
  <li>In the function definition body, you don't have to use the * in front of the formal parameter variable to dereference it every time it occurs.</li>
</ul>
<p>A reference parameter creates an <strong>alias</strong>—in this example, inside the function squareIt, x is an alias for a in the main program. (We could also say that in the C example, (*p) is an alias for a.)</p>
<table class="twoColumnCode">
<tr>
<td><pre>
<?php requireQuoted("code/squareIt.c"); ?>
</pre></td>
<td><pre>
<?php requireQuoted("code/squareIt.cpp"); ?>
</pre></td>
</tr>
</table>
<hr />
End of  Handout for H23
</div>
</body>
</html>
