<?php

class Item { 
	private $name="";
	private $linkText="";
	private $titleContents="";
 
	public function __construct($name, $linkText, $titleContents) {
		$this->setData($name, $linkText, $titleContents);	
	}
 
	public function setData($name, $linkText, $titleContents) {
		$this->name = $name;
		$this->linkText = $linkText;
		$this->titleContents = $titleContents;
	}
 
    public function as_li() {
	
	    return("<li><a href='" . $this->name . "'>" . $this->linkText . "</a>:&nbsp;" . $this->titleContents . " </li>");
	
    }
}


// http://www.jellyandcustard.com/2006/05/18/using-directoryiterator-to-list-files-in-php/

   $subdir = ".";  // NOTE: Link code below may break if subdir is not "."
		
   $dir = new DirectoryIterator( $subdir );
      
   $allTheLabs = array();   
   
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
		
		$theItem = new Item($file,$linkText,$titleContents);
		
		$allTheItems["$file"] = $theNewItem;
			
		
	} // else	
  } // foreach loop


foreach($allTheItems as $filename => $entry  )
   
{
        print($entry->as_li());
} // foreach loop

?>
