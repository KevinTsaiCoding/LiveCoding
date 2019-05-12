<?php
include "header.php";
require "dbconfig.php";
$sql = "SELECT *FROM messagetable
        ORDER BY time DESC";
$stmt = $pdo->prepare($sql);
$stmt->execute();     
$data = $stmt->fetchAll(PDO::FETCH_ASSOC);
unset($pdo);   
print_r($data);
?>
<div class="container mt-5">
    <div class="row justify-content-center">
        <div class="col-8">
        <?php foreach ($data as $rows):?>
        <div class="card mb-3">
            <div class="card-header">
                標題: <?= $rows["title"]?>
            </div>
            <div class="card-body">
                <blockquote class="blockquote mb-0">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer posuere erat a ante.</p>
                <footer class="blockquote-footer">Someone famous in <cite title="Source Title">Source Title</cite></footer>
                </blockquote>
            </div>
        </div>
        <?php endforeach;?>
        </div>
    </div>
</div>