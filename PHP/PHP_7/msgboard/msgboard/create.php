<?php
include "header.php";
//判斷登入狀態
?>
<!-- .container>.row.justify-content-center>.col-6 -->
<div class="container mt-5">
    <div class="row justify-content-center">
        <div class="col-md-6 col-sm-12">
            <form action="dbfunction.php" method="post" enctype="multipart/form-data">
                <h5 align="center">新增留言</h5>
                <!-- 作者 -->
                <div class="form-group">
                    <label class="col-form-label" for="username">User Name</label>
                    <input type="text" class="form-control" name="username">
                </div>
                <!-- 標題 -->
                <div class="form-group">
                    <label class="col-form-label" for="title">Title</label>
                    <input type="text" class="form-control" name="title">
                </div>
                <!-- 留言內容 -->
                <div class="form-group">
                    <label for="message">Message</label>
                    <textarea class="form-control" name="message" rows="5"></textarea>
                </div>
                <!-- 選圖片 -->
                <div class="form-group">
                    <div class="custom-file">
                        <input type="file" class="custom-file-input" name="photo">
                        <label class="custom-file-label" for="photo">Choose file</label>
                    </div>
                </div>
                <!-- 送出按鈕 -->
                <input type="submit" class="btn btn-primary" value="送出" name="create-btn">
                <a href="index.php" class="btn btn-outline-primary">取消</a>
            </form>

        </div>
    </div>
</div>

<script>
    var imgFile;
    //監控圖片框的變化(偵測使用者有沒有丟圖片)
    $("input[name=photo]").change(function(e){
        //拿到圖片
        imgFile = e.target.files[0];
        //把choose file label文字替換成檔名
        $(".custom-file-label").html(imgFile.name);
    });
</script>

</body>
</html>