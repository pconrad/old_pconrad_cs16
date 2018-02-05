



<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H09","Fri","Lab","04.23","File input, Etter 3.6");
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
  <?php echo $h->as_h1();
		  require("../cs16HomeworkHeader.php");?>
          
          


<hr />



<p>Read Section 3.6 in your Etter textbook. <br />
    <br />
  Then answer these questions:<br />
  <br />
</p>
<ol>
  <li>(5 pts) In addition to using command line arguments, and scanf, there is a third way we can get input into a program—we can read it from a data file.<br />
    <br />
    According to your textbook, when you access a data file in a program, you need a special kind of variable called a file pointer.<br />
    <br />
    What is the line of C code that you would need to write to declare a file pointer with the variable name <code>earthquakeData</code>?<br />
    <br />
    <br />
    <br />
    <br />
  </li>
  <li>(5 pts) There is a function you must call to associate the variable with a file on the disk.<br />
      <br />
    Suppose you want to read data from a file called <code>&quot;earthquakes.dat&quot;</code><br />
     <br />
       What line of code would you write to associate the file &quot;earthquakes.dat&quot; with the file pointer you declared in the previous problem?<br />
       <br />
       <br />
    <br />
    <p><span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Please turn over for questions to answer</span><br />
    </p>
    <p style="page-break-before:always"><br />
      <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Continued from other side</span><br />
    </p>
  </li>
  <li> The answer to the previous problem involved a certain function. When you call that function, you sometimes get back a value of NULL.
    <ol>
      <li>(5 pts) What does it mean when that happens? <br />
          <br />
          <br />
          <br />
          <br />
        <br />
          <br />
      </li>
      <li>(5 pts) Why is it important to check for that by saying something like <code>if (earthquakeData == NULL)</code> after calling that function?<br />
          <br />
          <br />
          <br />
          <br />
          <br />
      </li>
    </ol>
  </li>
  <li>There are various ways to read data from the file after it is opened. One of them is a function discussed in section 3.6.
    <ol>
      <li>(5 pts) What is the name of that function?<br />
          <br />
        <br />
        <br />
        <br />
        <br />  
        <br />
      </li>
      <li>(5 pts) Write a function call that invokes this function to read a single number from  earthquakeData into the variable <code>magnitude</code>.<br />
        Assume that magnitude is of type <code>double</code>.<br />
        <br />
        <br />  
        <br />  
        <br />
      </li>
    </ol>
  </li>
  <li>(10 pts) What function call should your program make when it is finished with the data file associated with the variable <code>earthquakeData</code>?<br />
    <br />
    <br />
    <br />
    <br />
    <br />
  </li>
  <!--- -->
</ol>
<hr />
End of H09
</body>
</html>
