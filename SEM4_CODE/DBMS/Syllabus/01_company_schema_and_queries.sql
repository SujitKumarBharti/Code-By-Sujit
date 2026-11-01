CREATE DATABASE IF NOT EXISTS company_db;                                                                                                                                             -- Database Schema and Setup
USE company_db;

CREATE TABLE IF NOT EXISTS DEPARTMENT (
    Dno INT PRIMARY KEY,
    Dname VARCHAR(50),
    Location VARCHAR(50) DEFAULT 'New Delhi'
);

CREATE TABLE IF NOT EXISTS EMPLOYEE (
    Eno CHAR(4) PRIMARY KEY,
    Ename VARCHAR(50) NOT NULL,
    Job_Type VARCHAR(50) NOT NULL,
    Manager CHAR(4),
    Hire_Date DATE NOT NULL,
    Dno INT,
    Commission DECIMAL(10,2),
    Salary DECIMAL(7,2) NOT NULL,
    FOREIGN KEY (Dno) REFERENCES DEPARTMENT(Dno),
    FOREIGN KEY (Manager) REFERENCES EMPLOYEE(Eno)
);

INSERT INTO DEPARTMENT (Dno, Dname, Location) VALUES
(10, 'ACCOUNTING', 'NEW YORK'),
(20, 'RESEARCH', 'DALLAS'),
(30, 'SALES', 'CHICAGO'),
(40, 'OPERATIONS', 'BOSTON');

INSERT INTO EMPLOYEE (Eno, Ename, Job_Type, Manager, Hire_Date, Dno, Commission, Salary) VALUES
('7839', 'KING', 'PRESIDENT', NULL, '1981-11-17', 10, NULL, 5000.00),
('7698', 'BLAKE', 'MANAGER', '7839', '1981-05-01', 30, NULL, 2850.00),
('7782', 'CLARK', 'MANAGER', '7839', '1981-06-09', 10, NULL, 2450.00),
('7566', 'JONES', 'MANAGER', '7839', '1981-04-02', 20, NULL, 2975.00),
('7788', 'SCOTT', 'ANALYST', '7566', '1982-12-09', 20, NULL, 3000.00),
('7902', 'FORD', 'ANALYST', '7566', '1981-12-03', 20, NULL, 3000.00),
('7369', 'SMITH', 'CLERK', '7902', '1980-12-17', 20, NULL, 800.00),
('7499', 'ALLEN', 'SALESMAN', '7698', '1981-02-20', 30, 300.00, 1600.00),
('7521', 'WARD', 'SALESMAN', '7698', '1981-02-22', 30, 500.00, 1250.00),
('7654', 'MARTIN', 'SALESMAN', '7698', '1981-09-28', 30, 1400.00, 1250.00),
('7844', 'TURNER', 'SALESMAN', '7698', '1981-09-08', 30, 0.00, 1500.00),
('7876', 'ADAMS', 'CLERK', '7788', '1983-01-12', 20, NULL, 1100.00),
('7900', 'JAMES', 'CLERK', '7698', '1981-12-03', 30, NULL, 950.00),
('7934', 'MILLER', 'CLERK', '7782', '1982-01-23', 10, NULL, 1300.00);

SELECT Eno, Ename, Job_Type, Hire_Date FROM EMPLOYEE;                                                                                                                                 -- Query 01: Employee Name, Job, Hire Date, Employee Number (Number first)

SELECT DISTINCT Job_Type FROM EMPLOYEE;                                                                                                                                               -- Query 02: Unique Jobs from the Employee Table

SELECT CONCAT(Ename, ', ', Job_Type) AS Employee_Job FROM EMPLOYEE;                                                                                                                   -- Query 03: Employee Name concatenated by a Job separated by a comma

SELECT CONCAT_WS(', ', Eno, Ename, Job_Type, IFNULL(Manager, 'None'), Hire_Date, Dno, IFNULL(Commission, 0), Salary) AS THE_OUTPUT FROM EMPLOYEE;                                     -- Query 04: Separate each column by a comma named THE_OUTPUT

SELECT Ename, Salary FROM EMPLOYEE WHERE Salary > 2850;                                                                                                                               -- Query 05: Employee Name and Salary earning more than $2850

SELECT Ename, Dno FROM EMPLOYEE WHERE Eno = '7900';                                                                                                                                   -- Query 06: Employee Name and Department Number for Employee No 7900

SELECT Ename, Salary FROM EMPLOYEE WHERE Salary NOT BETWEEN 1500 AND 2850;                                                                                                            -- Query 07: Employee Name and Salary not in range of 1500 and 2850

SELECT Ename, Dno FROM EMPLOYEE WHERE Dno IN (10, 30) ORDER BY Ename ASC;                                                                                                             -- Query 08: Name and Dept No in Dept 10 and Dept 30 alphabetical order by name

SELECT Ename, Hire_Date FROM EMPLOYEE WHERE YEAR(Hire_Date) = 1981;                                                                                                                   -- Query 09: Name and Hire Date of every Employee hired in 1981

SELECT Ename, Job_Type FROM EMPLOYEE WHERE Manager IS NULL;                                                                                                                           -- Query 10: Name and Job of all employees who do not have a current Manager

SELECT Ename, Salary, Commission FROM EMPLOYEE WHERE Commission IS NOT NULL AND Commission > 0;                                                                                       -- Query 11: Name, Salary and Commission for all employees who earn commission

SELECT * FROM EMPLOYEE ORDER BY Salary DESC, Commission DESC;                                                                                                                         -- Query 12: Sort data in descending order of Salary and Commission

SELECT Ename FROM EMPLOYEE WHERE Ename LIKE '__A%';                                                                                                                                   -- Query 13: Name of all employees where the third letter of their name is 'A'

SELECT Ename FROM EMPLOYEE WHERE (Ename LIKE '%R%R%' OR Ename LIKE '%A%A%') AND (Dno = 30 OR Manager = '7788');                                                                       -- Query 14: Employees with two 'R's or two 'A's in name in Dept 30 or Manager 7788

SELECT Ename, Salary, Commission FROM EMPLOYEE WHERE Commission > (Salary * 1.05);                                                                                                    -- Query 15: Commission Amount greater than Salary increased by 5%

SELECT CURRENT_DATE() AS Today_Date;                                                                                                                                                  -- Query 16: Display Current Date

SELECT Ename, Hire_Date, DATE_ADD(DATE_ADD(Hire_Date, INTERVAL 6 MONTH), INTERVAL (7 - WEEKDAY(DATE_ADD(Hire_Date, INTERVAL 6 MONTH))) % 7 DAY) AS Salary_Review_Date FROM EMPLOYEE;  -- Query 17: Salary review date: first Monday after 6 months of hire

SELECT Ename, TIMESTAMPDIFF(MONTH, Hire_Date, CURRENT_DATE()) AS Months_Employed FROM EMPLOYEE;                                                                                       -- Query 18: Months between today and hire date

SELECT CONCAT(Ename, ' earns $', Salary, ' monthly but wants $', (Salary * 3)) AS "Dream Salary" FROM EMPLOYEE;                                                                       -- Query 19: <E-Name> earns <Salary> monthly but wants <3* Current Salary>

SELECT CONCAT(UPPER(SUBSTRING(Ename, 1, 1)), LOWER(SUBSTRING(Ename, 2))) AS Formatted_Name, LENGTH(Ename) AS Name_Length FROM EMPLOYEE WHERE Ename REGEXP '^[JAM]';                   -- Query 20: Name capitalized, length, starting with J, A, or M

SELECT Ename, Hire_Date, DAYNAME(Hire_Date) AS Start_Day FROM EMPLOYEE;                                                                                                               -- Query 21: Name, Hire Date, Day of week

SELECT E.Ename, D.Dname, E.Dno FROM EMPLOYEE E JOIN DEPARTMENT D ON E.Dno = D.Dno;                                                                                                    -- Query 22: Name, Department Name and Department No

SELECT DISTINCT Job_Type FROM EMPLOYEE WHERE Dno = 30;                                                                                                                                -- Query 23: Unique Listing of all Jobs in Department 30

SELECT E.Ename, D.Dname FROM EMPLOYEE E JOIN DEPARTMENT D ON E.Dno = D.Dno WHERE E.Ename LIKE '%A%';                                                                                  -- Query 24: Name, Dept Name of all employees who have an 'A' in name

SELECT E.Ename, E.Job_Type, E.Dno, D.Dname FROM EMPLOYEE E JOIN DEPARTMENT D ON E.Dno = D.Dno WHERE D.Location = 'DALLAS';                                                            -- Query 25: Employees working at Dallas location

SELECT E.Ename AS Employee, E.Eno, M.Ename AS Manager, M.Eno AS Manager_No FROM EMPLOYEE E LEFT JOIN EMPLOYEE M ON E.Manager = M.Eno;                                                 -- Query 26: Employee Name and Manager Name, including without manager

SELECT Ename, Dno, Salary FROM EMPLOYEE WHERE (Dno, Salary) IN (SELECT Dno, Salary FROM EMPLOYEE WHERE Commission > 0);                                                               -- Query 27: Match Dept and Salary of any employee earning commission

SELECT Ename, REPEAT('*', FLOOR(Salary / 100)) AS Salary_Asterisks FROM EMPLOYEE;                                                                                                     -- Query 28: Salaries represented by asterisks ($100 per asterisk)

SELECT MAX(Salary) AS Max_Salary, MIN(Salary) AS Min_Salary, SUM(Salary) AS Total_Salary, AVG(Salary) AS Avg_Salary FROM EMPLOYEE;                                                    -- Query 29: Highest, Lowest, Sum and Average Salaries

SELECT Job_Type, COUNT(*) AS Employee_Count FROM EMPLOYEE GROUP BY Job_Type;                                                                                                          -- Query 30: Count employees performing the same Job type

SELECT COUNT(DISTINCT Manager) AS Total_Managers FROM EMPLOYEE WHERE Manager IS NOT NULL;                                                                                             -- Query 31: Number of managers without listing names

SELECT D.Dname, D.Location, COUNT(E.Eno) AS Employee_Count, AVG(E.Salary) AS Avg_Salary FROM DEPARTMENT D LEFT JOIN EMPLOYEE E ON D.Dno = E.Dno GROUP BY D.Dname, D.Location;         -- Query 32: Dept Name, Location, No of Employees and Avg Salary

SELECT Ename, Hire_Date FROM EMPLOYEE WHERE Dno = (SELECT Dno FROM EMPLOYEE WHERE Ename = 'BLAKE') AND Ename != 'BLAKE';                                                              -- Query 33: Employees in same dept as Blake

SELECT Eno, Ename, Salary FROM EMPLOYEE WHERE Salary > (SELECT AVG(Salary) FROM EMPLOYEE);                                                                                            -- Query 34: Employees earning more than average salary

SELECT Eno, Ename, Dno FROM EMPLOYEE WHERE Dno IN (SELECT DISTINCT Dno FROM EMPLOYEE WHERE Ename LIKE '%T%');                                                                         -- Query 35: Employees in department with any employee having 'T' in name

SELECT Ename, Salary FROM EMPLOYEE WHERE Manager = (SELECT Eno FROM EMPLOYEE WHERE Ename = 'KING');                                                                                   -- Query 36: Name and salaries of employees who report to King

SELECT E.Dno, E.Ename, E.Job_Type FROM EMPLOYEE E JOIN DEPARTMENT D ON E.Dno = D.Dno WHERE D.Dname = 'SALES';                                                                         -- Query 37: Department no, name and job for all employees in Sales
