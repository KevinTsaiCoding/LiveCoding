-- --------------------------------------------------------
-- 主機:                           127.0.0.1
-- 伺服器版本:                        10.1.33-MariaDB - mariadb.org binary distribution
-- 伺服器操作系統:                      Win32
-- HeidiSQL 版本:                  9.5.0.5196
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


-- 傾印 bookstore 的資料庫結構
DROP DATABASE IF EXISTS `bookstore`;
CREATE DATABASE IF NOT EXISTS `bookstore` /*!40100 DEFAULT CHARACTER SET utf8 COLLATE utf8_unicode_ci */;
USE `bookstore`;

-- 傾印  表格 bookstore.books 結構
DROP TABLE IF EXISTS `books`;
CREATE TABLE IF NOT EXISTS `books` (
  `id` varchar(50) COLLATE utf8_unicode_ci NOT NULL,
  `name` varchar(50) COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `img` varchar(100) COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `author` varchar(50) COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `price` int(20) NOT NULL DEFAULT '0',
  `count` int(20) NOT NULL DEFAULT '0',
  `category` varchar(50) COLLATE utf8_unicode_ci NOT NULL,
  `publication_date` date NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- 正在傾印表格  bookstore.books 的資料：~10 rows (大約)
/*!40000 ALTER TABLE `books` DISABLE KEYS */;
INSERT INTO `books` (`id`, `name`, `img`, `author`, `price`, `count`, `category`, `publication_date`) VALUES
	('A1', '月球城市', 'book_A1.jpg', '安迪．威爾', 420, 5, '文學小說', '2018-03-30'),
	('A4', '解憂雜貨店', 'book_A4.jpg', '東野圭吾', 330, 10, '推理小說', '2017-09-18'),
	('A5', '行李箱裡的一萬顆星星', 'book_A5.jpg', '蘿賓．洛', 340, 10, '文學小說', '2018-04-06'),
	('A8', '挪威的森林', 'book_A8.jpg', '村上春樹', 299, 10, '文學小說', '2017-12-12'),
	('A9', '一級玩家', 'book_A9.jpg', '恩斯特．克萊恩', 399, 10, '科幻小說', '2018-03-29'),
	('B2', '五味屋的生活練習曲：用態度換夢想的二手商店', 'book_B2.jpg', '張瀞文', 399, 10, '親子教養', '2018-06-05'),
	('C3', '被討厭的勇氣', 'book_C3.jpg', '岸見一郎', 300, 2, '心理勵志', '2014-10-30'),
	('C7', '你今天廢話了嗎？', 'book_C7.jpg', '苦苓', 320, 30, '心理勵志', '2018-02-19'),
	('D6', '會說故事的巧實力！', 'book_D6.jpg', '張宏裕', 280, 15, '商業理財', '2018-03-13'),
	('E5', '跟著阿滴滴妹說出溜英文', 'book_E5.jpg', '阿滴&滴妹', 350, 20, '語言學習', '2018-07-04');
/*!40000 ALTER TABLE `books` ENABLE KEYS */;

-- 傾印  表格 bookstore.booksales 結構
DROP TABLE IF EXISTS `booksales`;
CREATE TABLE IF NOT EXISTS `booksales` (
  `book_id` varchar(50) COLLATE utf8_unicode_ci NOT NULL,
  `book_name` varchar(50) COLLATE utf8_unicode_ci NOT NULL,
  `count` bigint(21) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- 正在傾印表格  bookstore.booksales 的資料：~9 rows (大約)
/*!40000 ALTER TABLE `booksales` DISABLE KEYS */;
INSERT INTO `booksales` (`book_id`, `book_name`, `count`) VALUES
	('A1', '月球城市', 1),
	('A4', '解憂雜貨店', 3),
	('A5', '行李箱裡的一萬顆星星', 1),
	('A8', '挪威的森林', 1),
	('A9', '一級玩家', 1),
	('B2', '五味屋的生活練習曲：用態度換夢想的二手商店', 2),
	('C7', '你今天廢話了嗎？', 1),
	('D6', '會說故事的巧實力！', 2),
	('E5', '跟著阿滴滴妹說出溜英文', 1);
/*!40000 ALTER TABLE `booksales` ENABLE KEYS */;

-- 傾印  表格 bookstore.customers 結構
DROP TABLE IF EXISTS `customers`;
CREATE TABLE IF NOT EXISTS `customers` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(50) COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `email` varchar(50) COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `gender` varchar(10) COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- 正在傾印表格  bookstore.customers 的資料：~8 rows (大約)
/*!40000 ALTER TABLE `customers` DISABLE KEYS */;
INSERT INTO `customers` (`id`, `name`, `email`, `gender`) VALUES
	(1, 'Harry Potter', 'harry@gmail.com', 'male'),
	(2, 'Black Widow', 'black@gmail.com', 'female'),
	(3, 'Deadpool', 'deadpool@gmail.com', 'male'),
	(4, 'Doctor Strange', 'ds@hotmail.com', 'male'),
	(5, 'Hawkeye', 'eye@gmail.com', 'male'),
	(6, 'Hulk', 'hulk@gmail.com', 'male'),
	(7, '	Crystal', '	crystal@hotmail.com', 'female'),
	(8, 'Iron Man', 'iron@hotmail.com', 'male'),
	(9, 'Sentry', 'sentry@gmail.com', 'male'),
	(10, 'Thor', 'thor@gmail.com', 'male');
/*!40000 ALTER TABLE `customers` ENABLE KEYS */;

-- 傾印  表格 bookstore.orders 結構
DROP TABLE IF EXISTS `orders`;
CREATE TABLE IF NOT EXISTS `orders` (
  `order_id` int(11) NOT NULL AUTO_INCREMENT,
  `order_date` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `book_id` varchar(50) COLLATE utf8_unicode_ci NOT NULL,
  `customer_id` int(11) NOT NULL,
  PRIMARY KEY (`order_id`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- 正在傾印表格  bookstore.orders 的資料：~13 rows (大約)
/*!40000 ALTER TABLE `orders` DISABLE KEYS */;
INSERT INTO `orders` (`order_id`, `order_date`, `book_id`, `customer_id`) VALUES
	(1, '2018-06-19 23:40:49', 'A9', 8),
	(2, '2018-07-11 01:31:09', 'B2', 9),
	(3, '2018-03-19 11:21:26', 'C7', 6),
	(4, '2018-03-19 07:31:33', 'A8', 5),
	(5, '2018-05-23 17:29:57', 'D6', 7),
	(6, '2018-07-08 16:22:08', 'A1', 4),
	(7, '2018-05-04 18:32:21', 'A5', 3),
	(8, '2018-04-05 15:31:40', 'D6', 2),
	(9, '2018-06-07 13:45:52', 'B2', 7),
	(10, '2018-07-17 11:43:11', 'A4', 1),
	(11, '2018-07-10 21:43:22', 'A4', 10),
	(12, '2018-07-19 21:43:36', 'E5', 10),
	(13, '2018-07-19 23:31:59', 'A4', 3);
/*!40000 ALTER TABLE `orders` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
