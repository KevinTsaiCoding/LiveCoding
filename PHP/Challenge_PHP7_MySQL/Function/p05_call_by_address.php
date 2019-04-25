<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>php_fun5.php</title>
</head>
<body>
<center>
	<h3>
<?php
	$x=2;
	echo "傳址呼叫前的".'$x'."值為".$x."<br>"."<br>";
	function add2(&$x){/* call by address by using add "&" before the parameters.*/
	$x+=2;
	echo "傳址呼叫後的".'$x'."值為".$x;
}
	add2($x);/* call add2 function, pass variable x to function add2.*/
?>
	</h3>
</center>
</body>
</html>
