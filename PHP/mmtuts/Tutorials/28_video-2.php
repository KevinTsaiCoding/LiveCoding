
<!DOCTYPE html>
<html>
<head>
	<title>Different Superglobals in PHP</title>
</head>
<body>
<h1>
<?php
	$_SESSION['username']="dani123";
	echo $_SESSION['username'];

	if (!isset($_SESSION['username'])) {
		echo " You are not loggeg in";
	}else{
		echo " You are logged in";
	}
?>
</h1>

</body>
</html>