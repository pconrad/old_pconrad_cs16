<html>

<head>
<title>UCSB CS16 proj0 drawings Winter 2010</title>
<style type="text/css">

#pics
{
font-family:"Trebuchet MS", Arial, Helvetica, sans-serif;
width:100%;
border-collapse:collapse;
}
#pics td, #pics th 
{
font-size:1em;
border:1px solid #98bf21;
padding:3px 7px 2px 7px;
}
#pics th 
{
font-size:1.1em;
text-align:left;
padding-top:5px;
padding-bottom:4px;
background-color:#A7C942;
color:#ffffff;
}
#pics tr.alt td 
{
color:#000000;
background-color:#EAF2D3;
}

</style>
</head>

<body>
<h1>CS16, Winter 2010, proj0 student drawings</h1>
<p>The following drawings were produced by CS16 students, <em><strong>entirely with C code</strong></em>, using basic primitives such as:</p>
<ul>
  <li>void drawLine(struct Drawing *d, struct Point p1, struct Point p2, int color);</li>
  <li>void drawCircle(struct Drawing *d, struct Circle c, int color);</li>
  <li>void fillPolygon(struct Drawing *d, struct Polygon poly, int color);</li>
  <li>etc...</li>
</ul>
<p>A full description of the assignment can be found at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10W/projects/proj0">http://www.cs.ucsb.edu/~pconrad/cs16/10W/projects/proj0</a>&mdash;and there is more <a href="#detail">detail</a> after the gallery of images below.</p>
<table id="pics">

<?php $userids=array("acoccia",
"akilpelainen",
		     // "aquino",  /* removed due to issues of "taste" */
"atse",
"bmberin",
"bpmccurdy",
"briana_tippets",
"bryanyu",
"charlottehill",
"christinenagy",
"cmoody",
"cquinlan",
"dani_lai",
"ddelgado",
"hamstra",
"ivan",
"ivanvuong",
"jamesli",
"jamestse",
"j_calderon",
"jordansmith",
"jvianna",
"kmorse",
"kyea",
"kylejorgensen",
"liu01",
"matta",
"mauricioh",
"mtsac0924",
"njcross",
"pbr",
"peterhuang",
"pkoperwas",
"sstann",
"steven_wright",
"tongwu"); 

foreach ( $userids as $userid)
  {
    echo "<tr><td>$userid</td><td><img src='images/$userid.gif' alt='Image by $userid' /></td></tr>";
  }
?>
</table>

<h2 id="detail">Learning Objectives for this assignment (a partial list):</h2>
<ul>
  <li>Get the students comfortable with structs, functions and pointers in C</li>
  <li>Work with structs &quot;as if&quot; they are objects&mdash;to lay the foundation for object-oriented programming in the next course (CS24, which is taught in C++)</li>
  <li>Help students make the transition from writing functions specified by the instructor, to designing their <em>own</em> problems, and coming up with <em>own</em> functions to solve them.</li>
  <li>Help students see ways that writing code can be personally rewarding, and an outlet for creative expression.</li>
</ul>
<p>A full description of the assignment can be found at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10W/projects/proj0">http://www.cs.ucsb.edu/~pconrad/cs16/10W/projects/proj0</a></p>

</body>
</html>
