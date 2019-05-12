<?php
require "dbconfig.php";
//sql指令
$sql = "SELECT * FROM countries";
//將sql指令(模板)在伺服器做準備
$stmt = $pdo->prepare($sql);
//執行指令
$stmt->execute();
//拿到資料
$data = $stmt->fetchAll(PDO::FETCH_ASSOC);
unset($pdo);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>國家表格</title>
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js" integrity="sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js" integrity="sha384-ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy" crossorigin="anonymous"></script>
    <link rel="stylesheet" href="https://bootswatch.com/4/flatly/bootstrap.min.css">

</head>
<body>
    <nav class="navbar navbar-expand-lg navbar-dark bg-primary">
    <a class="navbar-brand" href="./">國家首都表格</a>
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarColor01" aria-controls="navbarColor01" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
    </button>

    <div class="collapse navbar-collapse" id="navbarColor01">
        <ul class="navbar-nav ml-auto">
            <li class="nav-item active">
                <a class="nav-link" href="create.php">新增資料 <span class="sr-only">(current)</span></a>
            </li>
        </ul>
        <form class="form-inline my-2 my-lg-0" action="search.php" method="get">
        <input class="form-control mr-sm-2" type="text" placeholder="Search" name="search-target">
        <button class="btn btn-secondary my-2 my-sm-0" type="submit" name="search-btn">Search</button>
        </form>
    </div>
    </nav>
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
                    <?php foreach($data as $row):?>
                        <tr>
                            <td><?= $row["countryName"]?></td>
                            <td><?= $row["continent"]?></td>
                            <td><?= $row["capital"]?></td>
                            <td>刪除</td>
                        </tr>
                    <?php endforeach;?>
                </tbody>
                </table>
            </div>
        </div>
    </div>



</body>
</html>