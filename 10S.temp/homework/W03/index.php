<!DOCTYPE html6 PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />


<script type="text/javascript" src="../exam.js" ></script>
<link rel="stylesheet" href="../homework.css" type="text/css" />



<style type="text/css">
<!--
ol li ol li {list-style-type: lower-alpha;}
ol li ul li {list-style-type:disc;}

td {text-align:center; height:1.5em;}
.smallerFont {font-size: 0.9em;}
div#container {width: 800px;}
p {margin-top: 0px; margin-bottom: 0px; padding-top:5px; padding-bottom:6px;}
pre {margin-top: 0px; margin-bottom: 0px; padding-top:4px; padding-bottom:4px;}
-->
</style>
</head>
<body onload="updatePointCount();">
<div id="container">
 <p>CS16, 10S, UCSB—W03: Routing and Deadlock Game (preparation for project 1) &nbsp;&nbsp;&nbsp;<span id="pointCount">Total points: ?</span> (<a href="W02.pdf">printable PDF</a>)</p>
 <p class="style6">Accepted: on paper, <strong>IN LAB</strong> on 04/30/2010<br />
  If you are unable to do that, please turn it during Conrad's office hours ONLY, not in lecture.<br />
  <br />
FILL THIS OUT WITH YOUR <strong>LAB05</strong> <strong>&quot;PAIR PARTNER&quot;</strong><strong><br />
For this assignment, it is only <em>necessary</em> to turn in one submission per pair (or trio).</strong></p>
<p>Name One: (2 pts)______________________________   <span>Umail address (2 pts)</span>  _____________________ </p>
<p><strong>Section (2 pts) Circle one:         </strong>9am &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10am&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11am &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;noon</p>
<p>Name Two: (2 pts)______________________________   <span>Umail address (2 pts)</span>  _____________________ </p>
<p><strong>Section (2 pts) Circle one:</strong><strong>:         </strong>9am &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10am&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11am &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;noon<br />
<p class="style6" style="font-size:0.9em;"><strong>FILL THE NEXT PART OUT ONLY IF YOU ARE AUTHORIZED BY THE TA/INSTRUCTOR TO WORK IN A GROUP OF THREE</strong></p>
  Name Three: ______________________________   <span>Umail address </span>_____________________ </p>
<p><strong>Section—Circle one:  </strong><strong>:         </strong>9am &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10am&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11am &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;noon<strong><br />
</strong></p>
<hr />
          


<hr />
<p>For this worksheet, the preparation is:</p>
<ul>
  <li> playing the routing and deadlock game in lab (in person) on 04/30, and/or</li>
  <li>reading over the following web page that describes the game <br />
    <a href="http://www.cs.ucsb.edu/~pconrad/csed/cs-unplugged/routing-deadlock/">http://www.cs.ucsb.edu/~pconrad/csed/cs-unplugged/routing-deadlock/</a><br />
</li>
</ul>
<p>Once you've done the preparation, write answers to these questions on this sheet<br />  
(use the <a href="W03.pdf">PDF link</a> to print a copy of this if you weren't in class).</p>
<ol>
  <li>(16 pts) On the web page that describes the game <br />
    (<strong></strong><a href="http://www.cs.ucsb.edu/~pconrad/csed/cs-unplugged/routing-deadlock/">http://www.cs.ucsb.edu/~pconrad/csed/cs-unplugged/routing-deadlock/</a>), <br />
    scroll to the bottom and review the example strings that represent the game state.<br />
      <br />
    Then, for each of these, indicate whether it is a legal game state string, and if not, indicate why.<br />
    <br />
    <br />
    The first two are  done for you as  examples—and there are more examples at the web page linked to above.<br />
    <br />
    <table border="1" cellspacing="1" cellpadding="3">
      <tr>
        <th scope="col">string</th>
        <th scope="col">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ok?&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</th>
        <th scope="col">explanation</th>
      </tr>
      <tr>
        <td><code>&quot;rrooyyg&nbsp;&quot;</code></td>
        <td>&nbsp;&nbsp;<span style="padding:1px; border: 1px solid black;">&nbsp;&nbsp;YES&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;&nbsp;NO&nbsp;&nbsp;</td>
        <td>This is a legal string for a four person game with colors r,o,y and g.</td>
      </tr>
      
        <tr>
          <td><code>&quot;rooyygrg&quot;</code></td>
          <td>&nbsp;YES&nbsp;  &nbsp;<span style="padding:1px; border: 1px solid black;">&nbsp;&nbsp;NO&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;</td>
          <td>No space, so this one is no good.</td>
        </tr>
        <tr>
          <td><code>&quot;bwpybwp &quot;</code></td>
          <td>&nbsp;YES&nbsp; &nbsp;NO&nbsp;  </td>
          <td><br />
            <br />
          <br /></td>
        </tr>
        <tr>
          <td><code>&quot;rbpgrbyg&nbsp;&quot;</code></td>
          <td>&nbsp;YES&nbsp; &nbsp;NO&nbsp;  </td>
          <td><br />
            <br />
          <br /></td>
        </tr>
      
        <tr>
          <td><code>&quot;rrooy&nbsp;ygbpbg&quot;</code></td>
          <td>&nbsp;YES&nbsp; &nbsp;NO&nbsp;  </td>
          <td><br />
          <br />
          <br /></td>
        </tr>
        <tr>
          <td><code>&quot;rrooy&nbsp;ygbprg&quot;</code></td>
          <td>&nbsp;YES&nbsp; &nbsp;NO&nbsp;  </td>
          <td><br />
          <br />
          <br />
          <br /></td>
        </tr>
    </table>
    <?php require("../pleaseTurnOver.php"); ?>
  </li>
  <li>(12 pts) For each of the following, is is a legal sequence of moves? The first three are done for you as examples.<strong></strong><code><br />
  <br />
  </code>
    <table border="1" cellspacing="1" cellpadding="3">
      <tr>
        <th scope="col">string</th>
        <th scope="col">ok?&nbsp; <br />
          &nbsp;(circle&nbsp;one)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</th>
        <th scope="col">explanation</th>
      </tr>
      <tr>
        <td><code>&quot;rro&nbsp;ygboyg&quot;<br />
          &quot;rroy&nbsp;gboyg&quot;</code></td>
        <td>&nbsp;&nbsp;<span style="padding:1px; border: 1px solid black;">&nbsp;&nbsp;YES&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO&nbsp;&nbsp;</td>
        <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<br />
          legal<br />
          <br /></td>
      </tr>
      <tr>
        <td><code>&quot;rro&nbsp;ygboyg&quot;<br />
          &quot;rrog&nbsp;yboyg&quot;</code></td>
        <td>&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;<span style="padding:1px; border: 1px solid black;">&nbsp;&nbsp;NO&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;</td>
        <td>The before and after strings are different in a place other than where the spaces appear.<br />
            <br /></td>
      </tr>
      <tr>
        <td><code>&quot;rro&nbsp;ygboyg&quot;<br />
          &quot;rrooygb yg&quot;</code></td>
        <td>&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="padding:1px; border: 1px solid black;">&nbsp;&nbsp;NO&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;</td>
        <td>The object wasn't passed between two adjacent players.<br />
            <br /></td>
      </tr>
      <tr>
        <td><code>&quot;roy&nbsp;rgbpboyg&quot;<br />
  &quot;royr&nbsp;gbpboyg&quot;</code><br /></td>
        <td>&nbsp;&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO&nbsp;&nbsp;</td>
        <td><br />
            <br />
            <br />
            <br />
            <br />
          <br /></td>
      </tr>
      <tr>
        <td><p><code> &quot;rroy&nbsp;gbpboyg&quot; <br />
            &quot;rroygb pboyg&quot;</code></p>          </td>
        <td>&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO&nbsp;&nbsp;&nbsp;</td>
        <td><br />
              <br />
            <br />
            <br /></td>
      </tr>
      <tr>
        <td><code>&quot;rrooy gbyg&quot;<br />
&quot;rrooyg byg&quot;</code></td>
        <td>&nbsp;YES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;NO&nbsp;&nbsp;&nbsp;</td>
        <td><br />
            <br />
              <br />
              <br />
              <br />
            <br />
            <br /></td>
      </tr>
    </table>
    <code><br />
    </code><br />
  </li>
  <li>(12 pts) For a 3 person game, starting with the string <code>&quot;royro &quot;</code>, indicate a complete sequence of legal moves, ending with <code>&quot;rrooy &quot;</code>.<br />
      <br />
      You might not need all the rows. There is a solution that reaches the goal in seven moves. <br />
      Can you solve it in fewer than seven?<br />
      <br />
      <table width="100%" border="1" cellspacing="1" cellpadding="5">
  <tr>
    <th scope="col">&nbsp;</th>
    <th scope="col">r</th>
    <th scope="col">o</th>
    <th scope="col">y</th>
    <th scope="col">r</th>
    <th scope="col">o</th>
    <th scope="col">&nbsp;</th>
  </tr>
  <tr>
    <td>1</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>2</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>3</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>4</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>5</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>6</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>7</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>8</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>9</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>10</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
</table>
</li>
</ol>
<hr />
<p> End of W03</p>
</div>
</body>
</html>
