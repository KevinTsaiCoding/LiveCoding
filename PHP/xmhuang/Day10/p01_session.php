<!DOCTYPE html>
<html>
<head>
	<title>Page 1</title>
</head>
<body>
<?php
	session_start();// start the session
	$_SESSION["username"]="David";/* set $_SESSION["username"] variable value David */
	echo $_SESSION["username"];
?>
</body>
</html>
