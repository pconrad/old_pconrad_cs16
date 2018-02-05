<html>

<head>
<title>UCSB CS16 proj0 drawings Spring 2010</title>
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
<h1>CS16, Spring 2010, proj0 student drawings</h1>
<p>The following drawings were produced by CS16 students, <em><strong>entirely with C code</strong></em>, using basic primitives such as:</p>
<ul>
  <li>void drawLine(struct Drawing *d, struct Point p1, struct Point p2, int color);</li>
  <li>void drawCircle(struct Drawing *d, struct Circle c, int color);</li>
  <li>void fillPolygon(struct Drawing *d, struct Polygon poly, int color);</li>
  <li>etc...</li>
</ul>
<p>A full description of the assignment can be found at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/projects/proj0">http://www.cs.ucsb.edu/~pconrad/cs16/10S/projects/proj0</a>&mdash;and there is more <a href="#detail">detail</a> after the gallery of images below.</p>
<table id="pics">

<?php $userids=array(
		     "abadiozamani",
		     "adrianakeamy",
		     "aeliaresdelacruz",
		     "agallagher",
		     "agcantos",
		     "ahobbi",
		     "ahpaige",
		     "ajnarsi01",
		     "alvinthingy",
		     "amanda.mcwhorter",
		     "alexm22191",
		     "andrewduong",

		     "anthonysalvatore",

		     "arya",
		     "asundberg",
		     "bjohnson",
		     "beejal_desai",
		     "bihsan08",
		     "bondarenko",
		     "bplovera",
		     "brandon_ray",
		     "brendan_welch",
		     "brianie",
		     "brianly",
		     "cgomez01",
		     "christianriveracruz",
		     "cjimenez",
		     "cloud2791",
		     "dane_taylor",
		     "david_arias",
		     "davidsscully",
		     "diegocasillas",
		     "dpitkin",
		     "dtkang",
		     "ejustimota",
		     "gabriela02",
		     "gdreschler",
		     "hannah02",
		     "hkl",
		     "hunterbuchanan",
		     "j_lee03",
		     "jackpeachey",
		     "jaimewanke",
		     "jawhite",
		     "jcgomez",
		     "jeffhanna",
		     "jeflores",
		     "jesse_katsumata",
		     "jfaghihnassiri",
		     "jitsur07",
		     "jlrushton",
		     "joeljarquin",
		     "joelramirez",
		     "JonPerez",
		     "jorgepadilla",
		     "jpfeinberg",
		     "jrbedford",
		     "jrd01",
		     "jrf",
		     "jrjacobs",
		     "jthua",
		     "juanperez",
		     "jwjaques",
		     "jws01",
		     "kbed",
		     "kevin_tsung",
		     "kevinklee",
		     "knauth",
		     "ktomei",
		     "l_shurick",
		     "laurel_hopkins",
		     "lad3391",
		     "lbuckland",
		     "le01",

		     "lkhuu",
		     "martinrodriguez",
		     "matthewbyington",
		     "mdun",
		     "mgarber",
		     "maxhinson",
		     "mirandalwalker",
		     "mjwaldrop",
		     "morea02",
		     "nataliedykes",
		     "nathanyang",
		     "navarrete01",
		     "nhmalik",
		     "nkrause",
		     "osvaldo",
		     "pallavijain",
		     "peterverlangieri",
		     "pgalloway",
		     "rfeng",
		     "rmacklin",
		     "selmic",
		     "silvianotorres",
		     "sjp01",
		     "susantran",
		     "t_shen",
		     "trevadelman",
		     "treese",
		     "tylerking",
		     "x_wang",
		     "xinxiang",
		     "xunpo",
		     "ymao",
		     "youngchunahn",
		       "zhentao");

function userIdToURL($userid)
{
  return "http://www.cs.ucsb.edu/~" . $userid . "/cs16/proj0/ourDrawing.gif";
}

function userIdToFilename($userid)
{
  return "~" . $userid . "/public_html/cs16/proj0/ourDrawing.gif";
}



foreach ( $userids as $userid)
  {
    $thisUrl = userIdToURL($userid);
    echo "<tr><td>$userid</td><td><img src='$thisUrl' alt='Image by $userid' /><br /><a href='$thisUrl' style='font-size:0.5em'>$thisUrl</a></td></tr>";
  

  }
?>
</table>

<h2 id="detail">Learning Objectives for this assignment (a partial list):</h2>
<ul>
  <li>Get the students comfortable with structs, functions and pointers in C</li>
  <li>Work with structs &quot;as if&quot; they are objects&mdash;to lay the foundation for object-oriented programming in the next course (CS24, which is taught in C++)</li>
  <li>Help students make the transition from writing functions specified by the instructor, to designing their <em>own</em> problems, and coming up with <em>own</em> functions to solve them.</li>
								   <li>Understanding the idea of <em>parameterizing and generalizing</em> a problem&mdash;e.g. expressing all the parts of a drawing "in terms of" its parameters (reference point, width, length, color, etc.).  This is done by requiring the students to write a function to make their drawing that can be called with different parameters.</li>
  <li>Help students see ways that writing code can be personally rewarding, and an outlet for creative expression.</li>
</ul>
<p>A full description of the assignment can be found at: <a href="http://www.cs.ucsb.edu/~pconrad/cs16/10S/projects/proj0">http://www.cs.ucsb.edu/~pconrad/cs16/10S/projects/proj0</a></p>

</body>
</html>
