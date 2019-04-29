<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<form method="post" action="result.php">
<table  align="center">
	<?php
	for ($i=1; $i<10; $i++) { 
		echo "<tr>";
		for ($j=1; $j<10; $j++) { 
			echo "<td align=center>"."<button>".$i."*".$j."=".$i*$j."</button>"."</td>";
		}
	}
	?>
</table>
</form>

<script language="JavaScript">
function ShowTime(){
　var NowDate=new Date();
　var h=NowDate.getHours();
　var m=NowDate.getMinutes();
　var s=NowDate.getSeconds();　
　document.getElementById('showbox').innerHTML = h+'時'+m+'分'+s+'秒';
　setTimeout('ShowTime()',1000);
}
</script>
<body onload="ShowTime()">
<div id="showbox"></div>
</body>
</body>
</html>