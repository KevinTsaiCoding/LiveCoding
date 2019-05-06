<?php session_start(); ?>
<!DOCTYPE html>
<html>
<head>
	<title>Page 2</title>
</head>
<body>
	<h2>Page 2</h2>
<?php

	$name=$_GET['name'];
	$_SESSION['name']=$name;
	/* using session to pass variable, that can pass from page to page without any declaration*/
	echo '<a href="myname.php">顯示我剛剛輸入的名字</a><br>';
?>
</body>
</html>