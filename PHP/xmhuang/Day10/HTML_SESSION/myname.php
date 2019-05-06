<!DOCTYPE html>
<html>
<head>
	<title>Page 3</title>
</head>
<body>
	<h2>Page 3</h2>
<?php
/* Session 變數接收 */
session_start();
echo "My name is ";
echo $_SESSION['name']."<br>";
?>

</body>
</html>