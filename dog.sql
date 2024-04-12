-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 12, 2024 at 11:55 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `dogs-shelter`
--

-- --------------------------------------------------------

--
-- Table structure for table `dog`
--

CREATE TABLE `dog` (
  `id` int(11) NOT NULL,
  `name` varchar(20) NOT NULL,
  `race` varchar(20) NOT NULL,
  `gender` tinyint(4) NOT NULL,
  `birth_date` date NOT NULL,
  `weight` float NOT NULL,
  `height` float NOT NULL,
  `vaccinations` tinyint(1) DEFAULT NULL,
  `last_vet_visit` date NOT NULL,
  `image` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `dog`
--

INSERT INTO `dog` (`id`, `name`, `race`, `gender`, `birth_date`, `weight`, `height`, `vaccinations`, `last_vet_visit`, `image`) VALUES
(1, 'Rex', 'German Shepherd', 1, '2017-04-25', 12, 35, 1, '2023-04-15', 'dog-1.png'),
(2, 'Luna', 'Golden Retriever', 0, '2019-10-08', 20, 50, 1, '2023-02-28', 'dog-2.png'),
(3, 'Cooper', 'Golden Retriever', 1, '2018-01-12', 18.5, 45, 0, '2023-03-10', 'dog-3.png'),
(4, 'Molly', 'Pit Bull Terrier', 0, '2020-06-30', 28, 55, 1, '2023-01-20', 'dog-4.png'),
(5, 'Rocky', 'Beagle', 1, '2016-11-15', 35, 60, 1, '2023-05-05', 'dog-5.png'),
(6, 'Daisy', 'Pembroke Welsh Corgi', 0, '2017-09-03', 10, 25, 0, '2023-04-02', 'dog-6.png'),
(7, 'Max', 'Golden Retriever', 1, '2018-03-20', 30, 65, 1, '2023-03-15', 'dog-7.png'),
(8, 'Bella', 'Hasky', 0, '2019-07-10', 28.5, 58, 0, '2023-02-25', 'dog-8.png'),
(9, 'Bailey', 'Beagle', 1, '2017-12-05', 14, 30, 1, '2023-03-05', 'dog-9.png'),
(10, 'Lucy', 'Shih Tzu', 0, '2018-09-18', 9.5, 28, 1, '2023-04-10', 'dog-10.png'),
(11, 'Oliver', 'Shiba Inu', 1, '2019-08-12', 14, 35, 0, '2023-01-15', 'dog-11.png'),
(12, 'Chloe', 'French Bulldog', 0, '2020-02-05', 11.5, 30, 1, '2023-03-25', 'dog-12.png'),
(13, 'Jack', 'Jack Russell Terrier', 1, '2018-06-20', 10, 28, 1, '2023-04-12', 'dog-13.png'),
(14, 'Zoe', 'Cocker Spaniel', 0, '2017-03-15', 16.5, 40, 0, '2023-02-20', 'dog-14.png'),
(15, 'Harley', 'Australian Shepherd', 1, '2019-11-30', 22, 50, 1, '2023-03-30', 'dog-15.png');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `dog`
--
ALTER TABLE `dog`
  ADD UNIQUE KEY `id` (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `dog`
--
ALTER TABLE `dog`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
