<?php
 session_start();/* session start, 讓網站知道 Session 已啟動[像是登入系統常會用]*/  
?>
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