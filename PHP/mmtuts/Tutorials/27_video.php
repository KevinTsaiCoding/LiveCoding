<!DOCTYPE html>
<html>
<head>
	<title>Different Superglobals in PHP</title>
</head>
<body>
<h1>
<?php
	setcookie("name","Daniel","time()"-86400);/*setcookie("變數名-name","你要設的-value","cookie使用期限-time")*/
	$_SESSION['name']="12";/*$_SESSION['變數名']="你要設定的數值" */
?>
</h1>

</body>
</html>