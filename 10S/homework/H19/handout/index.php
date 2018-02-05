<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16, 10S, H19 Handout (structs containing arrays, structs containing structs)</title>
<script type="text/javascript" src="../../exam.js" ></script>
<link rel="stylesheet" type="text/css" href="../../homework.css" />
<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}

td {text-align:center; height:1.5em;}
h3 {font-size: 1.0em;}

div.floatingBox {width: 10em; border-color:#003399; border-size: 4px; border-style: outset; float: right; padding:3px; margin-left: 1em;}
div#container {width: 800px;}
p {margin-top: 0px; margin-bottom: 0px; padding-top:3px; padding-bottom:3px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:3px; padding-bottom:3px;}
pre.smallerPre {font-size: 0.9em;}
-->
</style>
</head>

<body onload="updatePointCount();">
<div id="container">
<h1>CS16, 10S, <strong>Handout to go with H19</strong> (structs containing arrays, structs containing structs) (<a href="handout.H19.pdf">printable PDF</a>)</h1>
<p>Available online at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H19/handout">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H19/handout<br />
</a>The assignment is available at <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H19">http://www.cs.ucsb.edu/~pconrad/cs16/10S/homework/H19</a><br />
</p>
<hr />
<p>This handout—which is your reading assignment for H19—covers more about structs, which are not covered in the textbook until Chapter 7. We are covering them a bit earlier than the textbook coverage, because they will open up some more interesting problem solving opportunities. <br />
  <br />
  This builds on the <a href="../../H13/handout">handout from H13</a>, the <a href="../../H14/handout">handout from H14</a>, the <a href="../../H17/handout">handout from H17</a>, and the <a href="../../H18/handout">handout from H18</a>.</p>
<p>If you want to read some additional material about structs, you may read Section 7.1 and 7.2 in the Etter text, or Section 12.1 of the online Oualline text (<a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">on-campus link</a>, <a href="http://proquest.safaribooksonline.com.proxy.library.ucsb.edu:2048/1-56592-306-5/pcp3-CHP-12-SECT-1">off-campus link</a>)</p>
<hr />
<h3>structs that contain arrays</h3>

<div class="floatingBox" style="width: 12em;">
<pre>
struct Student
{
   char name[20];
   int permNumber;
   double gpa;
};
</pre>
</div>
<p>As we illustrated on the handout that went with homework assignment <a href="../../../../10S/homework/H13/handout/index.php">H13</a>, it is possible to have an array inside a struct also. The example we showed there was the one you see in the box at the right. In this case, the array inside the struct is <code>name</code>, and it is an array of <code>char</code>.</p>




<p> We could also put an array of <code>int</code> inside a struct.  </p>
<p>Suppose we want a struct for a California Lottery ticket for either the Mega Millions game, or the Super Lotto Plus game.  Both are games where the lottery ticket has five numbers, and a special "mega" number.  A ticket is also for a specific month, day and year, so we can include fields for those as well.  </p>
<p>Here's a definition for that struct. Note that we can&mdash;and often should&mdash;have comments inside our struct definitions.</p>
<pre class="smallerPre"> 
struct CALotteryTicket
{
  int nums[5]; // numbers on ticket other than mega
  int mega; // the mega number

  // date of drawing                                                            
  int month;
  int day;
  int year;
};
</pre>

<p>We can declare and initialize structs of this type like this:</p>
<pre class="smallerPre">
// On 04/30/2010, the Mega Millions winning numbers were:                     
//   14 20 41 47 53 mega: 40                                                  

struct CALotteryTicket mm={ {14,20,41,47,53}, 40, 4,30,2010};

// On 04/30/2010, the SuperLottoPlus numbers were:                            
//  1 9 15 16 29 mega: 9                                                      

struct CALotteryTicket slp={ {1,9,15,16,29}, 9, 4,30,2010};
</pre>
<p>And here's a function that prints out a ticket.  Note how we access the <code>nums</code> array inside the struct instance called <code>ticket</code> (the formal parameter of the function) with the following syntax: <code>ticket.nums[i]</code></p>
<pre class="smallerPre">
void printLotteryTicket(struct CALotteryTicket ticket)
{
  int i;
  // print the date                                                             
  printf("%02d/%02d/%02d",ticket.month, ticket.day, ticket.year);
  // print the numbers                                                          
  for (i=0;i<5;i++)
    printf(" %2d",ticket.nums[i]);
  printf(" mega: %2d",ticket.mega);
}
</pre>
<p>To see this  in the context of a complete program—including functions calls to printLotteryTicket that produce output like what you see below—follow the online links to <a href="code/structWithArray.c">structWithArray.c</a> in the <a href="code">code</a> directory:</p>
<pre class="smallerPre">
-bash-4.1$ ./structWithArray 
 Mega Millions:    04/30/2010 14 20 41 47 53 mega: 40
 Super Lotto Plus: 04/30/2010  1  9 15 16 29 mega:  9
-bash-4.1$ 
</pre>
<?php require("../../pleaseTurnOver.php"); ?>

<h3>structs that contain other structs</h3>
<div class="floatingBox" style="width:25em; font-size: 0.8em;">
<pre>
struct CALotteryTicket
{
  int nums[5]; // numbers other than mega
  int mega; // the mega number<br />

  // date of drawing
  int month;
  int day;
  int year;
};</pre>
</div>
<p>As you looked at the Lottery Ticket example on the other side of this handout (also repeated in the box at the right for handy reference), a thought may have occured to you: the three int fields for day, month, year would make more sense if they were grouped as a date. 
<p>In fact, that's a really good idea—we can first define a struct Date, and then use that struct Date inside the struct CALotteryTicket, like this:</p>

<pre>
struct Date
{
  int month;
  int day;
  int year;
};

struct CALotteryTicket 
{
  int nums[5]; // numbers on ticket other than mega
  int mega; // the mega number
  struct Date drawing; // date of drawing;
};
</pre>

<p>The struct definition of a lottery ticket is also now easier to read and understand.  This is the idea of abstraction applied in practice.</p>

<p>Now, we can define a separate printDate function, and call it from the printLotteryTicket function.  The advantage is that if we have other situations where we need to print a date, we can reuse the printData function.</p>
<pre>
void printDate(struct Date d)
{
  printf("%02d/%02d/%02d",d.month, d.day, d.year);
}

void printLotteryTicket(struct CALotteryTicket ticket)
{
  printDate(ticket.drawing);

  // print the numbers
  int i;
  for (i=0;i<5;i++)
    printf(&quot; %2d&quot;,ticket.nums[i]);
  printf(&quot; mega: %2d&quot;,ticket.mega);
}

</pre>
<p>The initialization of the variables looks a little different&mdash;we use another set of {} to indicate the "struct inside the struct" for the date:</p>
<ul>
<li><p>Before, with separate members for month/day/year inside struct:</p>
<pre>struct CALotteryTicket mm={ {14,20,41,47,53}, 40, <strong>4, 30, 2010 </strong>};
</pre></li>
<li>
<p>After, with a single struct Date inside struct:</p>
<pre>struct CALotteryTicket mm={ {14,20,41,47,53}, 40, <strong>{4,30,2010} </strong>};
</pre></li>
</ul>
<p>To see this function in the context of a complete program—including functions calls to printLotteryTicket that produce output like what you see below—follow the online links to <a href="code/structWithStruct.c">structWithStruct.c</a> in the <a href="code">code</a> directory, and experiment with this code for yourself as you answer the homework questions for H19.</p>
<hr />
End of  handout that goes with H19</div>
</body>
</html>
