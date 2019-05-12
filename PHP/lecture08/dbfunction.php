<?php
    require "dbconfig.php";
    //刪除資料
    if(isset($_GET["action"])){
        if($_GET["action"]=="delete"){
            $id = $_GET["id"];
            $sql = "DELETE FROM countries WHERE id = :id";
            $stmt= $pdo->prepare($sql);
            $stmt->bindParam(":id",$id);
            $stmt->execute();
            unset($pdo);
            echo "<script>
                alert('刪除成功');
                window.location = 'index.php';
                </script>";
        }
    }
?>