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
    <div id="box">box</div>
    <a href="#test">我是連結</a>
    <h1 class="title" id="main-title">Title1</h1>
    <h2 class="title">Title2</h2>
    <h3 class="title">Title3</h3>  
    <h4 class="title1">Title4</h4>      
   <form action="" method="post">
       <p>
           <label for="user-name">姓名：</label>
           <input type="text" name="user-name" required placeholder="請輸入中文名字">
       </p>
       <p>
           <label for="user-email">信箱</label>
           <input type="email" name="user-email" required>
       </p>
       <p>
           <label for="password">密碼</label>
           <input type="password" name="password" required>
       </p>
       <p>
           <label for="gender">性別</label>
           <input type="radio" name="gender" value="male" checked>男性
           <input type="radio" name="gender" value="female">女性
       </p>
       <p>
           <label for="food">想吃什麼</label>
           <input type="checkbox" name="food" value="sushi">壽司
           <input type="checkbox" name="food" value="hotpot">火鍋
           <input type="checkbox" name="food" value="bbq">燒烤
           <input type="checkbox" name="food" value="pizza">披薩
       </p>
        <p>

            <select name="sport" multiple>
                <option value="" disabled selected>--請選擇一項運動--</option>
                <option value="volleyball">排球</option>
                <option value="basketball">籃球</option>
                <option value="baseball"">棒球</option>
            </select>
        </p>
        <p>
            <label for="message">留言</label>
            <br>
            <textarea name="message" cols="50" rows="10" placeholder="想說什麼.."></textarea>
        </p>
       <input type="submit" value="送出">
   </form>

    <h3 id="test">囚犯賽局</h3>
    <table>
        <tr>
            <td colspan="2" rowspan="2">囚犯賽局</td>
            <td colspan="2">犯人A</td>
        </tr>
        <tr>
            <td>招供</td>
            <td>不招</td>
        </tr>
        <tr>
            <td rowspan="2">犯人B</td>
            <td>招供</td>
            <td>各5年</td>
            <td>A:10年;B:1年</td>
        </tr>
        <tr>
            <td>不招</td>
            <td>A:1年;B:10年</td>
            <td>各3年</td>
        </tr>
    </table>
</body>
</html>