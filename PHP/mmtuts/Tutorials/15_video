<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta charset="big5">
	<title>Calculator</title>
</head>
<body>
Calculator
<br>
<br>
<form method="post">
	<input type="Number" name="num1" placeholder="Number 1">
	<input type="Number" name="num2" placeholder="Number 2">
	<select name="operator">
		<option>None</option>
		<option>Add</option>
		<option>Substract</option>
		<option>Multipy</option>
		<option>Divide</option>
	</select>
	<br>
	<br>
	<input type="submit" name="submit" value="Let's Calculate">
</form>
<br>
<br>
<br>
The Answer is
<?php  
	if(isset($_POST['submit'])){
		$result1=$_POST['num1'];
		$result2=$_POST['num2'];
		$operator=$_POST['operator'];
	}
	switch ($operator) {
		case "None":
			echo "You need to select a method";
			break;

		case "Add":
			echo $result1+$result2;
			break;

		case "Substract":
			echo $result1-$result2;
			break;

		case "Multipy":
			echo $result1*$result2;
			break;

		case "Divide":
			echo $result1/$result2;
			break;
	}
?>
</body>
</html>
