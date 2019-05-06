<!DOCTYPE html>
<html>
<head>
	<title>Different Superglobals in PHP</title>
</head>
<body>
	<h1>
	<?php
		$x=5;
		output();/* call function */
		function output(){
			$y=10;
			echo $GLOBALS['x'];
		}
	?>
	</h1>

</body>
</html>