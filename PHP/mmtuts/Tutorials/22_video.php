<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<?php
$x=100;
newCalc($x);/*Call newCalc function.*/
function newCalc($x){/*Call by Value.*/
		$newnum=$x*0.75;
		echo "Here is 75% of $newnum"."<br>";
}
newCalc(200);/*Call newCalc function.*/
?>
</body>
</html>