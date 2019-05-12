<?php
define('DB_SERVER','localhost');
define('DB_USERNAME','root');
define('DB_PASSWORD','root');
define('DB_NAME','exampledb');

$dsn = "mysql:host=".DB_SERVER.";port=8889;dbname=".DB_NAME.";charset=utf8";
$pdo = new PDO($dsn,DB_USERNAME,DB_PASSWORD);
?>