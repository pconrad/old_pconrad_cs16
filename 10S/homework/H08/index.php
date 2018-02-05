<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

<?php 
require("../../../../scripts/homework.php"); 
$h = new Homework("CS16","10S","H08","Wed","Lecture","04.14",
		  "Command line arguments (handout)");
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
<p>For this homework, the preparation is the material presented in lecture last week (04/05 through 04/09, and on 04/12) and the summary of that material on the following handout <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H08/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H08/handout</a><br />
</p>
<p>Once you've read that handout, write answers to the questions on this sheet  (use the <a href="H08.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol>
  <li>Suppose you are running a main C program with the following first line:<br />
      <strong>int main(int argc, char *argv[])<br />
      </strong><br />
    and that the command line typed to run this program is: ./foo bar fum fiddle<br />
    <br />
    <ol>
      <li>(3 pts) What is the value of argc?<br />
          <br />
      </li>
      <li>(3 pts) What is the value of argv[0]?<br />
          <br />
      </li>
      <li>(3 pts) What is the value of argv[1]?<br />
          <br />
      </li>
      <li>(3 pts) What is the value of argv[2][2]?<br />
          <br />
          <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Please turn over for questions to answer</span><br />
          <p style="page-break-before:always"><br />
              <span style="font-family: Arial, Helvetica, sans-serif; font-size:larger;">Continued from other side</span><br />
          </p>
        <p><br />
          </p>
      </li>
    </ol>
  </li>
  <li>Suppose you are running a main C program with the following first line:<br />
      <strong>int main(int argc, char *argv[])<br />
      </strong><br />
    and that the command line typed to run this program is: ./foo 12 4.5 <br />
    <br />
    <ol>
      <li>(4 pts) What is the value of argc?<br />
          <br />
          <br />
      </li>
      <li>(4 pts) What is the value of argv[0]?<br />
          <br />
          <br />
      </li>
      <li>(4 pts) What is the value of argv[1]?<br />
          <br />
          <br />
      </li>
      <li>(4 pts) What is the value of argv[2]?<br />
          <br />
          <br />
      </li>
      <li>There is a function you can use to convert the 12 from the form it has when it is a command line argument into a form that can be stored in an <strong>int</strong> variable. <br />
          <br />
          <ul>
            <li>(3 pts) What's the name of that function?<br />
                <br />
                <br />
            </li>
            <li>(3 pts) What header file do you need to #include to use that function?<br />
                <br />
            </li>
          </ul>
      </li>
      <li>There is a function you can use to convert the 4.5 from the form it has when it is a command line argument into a form that can be stored in an <strong>double</strong> variable. <br />
          <br />
          <br />
          <ul>
            <li>(3 pts) What's the name of that function?<br />
                <br />
                <br />
            </li>
            <li>(3 pts) What header file do you need to #include to use that function?</li>
          </ul>
      </li>
    </ol>
  </li>
</ol>
<p><br />
  <br />
</p>
<ol><!--- -->
</ol>
<hr />
End of H08
</body>
</html>
