function report(s)
{
 // Comment out only one of the following lines

 // Or in the js interpreter, just type report = print,
 // which redefines report as the print function.
    
 //  window.alert(s);   // in browser, use window.alert(s) or document.write(s)
	window.document.write("<pre>" + s + "</pre>");
 // print(s);   // for command line javascript, use print(s) 
}

function checkExpect(check,expect)
{
  try {
    result = eval(check);
    if (result==expect) {
      report("Test case " + check + " passed! (result: " + result + ")");
   }  else {
      report("Test case " + check + " FAILED: expected: " + expect 
                                  + " result: " + result);
     } // else
  } catch (err) {
    report("Test case " + check + 
          " FAILED: an error occurred: ");
    for (var i in err) report (i + ' = ' + err[i]); //  all properties of err
    report("NOTE: If a syntax error is reported on 'line 12', for example, and line 12 is the line where the eval function appears, this may be actually a syntax error in the argument to check, and not an error in the JavaScript source at line 12 of this file'");

    }
}


function spaceAndZeroFillBinary(s,n)
{

  s = s + ""; // converts to string if it came in as a number

  if (typeof(s) != "string")
    s = "";

  if (typeof(n) != "number")
    n=4;

  var len = s.length; 
  if (len <=  n)
      return nZeros(n-len) + s;
  else
     {
       lenFirstPart = len-n; 

//print('len=' +len);
//print('len=' + n);
//print('lenFirstPart =' +lenFirstPart);

       var firstPart = s.substring(0,lenFirstPart);
       var secondPart = s.substring(lenFirstPart,len);
 
//print('firstPart=' + firstPart);
//print('secondPart=' + secondPart);

     return spaceAndZeroFillBinary(firstPart,n) + " " + secondPart;
     }


}

function nZeros(n)
{
   if (n<=0) 
     return "";
   else
     return "0" + nZeros(n-1);
}

function zeroPrependToMakeNDigits(s,n) {
    if (s.length >= n) {
	return s;
    } else {
	return nZeros(n-s.length) + s;
    }
}

function formatFor(s,radix,otherRadix)
{
   if (radix!=2)
     return s;

   if (otherRadix==8)
     return spaceAndZeroFillBinary(s,3);
 
   return spaceAndZeroFillBinary(s,4);
   
}

// return true if s is a valid rwxrwxrwx string

function rwxIsValid(s)
{
    reString = "^([r-][w-][x-]){3}$";
    var re = new RegExp(reString);

    // Careful: this is not the same as "return s.match(re);"
    // because we are coercing the result to be treated as a boolean...

    if (s.match(re)) {
	return true;
    } else {
	return false;
    }
}

// return true if s is a valid three digit octal number that can 
// become a rwxrwxrwx string

function octIsValidRwx(s)
{
    reString = "^([0-7]){3}$";
    var re = new RegExp(reString);
    return s.match(re)!=null;
}

// return true if s is a valid nine digit binary number that can 
// become a rwxrwxrwx string

function binIsValidRwx(s)
{
    reString = "^([01]){9}$";
    var re = new RegExp(reString);

    // Careful: this is not the same as "return s.match(re);"
    // because we are coercing the result to be treated as a boolean...

    if (s.match(re)) {
	return true;
    } else {
	return false;
    }


}


function binToRwx(s)
{
    if (!binIsValidRwx(s)) {
	return "error";
    }

    var retVal = "";

    retVal += (s.charAt(0)=='0' ? '-' : 'r');
    retVal += (s.charAt(1)=='0' ? '-' : 'w'); 
    retVal += (s.charAt(2)=='0' ? '-' : 'x'); 
    retVal += (s.charAt(3)=='0' ? '-' : 'r');
    retVal += (s.charAt(4)=='0' ? '-' : 'w'); 
    retVal += (s.charAt(5)=='0' ? '-' : 'x'); 
    retVal += (s.charAt(6)=='0' ? '-' : 'r');
    retVal += (s.charAt(7)=='0' ? '-' : 'w'); 
    retVal += (s.charAt(8)=='0' ? '-' : 'x'); 

    return retVal;
}

function rwxToBin(s)
{
    if (!rwxIsValid(s)) {
	return "error";
    }
    return rwxToBinHelper(s); 
}
 
function stringWithoutLastChar(s)  {
    return s.substring(0,s.length-1);
}

function lastChar(s)  {
    return s.charAt(s.length-1);
}

function rwxToBinHelper(s)
{
    if (s.length == 0) {
	return "";
    }

    if (s.length == 1) {
	if (s == "-") {
	    return "0";
	} else {
	    return "1";
	}
    }


    return rwxToBinHelper(stringWithoutLastChar(s)) + 
	rwxToBinHelper(lastChar(s));
    
}

function octToRwx(s)
{
    if (!octIsValidRwx(s)) {
	return "error";
    }

    // Now we know that we have an octal number as a string
    // that will convert ok.    So, convert to binary, then to
    // rwx format.

    return binToRwx(zeroPrependToMakeNDigits(octToBin(s),9));
}



function rwxToOct(s)
{
    if (!rwxIsValid(s)) {
	return "error";
    }

    // Now we know that we have an rwx string that is exactly 
    // in the right format.   Each - stands for a 0 and each non - 
    // stands for a one.  So convert to binary:

    var bin = rwxToBin(s);

    // then to octal

    var oct = binToOct(bin);

    // then make sure we have exactly 3 digits

    return zeroPrependToMakeNDigits(oct,3); 
}

function binToOct(s) {

    return parseInt(s,2).toString(8);
}

function octToBin(s) {

    return parseInt(s,8).toString(2);
}

function testCases()
{
   checkExpect('nZeros(0)','');
   checkExpect('nZeros(1)','0');
   checkExpect('nZeros(3)','000');
   checkExpect('nZeros(4)','0000');

   checkExpect('spaceAndZeroFillBinary("00000000",4)',"0000 0000")
   checkExpect('spaceAndZeroFillBinary("1",4)',"0001")
   checkExpect('spaceAndZeroFillBinary("1",3)',"001")
   checkExpect('spaceAndZeroFillBinary("101",3)',"101")
   checkExpect('spaceAndZeroFillBinary("001",3)',"001")
   checkExpect('spaceAndZeroFillBinary("001",4)',"0001")
   checkExpect('spaceAndZeroFillBinary("1001",3)',"001 001")
   checkExpect('spaceAndZeroFillBinary("foo","bar")',"0foo")
   checkExpect('spaceAndZeroFillBinary(1111,3)',"001 111")

   checkExpect('formatFor(1111,2,8)','001 111');
   checkExpect('formatFor(1111,2,10)','1111');
   checkExpect('formatFor(111,10,2)','111');
   checkExpect('formatFor(11,8,2)','11');
   

}

function testCases2()
{
   
   checkExpect('binToOct("111")','7');
   checkExpect('binToOct("101")','5');
   checkExpect('binToOct("111101101")','755');

   checkExpect('octToBin("7")','111');
   checkExpect('octToBin("5")','101');
   checkExpect('octToBin("644")','110100100');

   checkExpect('rwxToBinHelper("")','');
   checkExpect('rwxToBinHelper("x")','1');
   checkExpect('rwxToBinHelper("r")','1');
   checkExpect('rwxToBinHelper("w")','1');
   checkExpect('rwxToBinHelper("-")','0');
   checkExpect('rwxToBinHelper("---------")','000000000');
   checkExpect('rwxToBinHelper("rwx------")','111000000');
   checkExpect('rwxToBinHelper("---rwx---")','000111000');
   checkExpect('rwxToBinHelper("------rwx")','000000111');
   checkExpect('rwxToBinHelper("--------x")','000000001');

   checkExpect('rwxToBin("rwxrwxrwx")','111111111');
   checkExpect('rwxToBin("---------")','000000000');
   checkExpect('rwxToBin("rwx------")','111000000');
   checkExpect('rwxToBin("---rwx---")','000111000');
   checkExpect('rwxToBin("------rwx")','000000111');
   checkExpect('rwxToBin("--------x")','000000001');
   checkExpect('rwxToBin("-------w-")','000000010');
   checkExpect('rwxToBin("-------wx")','000000011');
   checkExpect('rwxToBin("------r--")','000000100');
   checkExpect('rwxToBin("------r-x")','000000101');
   checkExpect('rwxToBin("------rw-")','000000110');
   checkExpect('rwxToBin("rrrrrrrrr")','error');
   checkExpect('rwxToBin(""         )','error');
   checkExpect('rwxToBin("foo"      )','error');
   checkExpect('rwxToBin("rwxrwx"   )','error');
   checkExpect('rwxToBin("rwxrwxrwx-")','error');

   checkExpect('binToRwx("111111111")','rwxrwxrwx');
   checkExpect('binToRwx("000000000")','---------');
   checkExpect('binToRwx("111000000")','rwx------');
   checkExpect('binToRwx("000111000")','---rwx---');
   checkExpect('binToRwx("000000111")','------rwx');
   checkExpect('binToRwx("000000001")','--------x');
   checkExpect('binToRwx("000000010")','-------w-');
   checkExpect('binToRwx("000000011")','-------wx');
   checkExpect('binToRwx("000000100")','------r--');
   checkExpect('binToRwx("000000101")','------r-x');
   checkExpect('binToRwx("000000110")','------rw-');

   checkExpect('zeroPrependToMakeNDigits("777",3)','777');
   checkExpect('zeroPrependToMakeNDigits("77",3)','077');
   checkExpect('zeroPrependToMakeNDigits("7",3)','007');
   checkExpect('zeroPrependToMakeNDigits("1",3)','001');
   checkExpect('zeroPrependToMakeNDigits("0",3)','000');

   checkExpect('zeroPrependToMakeNDigits("777",4)','0777');
   checkExpect('zeroPrependToMakeNDigits("77",4)','0077');
   checkExpect('zeroPrependToMakeNDigits("7",4)','0007');
   checkExpect('zeroPrependToMakeNDigits("1",4)','0001');
   checkExpect('zeroPrependToMakeNDigits("0",4)','0000');



   checkExpect('rwxToOct("rwxrwxrwx")','777');
   checkExpect('rwxToOct("---------")','000');
   checkExpect('rwxToOct("rwx------")','700');
   checkExpect('rwxToOct("---rwx---")','070');
   checkExpect('rwxToOct("------rwx")','007');
   checkExpect('rwxToOct("--------x")','001');
   checkExpect('rwxToOct("-------w-")','002');
   checkExpect('rwxToOct("-------wx")','003');
   checkExpect('rwxToOct("------r--")','004');
   checkExpect('rwxToOct("------r-x")','005');
   checkExpect('rwxToOct("------rw-")','006');
   checkExpect('rwxToOct("rrrrrrrrr")','error');
   checkExpect('rwxToOct(""         )','error');
   checkExpect('rwxToOct("foo"      )','error');
   checkExpect('rwxToOct("rwxrwx"   )','error');
   checkExpect('rwxToOct("rwxrwxrwx-")','error');


   checkExpect('rwxIsValid("rwxrwxrwx")',true);
   checkExpect('rwxIsValid("---------")',true);
   checkExpect('rwxIsValid("rwx------")',true);

   checkExpect('rwxIsValid("rrrrrrrrr")',false);
   checkExpect('rwxIsValid(""         )',false);
   checkExpect('rwxIsValid("foo"      )',false);
   checkExpect('rwxIsValid("rwxrwx"   )',false);
   checkExpect('rwxIsValid("rwxrwxrwx-")',false);

   checkExpect('octIsValidRwx("777")',true);
   checkExpect('octIsValidRwx("755")',true);
   checkExpect('octIsValidRwx("000")',true);

   checkExpect('octIsValidRwx("")',false);
   checkExpect('octIsValidRwx("0")',false);
   checkExpect('octIsValidRwx("foo")',false);
   checkExpect('octIsValidRwx("7777")',false);
   checkExpect('octIsValidRwx("75")',false);


   checkExpect('binIsValidRwx("111111111")',true);
   checkExpect('binIsValidRwx("111101101")',true);
   checkExpect('binIsValidRwx("000000000")',true);

   checkExpect('binIsValidRwx("")',false);
   checkExpect('binIsValidRwx("000")',false);
   checkExpect('binIsValidRwx("foo")',false);
   checkExpect('binIsValidRwx("111111111111")',false);
   checkExpect('binIsValidRwx("111101")',false);

   checkExpect('octToRwx("777")','rwxrwxrwx');
   checkExpect('octToRwx("000")','---------');
   checkExpect('octToRwx("700")','rwx------');
   checkExpect('octToRwx("070")','---rwx---');
   checkExpect('octToRwx("007")','------rwx');
   checkExpect('octToRwx("001")','--------x');
   checkExpect('octToRwx("002")','-------w-');
   checkExpect('octToRwx("003")','-------wx');
   checkExpect('octToRwx("004")','------r--');
   checkExpect('octToRwx("005")','------r-x');
   checkExpect('octToRwx("006")','------rw-');

   checkExpect('octToRwx("0")','error');
   checkExpect('octToRwx("888")','error');
   checkExpect('octToRwx("bar")','error');
   checkExpect('octToRwx("75")','error');
   checkExpect('octToRwx("7555")','error');

}

// testCases();

// testCases();
