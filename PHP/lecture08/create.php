<?php
    include "header.php";
?>

<div class="container mt-5">
    <div class="row justify-content-center">
        <div class="col-6">
            <form action="dbfunction.php" method="post">
            <div class="form-group">
                <label class="col-form-label" for="country-name">國家名稱</label>
                <input type="text" class="form-control" name="country-name">
            </div>
            <div class="form-group">
                <label class="col-form-label" for="continent">洲別</label>
                <input type="text" class="form-control" name="continent"">
            </div>
            <div class="form-group">
                <label class="col-form-label" for="country-name">首都</label>
                <input type="text" class="form-control" name="capital">
            </div>

            <button type="submit" class="btn btn-warning" name="create-btn">新增</button>
            <a href="index.php" class="btn btn-outline-warning">取消</a>
            </form>
        </div>
    </div>
</div>