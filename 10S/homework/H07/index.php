<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H07","Mon","Lecture","04.12",
		  "Functions that print characters using for and if, based on lecture notes, and Etter 3.1-3.3");
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
.style1 {font-size: smaller}
.style2 {font-size: larger}
-->
</style>
</head>
<body onload="updatePointCount();">
  <?php echo $h->as_h1_withLineBreaks();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />
<p>Review your lectures notes from 04/05, 04/07 and 04/09, and also read Section 3.1, 3.2, and 3.3 in Etter.  Then answer these questions.</p>
<ol>
  <li>(20 pts) Write a C function definition for a function called printKSpacesNXs that <strong>takes two integer parameters, k and n. </strong><br />
    <br />
    The function should print k spaces, and then n lowercase 'x' characters on standard output. <br />
    It should NOT print a new line after it is finished.<br />
      <br />
    <br />
Example output:<br />
<br />
<table border="2">
  <tr>
    <th scope="col">This code</th>
    <th scope="col">produces this output</th>
  </tr>
  <tr>
    <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
printKSpacesNXs(3,5);
printf(&quot;|\n&quot;);
        </pre>
        </p>    </td>
    <td style="text-align:left; vertical-align:top;"><pre>1234567890
|   xxxxx|</pre></td>
  </tr>
  <tr>
    <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
printKSpacesNXs(2,4);
printf(&quot;|\n&quot;);
        </pre>
        </p>    </td>
    <td style="text-align:left; vertical-align:top;"><pre>1234567890
|  xxxx|</pre></td>
  </tr>
</table>
<br />
<br />
    <p><span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Please turn over for questions to answer</span><br />
    </p>
    <p style="page-break-before:always"><br />
      <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Continued from other side</span><br />
    </p>
  </li>
  <li> (20 pts) Write a C function definition for a function called alternatePrintNTimes that takes one integer parameters n, and two character parameters c1 and c2. The function should alternate between printing c1 and c2, until n characters have been printed.<br />
    <br />
    Hints: There are many ways to approach this problem. <br />
    <br />
    One way is to use an if test that checks whether the index variable of a for loop is odd or even.<br />
    If the variable i is odd, then i%2 will be 1.  If it is even then i%2 will be 0.<br />
    <br />
    Another way is to initialize a character variable c to the value of c1 before the loop starts. Then, each time through the loop, you can check whether the value is c1 or c2, and depending on which value it is, you can change it to the other value.<br />
    <br />
  <br />
    Example output:<br />
    <br />
    <table border="2">
      <tr>
        <th scope="col">This code</th>
        <th scope="col">produces this output</th>
      </tr>
      <tr>
        <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
alternatePrintNTimes(4,'x','o');
printf(&quot;|\n&quot;);
</pre>          </td>
        <td style="text-align:left; vertical-align:top;"><pre>1234567890
|xoxo|</pre></td>
      </tr>
      <tr>
        <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
alternatePrintNTimes(5,'x','o');
printf(&quot;|\n&quot;);
</pre>          </td>
        <td style="text-align:left; vertical-align:top;"><pre>1234567890
|xoxox|</pre></td>
      </tr>
      <tr>
        <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
alternatePrintNTimes(6,'+','-');
printf(&quot;|\n&quot;);
</pre>        </td>
        <td style="text-align:left; vertical-align:top;"><pre>1234567890
|+-+-+-|</pre></td>
      </tr>
      <tr>
        <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
alternatePrintNTimes(7,'+','-');
printf(&quot;|\n&quot;);
      </pre>        </td>
        <td style="text-align:left; vertical-align:top;"><pre>1234567890
|+-+-+-+|</pre></td>
      </tr>
      <tr>
        <td style="text-align:left; vertical-align:top;"><pre>printf(&quot;1234567890\n&quot;);
printf(&quot;|&quot;);
alternatePrintNTimes(7,'-','+');
printf(&quot;|\n&quot;);
      </pre>
        </td>
        <td style="text-align:left; vertical-align:top;"><pre>1234567890
|-+-+-+-|</pre></td>
      </tr>
    </table>
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />
  </li>
  <!--- -->
</ol>
<hr />
End of H07
</body>
</html>
