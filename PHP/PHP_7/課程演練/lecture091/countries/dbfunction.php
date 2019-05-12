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
    //sql指令模板
    if(isset($_POST["create-btn"])){
        $countryNAME = $_POST["country-name"];
        $continent = $_POST["continent"];
        $capital = $_POST["capital"];       
        $sql = "INSERT INTO countries (countryName,continent,capital)
            VALUE (:countryName,:continent,:capital)";
         $stmt = $pdo->prepare($sql);
        //僵直傳進模板
         $stmt->bindParam(":countryName",$countryNAME);
         $stmt->bindParam(":continent",$continent);    
         $stmt->bindParam(":capital",$capital);     
         //執行
        $stmt->execute();
       unset($pdo);
       echo "<script>
                alert('新增成功');
                window.location = 'index.php';
                </script>";
    }
?>