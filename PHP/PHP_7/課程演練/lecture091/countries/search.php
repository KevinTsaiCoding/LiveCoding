<?php
include "header.php";
require "dbconfig.php";
if(isset($_GET["search-btn"])){
    $searchTarget = $_GET["search-target"];
    // SQL 預設 沒 區別大小寫
    // $sql = "SELECT * FROM countries
    //         WHERE countryNAME = :search
    //         OR continent=:search
    //         OR capital = :search";
    // 區別大小寫 加 binary
    $sql = "SELECT * FROM countries
            WHERE binary countryNAME = :search
            OR binary continent=:search
            OR binary capital = :search";            
    $stmt = $pdo->prepare($sql);
    $stmt->bindParam(":search",$searchTarget);
    //執行
    $stmt->execute();
    $data = $stmt->fetchAll(PDO::FETCH_ASSOC);
    // 符合資料筆數 $stmt->rowCount()
    //echo $stmt->rowCount();
    //print_r($data);
    unset($pdo);
}

?>  
    <div class="container mt-5">
        <div class="row justify-content-center">
            <div class="col-8">
                <table class="table table-hover table-bordered">
                <thead class="thead-dark">
                    <tr>
                    <th scope="col">國家</th>
                    <th scope="col">洲別</th>
                    <th scope="col">首都</th>
                    <th scope="col">刪除</th>
                    </tr>
                </thead>
                <tbody>
                    <?php if($stmt->rowCount()>0):?>
                        <?php foreach($data as $row):?>
                            <tr>
                                <td><?= $row["countryName"]?></td>
                                <td><?= $row["continent"]?></td>
                                <td><?= $row["capital"]?></td>
                                <td><a href="dbfunction.php?action=delete&id=<?= $row['id']?>"><i class="far fa-trash-alt"></i></a></td>
                            </tr>
                        <?php endforeach;?>
                    <?php else:?> 
                        <tr>
                            <td colspan='4'>查無資料</td>
                        </tr>                
                    <?php endif;?>                    
                </tbody>
                </table>
                <a href="index.php" class="btn btn-primary">回首頁</a>
            </div>
        </div>
    </div>
</body>
</html>  