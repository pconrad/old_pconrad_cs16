<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>CS16 Homework, 09F (P. Conrad, UCSB CS Dept.)</title>
<link rel="stylesheet" type="text/css" href="../../cs16.css" />
</head>

<body>
<div id="container">
<h1>CS16 Homework, 10W</h1>
<h2>P. Conrad, UCSB Dept. of Computer Science</h2>
<p>Return to <a href="../..">CS16 home page</a></p>
<div>
<ul>
<?php 


// http://www.jellyandcustard.com/2006/05/18/using-directoryiterator-to-list-files-in-php/

   $subdir = ".";  // NOTE: Link code below may break if subdir is not "."
		
   $dir = new DirectoryIterator( $subdir );
   
   $i = 0;
   $filesArray=array();
   
   foreach($dir as $file )
   
   {
     // print("<pre>" . $file . "</pre>"); // for debugging only
	  
      if ($file == "." || $file == ".." || $file == "index.php" || $file == "exam.js" ) 
	  {  
        // skip over these
      }  
	  else
	  {
	
		// get <title> string from file.   Depends on <title> open and close tags being on same line with content,
		// e.g. <title>This is my title</title>
		
		// First, get the full path of where we expect to find the file
		
	
		$currPath = dirname($_SERVER["SCRIPT_FILENAME"]) . "/" . $subdir . "/".  $file . "/";
		$currFile = $currPath . "index.html"; // try .html first
		
		$handle = @fopen($currFile, "r");  // use @ to suppress the warning if it wasn't found
		
		if (! $handle)  // if .html didn't work try .php
		{
			$currFile = $currPath . "index.php";
		   	$handle = @fopen($currFile, "r");
		}
		
		
		if ( ! $handle)
		{
		   $titleContents = "...";
		}
		else 
		{
		   $input = fread($handle, filesize($currFile));
		   fclose($handle);

		   $pattern = '<title>[^<]*</title>';
		   ereg($pattern,$input,$regs);
		   $titleLine = $regs[0]; // Now I have the title line
		   $titleContents = str_replace("<title>","",$titleLine);
		   $titleContents = str_replace("</title>","",$titleContents);
		}
		
		
		$linkText = str_replace("_", " ", $file);
	    $linkText = str_replace(".html", "", $linkText);
	    $linkText = str_replace(".php", "", $linkText);
	
		
		// NOTE: Links may break if subdir is not "."
		
	    print ("<li><a href='" . $file . "'>" . $linkText . "</a>:&nbsp;" . $titleContents . " </li>");
		
		
	} // else	
  } // foreach loop

?>
</ul>
</div>
<div>
<h2>Homework Policies</h2>
<p>
These are general policies regarding homework.  For specific assignments, there may be other policies that take precedence. <strong>Unless otherwise instructed by the instructor or a TA:</strong></p>
<ul>
  <li>Homework assignments must be turned in <strong>on paper, in person</strong> <strong>during the lecture or lab session</strong> in which they are due.</li>
  <li>Electronic submission (e.g. email), is <strong>not accepted for homeworks.</strong></li>
  <li>Sliding a paper under the door or leaving it in a faculty or TA mailbox is <strong>not permitted.</strong></li>
  <li>If a homework assignment is due, it is due <strong>even if </strong> the instructor or TA doesn't call for papers to be handed in. In that case, it is <strong>your responsibility</strong> to hand your assignment directly to the instructor and/or one of the course TAs.</li>
  <li>Usually, you may <strong>make up exactly one</strong> homework assignment without penalty—unless that assignment is one that indicates you may not make it up.
    <ul>
      <li>This MUST be done in person, during the instructor's office hours, or at an appointment. If it is done at an appointment, you must request the appointment by email within 48 hours of the scheduled class in which the assignment was due. </li>
      <li>When this happens, the fact that you did this will be recorded on Gauchospace.</li>
      <li>You only get to do this once per quarter. After that, missed homeworks can only be made up by earning extra credit points.</li>
    </ul>
  </li>
  <li>You <strong>may not turn in</strong> a homework assignment to the instructor or to a TA during a class other than the one in which it was due.
    <ul>
      <li>Example: You may not hand in H02 along with your H03 paper on the day that H03 is due.</li>
      <li>Any such papers may be discarded by the instructor or TA without being graded.        </li>
      </ul>
  </li>
  <li>Any exception to the above policies—for example if you have an &quot;special understanding&quot; with the instructor or TA about some discussion about an unavoidable personal circumstance—MUST be documented by an email trail, or such understanding will be considered null and void.</li>
</ul>
</div>
</div> <!-- id="container" -->
</body>
</html>
