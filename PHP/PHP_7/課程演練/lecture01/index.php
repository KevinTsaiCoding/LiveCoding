<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>我的網站</title>
    <link rel="stylesheet" href="./index.css">
</head>
<body>
    <table>
        <tr>
            <td>Data1</td>
            <td>Data2</td>
            <td>Data3</td>
        </tr>
        <tr>
            <td>Data1</td>
            <td>Data2</td>
            <td>Data3</td>
        </tr>
    </table>
    <table>
        <tr>
            <td colspan="3">Data1</td>
        </tr>
        <tr>
            <td>Data1</td>
            <td>Data2</td>
            <td>Data3</td>
        </tr>
    </table>
    <table>
        <tr>
            <td rowspan="2">Data1</td>
            <td>Data2</td>
            <td>Data3</td>
        </tr>
        <tr>
            <td>Data1</td>
            <td>Data2</td>
        </tr>
    </table>    
<!-- 導覽列 -->
    <nav>
    </nav>
    <header>
        <h1>My Website</h1>
        <h2>標題2</h2>
        <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Autem aut dignissimos quis est iste, perspiciatis fugit dolorem dolore iusto nam!</p>
    </header>
    <!-- ul>li*3{Data$} 再按 [tab] -->
    <ul>
        <li>Data1</li>
        <li>Data2</li>
        <li>Data3</li>
    </ul>
    <ol>
        <li>Data1</li>
        <li>Data2</li>
        <li>Data3</li>
    </ol>
    <a href="https://www.google.com" target="_blank">前往Google  </a>
    <a href="./pages/about.php">About me 蓋掉原網頁  </a>
    <a href="./pages/about.php"  target="_blank">About me 另開網頁</a>
    <br>
    <img src="https://picsum.photos/600/400/?image=23" alt="封面圖"  width="200px">
    <img src="./images/nong-vang-790582-unsplash.jpg" alt="" width="200px">
    <p>
        <label for="user-phone">電話</label>  
        <br>
        <input type="text" name="user-phone">
    </p>
    <p>
        <label for="user-email">信箱</label>  
        <input type="text" name="user-email">    
    </p>
</body>
</html>