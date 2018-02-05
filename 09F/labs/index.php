<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>UCSB CS16 Fall 2009 Labs (P. Conrad)</title>
<link rel="stylesheet" href="../../cs16.css" />
</head>

<body>
<div id="container">
  <h1>CS16, Fall 2009, UCSB<br />
  Labs</h1>
 <p><a href="../../../cs16">Return to CS16 home page</a></p>


<!-- basicInfo -->
<div class="semesterInfo">



<ul>
<?php 


// http://www.jellyandcustard.com/2006/05/18/using-directoryiterator-to-list-files-in-php/

   $subdir = "./";
   $dir = new DirectoryIterator( $subdir );
   
   foreach($dir as $file )
   
   {
      if (substr($file,0,3) == "lab")
	  {
	    print ("<li><a href='" . $file . "'>" . $file . "</a></li>");
	  } // if

  } // foreach


?>
</ul>
</div><!-- semesterInfo -->

</div><!-- container-->
</body>
</html>
