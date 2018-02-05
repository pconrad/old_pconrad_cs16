
<!-- this text from cs16HomeworkHeader.php -->
<p class="closeOnTop">Available online as <a href="<?php echo $h->as_url(); ?>"><?php echo $h->as_url(); ?></a>&mdash;printable <a href="<?php echo $h->as_pdf(); ?>">PDF</a></p>
<table class="nameTable">
  <tr>
    <td>Name: (4&nbsp;pts)</td>
    <td class="nameBlank">&nbsp;</td>
    <td>Umail Address: (4&nbsp;pts)</td>
    <td class="emailBlank">&nbsp;</td>
    <td>@umail.ucsb.edu</td>
  </tr>
</table>

<table class="labSectionTable">
  <tr>
    <td>Lab Section (2&nbsp;pts)—circle one:</td>
    <td>9am</td>
    <td>10am</td>
    <td>11am</td>
    <td>noon</td>
    <td>unknown</td>
  </tr>
</table>
<p class="finePrint">(Note: For
now, circle the lab section you are registered for on GOLD. If you
need to request attendance at a different lab section because of an
ACTUAL SCHEDULE CONFLICT, please email pconrad@cs.ucsb.edu with
details)</p> 
<hr /> 
<p align="center" class="style2">This assignment is due <strong>IN 
<?php echo $h->getDueType(); ?> on <?php echo $h->dueDayFull() . ", " . $h->getDueDate(); ?>. 
</strong><br /> <strong>It may ONLY be submitted 
<?php
echo $h->getDueType() . ",";

if ($h->getDueType() == "Lab")
  {
    echo (" in ESB1003 (Cooper Lab) at 9am, 10am, 11am or noon on ");
  }
else
  {
    echo (" in Chem 1171 at 1pm on ");
  }
echo $h->dueDayFull(); ?>.</strong><br />
You must come IN PERSON to turn it in during
your assigned <?php echo $h->getDueType(); ?> section.<br /> </p> 


<p class="finePrint"><strong>Late Policy:</strong> No email submission allowed—and don't &quot;slip it under my door&quot;. If you need to make it up, you must do so during office hours, or make an appointment to see me, and you must request this appointment within 48 hours of when the assignment was originally due.</p>

<p class="finePrint"><strong>Personal Day/Sick Day policy</strong>: Everyone is
permitted one &quot;personal day/sick day&quot; when you get to make
up a missed homework assignment for free during office hours or via
appointment. After that, you may not make up the homework
assignment—you can only earn back the points through extra credit
opportunities.</p> 

<p class="finePrint">(For more
details, see the <a href="../../syllabus/index.html">syllabus</a> and
the <a href="../index.php">homework policy</a>)</p> 

<hr /> 

<!-- end of text from cs16HomeworkHeader.php -->

