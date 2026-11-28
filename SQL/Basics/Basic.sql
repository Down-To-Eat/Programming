
-- 1. Create a database if it doesn't exist
CREATE DATABASE IF NOT EXISTS practice_db;

-- 2. Select the database
USE practice_db;

-- 3. Create a table if it doesn't exist
CREATE TABLE IF NOT EXISTS students (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50),
    age INT,
    marks INT
);

-- 4. Insert records
INSERT INTO students (name, age, marks)
VALUES
('Rahul', 20, 85),
('Priya', 21, 92),
('Aman', 19, 78);

-- 5. Display all records

SELECT * FROM students;

USE practice_db;
SELECT * FROM students;