<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H21","Wed","Lecture","05.26",
		  "C Strings (Etter 6.6)");
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
p.pageBreakBefore {page-break-before:always;}
table.twocolumn {font-size:0.85em;}
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}

td {text-align:center; height:1.5em;}
.strikethrough {text-decoration: line-through;}
.highlight {background-color:yellow;}
.smallerFont {font-size: 0.9em;}
.style2 {font-size: larger}
.pageBreakBefore {page-break-before:always;}
.subtle{color:#666666; font-size: 0.9em;}
.style4 {color: #666666; font-size: 0.9em; font-style: italic; }

#leftColumn {text-align:left;}
#rightColumn {text-align:left;}
table.twoColumn tr td {width: 46%; height:auto; vertical-align:top; margin-left: 0.5em; margin-right: 0.5em; padding-left: 0.5em; padding-right: 0.5em; font-size:0.95em;}
-->
</style>
</head>
<body onload="updatePointCount();">
<div id="container">
  <?php echo $h->as_h1();
		  require("../cs16ShortHomeworkHeader.php");?>
  <div class="floatingBox" style="width:25em;"><p>This assignment requires the use of Ch on CSIL—to complete it you can visit CSIL in person
access the CSIL command line on "csil.cs.ucsb.edu" via PuTTY on Windows
or use "ssh username@csil.cs.ucsb.edu" on Mac or Linux</p><p>Also read Sections 6.4, 7.1 and 7.2 in Etter for the Final Exam.</p></div>

<p><strong>Reading:</strong> Read Section 6.6 in your Etter textbook about character strings—but as you do, keep these things in mind.</p>
<ul style="font-size: 0.9em;">
  <li> You should read all of the text on p 308-309 in detail.</li>
  <li>You do not need to read the ENTIRE  detailed list of string functions on p. 310—this material belongs in a reference, not a textbook section!</li>
  <li>Please DO read, however, about the following smaller list of important functions:
    <ul>
      <li>p. 309:
        <ul>
          <li>strlen(s)  returns length of a string</li>
          <li>strcpy(s,t) string copy, and strncpy(s,t,n) string copy with a limit of n characters
            <ul>
              <li>Note that strcpy can be a very dangerous function—it is the basis of many security attacks.</li>
              <li>strncpy is often preferred—we'll talk more about this below. </li>
            </ul>
          </li>
        </ul>
      </li>
      <li>p. 310
        <ul>
          <li>strcmp(s,t) string compare and strncmp(s,t,n) string compare (with a limit of n characters) </li>
        </ul>
      </li>
    </ul>
  </li>
  
  <li>You may skip the example program on p. 310-311, since it covers strcat, and we aren't going to cover it</li>
  <li>Start your reading again from the words &quot;Character strings are used ...&quot; on p. 311, and look at the function strg_len_2 in some detail.</li>
  <li>You may stop reading when you get to the paragraph at the top of 312 that starts with &quot;Assume that we want to count...&quot;</li>
</ul>
<p><strong>Now try the following, using Ch:</strong></p>
<p>First, start up Ch—and optionally, simplify your Ch prompt—by doing this:</p>
<pre>
-bash-3.2$ <strong>ch</strong>
                                   Ch 
                Professional edition, version 6.1.0.13751 
              (C) Copyright 2001-2009 SoftIntegration, Inc.
                     http://www.softintegration.com
/cs/faculty/pconrad> <strong>_prompt="Ch&gt; "</strong>
Ch&gt;  
</pre>
<p>Next try declaring a character string that contains the letters UCSB, like this:</p>
<pre>
Ch&gt; <strong>char s1[] =&quot;UCSB&quot;;</strong>
Ch></pre><p>Then, use strlen to return the length of this string, like this:</p>
<pre>
Ch&gt; <strong>strlen(s1)
</strong>4
Ch&gt;</pre>
<p>So, we see that strlen can determine  the length of a string.</p>
<ol>
  <li>The value returned by strlen is 4. However, the true size of the array s1—i.e. the number of elements s1[0], s1[1], etc.—is not 4.<br />
    <br />
    <ol>
      <li>(3 pts) What is the actual size of the array s1?<br />
        <br />
      </li>
      <li>(3 pts) More importantly—why does s1 have that size?<br />
        <br />
        (<span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Please turn over for more problems</span>)<br />
      </li>
    </ol>
  </li>
  
</ol>

 <p class="pageBreakBefore"><span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">This side continues the Ch session started on the other side...</span></p>
 
<table class="twoColumn">
<tr>
<td>
<div id="leftColumn">
 
 <ol start="2">

   <li><p>Next, try the following command, and note that you get an error message:</p>
<p><code>Ch&gt; <strong>char s2[4]=&quot;UCSB&quot;;</strong></code><br />
<span class="style4">What error message appears here?</span><br />
<code>Ch&gt;</code></p>
When you type <code>char s2[4]=&quot;UCSB&quot;;
    </code>into Ch:<br />
    <br />
    <ol>
      <li>(3 pts) What is the error message that you get from Ch?<br />
          <br />
        <br />
      </li>
      <li>(3 pts) More importantly—why do you get this error mesage? Explain.<br />
        <br />
        <p>&nbsp;</p>
        <br />
      </li>
    </ol>
  </li><li>Now type the following into Ch:<br />
    <br />
    <pre>
Ch&gt; <strong>char s3[16]=&quot;UCSB&quot;;</strong>
Ch&gt;</pre>
    Then, type in strlen(s3) <br />
    <br />    
    <ol>
      <li>(2 pts) What is the value that is returned?    <br />
        <br />
        <br />
      </li>
      <li>(2 pts) Why is this value returned instead of the value 16? <br />
        <br />
        <br />      
      </li>
    </ol>
  </li>
  <li>Now try typing the following, and note the error message that you get:<br />
    <br />
    <pre>Ch&gt; <strong>s3 = &quot;Cal Poly SLO&quot;;</strong><br />
ERROR: invalid lvalue of assignment operation<br />
Ch&gt; </pre>
  The error message refers to an &quot;invalid <em>lvalue</em>&quot;. 
  As we've discussed in lecture: <ul>
    <li> An <em>lvalue</em> is a value on the &quot;left hand side of the assignment statement&quot;.</li>
    <li>So, the <em>lvalue</em> here is <code>s3</code></li>
    <li>Since <code>s3</code> is the name of an array, its value is actually a pointer to the <code>s3[0] </code>element in that array.</li>
    <li>It is illegal in C to change the name of an array to point to something else—we can change the contents of s3, but not where s3 points.</li>
    <li>So, s3 can never appear on the left hand side of an assignment—it is an invalid <em>lvalue</em>.<br />
    </li>
    </ul> 
      <p>Instead, to assign the contents of s3 to be something else, we need to use a function call to <code>strcpy(s,t)</code>, like this:      </p>
      <pre>Ch&gt; <strong>strcpy(s3,&quot;Cal Poly SLO&quot;);</strong></pre>
    <p>Try that.</p>
    <ol>
      <li>(2 pts) What is the value of <strong><code>strlen(s3)</code></strong> after you use <code>strcpy(s3,&quot;Cal Poly SLO&quot;);</code> ?<br />
          <br />
          <br />
      </li>
      <li>(4 pts) What strcpy command would you use to change the contents of <code>s3</code> back to <code>&quot;UCSB&quot;</code>?<br />
          <br />
          <br />
      </li>
      <li>(2 pts) After typing the command to change s3 back to <code>&quot;UCSB&quot;</code>, what would the value of <strong><code>strlen(s3)</code></strong> be?<br />
          <br />
        <br />
      </li>
    </ol>
  </li>
  </ol>


</div> <!-- leftColumn -->
</td><td>
<div id="rightColumn">

  <ol start="5">
  <li>Start this problem by typing the following into Ch:<br />
 <pre>
Ch&gt; char s4[32]=&quot;UC San Diego&quot;;
Ch&gt;</pre>
    Then type s4 at the prompt, to verify that s4 now contains the string &quot;UC San Diego&quot;:<br />
      <br />
      <pre>
Ch&gt; <strong>s4</strong>
UC San Diego
Ch&gt;</pre>
      Note that Ch does NOT print the value of s4—which is actually a (char *), an address, a pointer to s4[0]—the authors of the Ch software assumed (rightly) that most users would prefer to see the contents of s4.<br />
      <br />
      So, (char *) pointers get special treatment in Ch—when you type one, you see the contents of the string pointed to, not the pointer value. To see s4 as a pointer, we can use a special syntax, shown below—this is called &quot;casting s4 to a void pointer&quot;<br />
 <pre>
Ch&gt; <strong>(void *) s4</strong>
0x85acc28 
Ch&gt;</pre>      
<p>
      With that in mind, continue as follows:</p>
    <ol>
      <li>(2 pts) What is  the value of <strong><code>strlen(s4)</code></strong> when you type it at the Ch prompt? Try to predict it before you type it in.<br />
          <br />
            <br />
        <br />
      </li>
      <li>(2 pts) Now, type this: <strong><code>s4[2] = '\0';</code></strong><br />
          <br />
        What is the value shown when you type s4 at the Ch prompt?<br />
          <br />
        <br />
      </li>
      <li>(2 pts) As the previous problem showed, the value printed when you type s4 at the Ch prompt has changed. Try typing <strong><code>(void *) s4 </code></strong>at the Ch prompt. Has the value changed?<br />
        <br />
        <br />
      </li>
      <li>(2 pts) (continuing from previous problem...) <br />
        If the value of <strong><code>(void *) s4 </code></strong> changed, why did it? <br />
        If it did not change, why did it not change? <br />
        <br />
        <br />
      </li>
      <li>(2 pts) Now, type <strong><code>s4[2] = ' ';</code></strong><br /> 
        (that's a space in single quotes)<br />
        Now what gets printed when you type <strong><code>s4</code></strong> at the Ch prompt?<br />
        <br />
        <br />
      </li>
      <li>(2 pts) And what is the value of <strong><code>strlen(s4)</code></strong> now?<br />
        <br />
        <br />
      </li>
      <li>(4 pts) In your own words, what does this show about the role of the '\0' character in how strings are treated in C?</li>
    </ol>
  </li>
  <!--- -->
</ol>

</div><!--rightColumn -->
</td></tr></table>



<hr />
<p>End of <?php echo $h->getAssignment(); ?></p>
</div>
</body>
</html>
