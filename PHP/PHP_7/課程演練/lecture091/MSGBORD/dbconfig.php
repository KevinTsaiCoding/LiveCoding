<?php
define('DB_SERVER','localhost');
define('DB_USERNAME','root');
define('DB_PASSWORD','');
define('DB_NAME','msgboarddb');

$dsn = "mysql:host=".DB_SERVER.";port=3307;dbname=".DB_NAME.";charset=utf8";
$pdo = new PDO($dsn,DB_USERNAME,DB_PASSWORD);
?>