CREATE DATABASE IF NOT EXISTS college_practice;
USE college_practice;

CREATE TABLE students (
    roll_number INT PRIMARY KEY,
    student_name VARCHAR(80) NOT NULL,
    marks DECIMAL(5, 2) NOT NULL
);

INSERT INTO students (roll_number, student_name, marks)
VALUES (1, 'Asha', 82.50), (2, 'Ravi', 74.00), (3, 'Neha', 91.00);

SELECT * FROM students;