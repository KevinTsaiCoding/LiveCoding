<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
    <link rel="stylesheet" href="./web.css">
</head>
<body>
    <form action="" method="post">
       <p>
           <label for="user-name">姓名</label>
           <input type="text" name="user-name" required placeholder="請輸入中文名字">
       </p>
       <p>
           <label for="user-tel">電話</label>
           <input type="text" name="user-tel" required placeholder="09-xxx-xxx">
       </p>       
       <p>
           <label for="user-email">信箱</label>
           <input type="email" name="user-email" required placeholder="example@gmail.com">
       </p>
       <p>
           <label for="gender">性別</label>
           <input type="radio" name="gender" value="male" checked>男性
           <input type="radio" name="gender" value="female">女性
       </p>
       <p>
           <label for="user-num">用餐人數</label>
           <input type="text" name="user-nume" required placeholder="請輸入數字">
       </p>       
       <p>
           <label for="object">聚餐目的(可複選)</label>
           <input type="checkbox" name="object" value="obj-fr">朋友聚餐
           <input type="checkbox" name="object" value="obj-home">家庭聚餐
           <input type="checkbox" name="object" value="obj-birthday">生日聚餐
       </p>
        <p>
            <label for="message">給餐廳的建議：</label>
            <br>
            <textarea name="message" cols="50" rows="10" placeholder="想說什麼.."></textarea>
        </p>
       <input type="submit" value="送出">
   </form>
</body>
</html>