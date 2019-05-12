<?php
require "dbconfig.php";
//使用者新增留言
if(isset($_POST["create-btn"])){

    $username = $_POST["username"];
    $title = $_POST["title"];
    $content = $_POST["message"];

    //上傳圖片取得圖片路徑
    if(!empty($_FILES["photo"]["name"])){
        $fileName = $_FILES["photo"]["name"];
        $explodedName = explode('.',$fileName);
        $newFileName = $explodedName[0].date("YmdHis").".".$explodedName[1];
        $fileStorePath = "images/".$newFileName;
        move_uploaded_file($_FILES["photo"]["tmp_name"],$fileStorePath);
    }else{
        $fileStorePath = null;
    }
    $sql = "INSERT INTO messagetable (name, title, content, img, time)
                VALUE (:name, :title, :content,:img,:time)";
    $stmt = $pdo->prepare($sql);
    $stmt->bindParam(":name",$username);
    $stmt->bindParam(":title",$title);
    $stmt->bindParam(":content",$content);
    $stmt->bindParam(":img",$fileStorePath);
    $stmt->bindParam(":time",date("Y-m-d H:i:s"));
    $stmt->execute();
    unset($pdo);
    header("Location: index.php");


}

?>   