--12-12-2023 
-- Create database 
-- Syntax:	CREATE DATABASE databasename
	CREATE DATABASE BugStopHere_Lecture 


--> Open Database
--> Synatx:   USE databasename
	USE BugStopHere_Lecture

--> Create new table
---> syntax:
 /*
 CREATE TABLE tablename
 (
	coulnname1 datatype,
	coulnname2 datatype
 )
 */

 CREATE TABLE Students
 (
	Studentid int,
	Firstname nvarchar(50), 
	Lastname nvarchar(50),
	Gender nvarchar(50),
	Mobileno nvarchar(50),
	emailid nvarchar(50),
	City nvarchar(50),
	Fees int
 )

 --->Return all the columns from the table
 --> Synatx:   SELECT * FROM tablename

 SELECT * FROM Students

 -->insert record into table
 -->Syntax:   INSERT INTO tablename VALUES(coulomname1value,col2 value,col3 valu....)

 INSERT INTO Students  VALUES(1,'Gopi','Singh','M','564646541','abc@gmail.com','Mumbai',250000)
 INSERT INTO Students  VALUES(2,'Ratan','Singh','M','979454651','ratan@gmail.com','UP',30000)
 INSERT INTO Students  VALUES(3,'Akash','Bhardwaj','M','9794321','Akash@gmail.com','Delhi',265461)
 INSERT INTO Students  VALUES(4,'Ratan','Yadav','M','713541321','ratanY@gmail.com','UP',35000)

 INSERT INTO Students  VALUES(5,'Pravin','Ptam','M','4354','abc@gmail.com','Mumbai',450000)
 INSERT INTO Students  VALUES(6,'Manish','V','M','3534','ratan@gmail.com','UP',47000)
 INSERT INTO Students  VALUES(7,'Vinay','G','M','3534','Akash@gmail.com','Delhi',2765461)
 INSERT INTO Students  VALUES(8,'Akhilesh','v','M','3453','ratanY@gmail.com','UP',355600)

 INSERT INTO Students  VALUES(9,'Divya','v','F','23123132','Divya@gmail.com','Bang',97964564)
 INSERT INTO Students  VALUES(10,'Ragini','v','F','797979','Ragini@gmail.com','Pune',546765)

 -->Retrun Specific columns from the table
 --> Synatx:   SELECT columnname,col... FROM tablename
 SELECT Firstname From Students


 -->Return different/distinct values
 --> Syntax: SELECT DISTINCT columnname FROM tablename
 select  city from Students
 select distinct city from Students

 select distinct Lastname from Students

  --> Return the conditinal value from table(WHERE)
  --Synatx: SELECT * FROM tablename WHERE columnname condition value 

  select * from Students where Fees > 45000
  select * from Students where Gender ='F'
  select * from Students where Gender ='M'
  select * from Students where Firstname ='Akash'

 -->return the all data order by columns name
 --> SELECT * FROM tablename ORDER BY columnname asc/desc
  select * from Students order by fees asc
  select * from Students order by fees desc

---------------------------------------------------------------
--13-12-2023 
--AND , OR
--- AND -> both condition should true
--- OR -> any one true

select * from Students where Fees > 45000   
select * from Students where Fees > 45000  AND City='UP'
select * from Students where Fees > 45000  OR City='UP'
select * from Students where Fees > 45000  AND (City='UP' OR City='Mumbai')


select * from Students where Fees >= 47000 AND Fees<100000  AND (City='UP' OR City='Mumbai')


--BETWEEN
select * from Students where Fees between 45000 and 100000  AND (City='UP' OR City='Mumbai')

select * from Students where city='UP' OR city='Mumbai'
select * from Students where city in('UP','Mumbai','Delhi')

select * from Students where Firstname='Go'
select * from Students where Firstname like 'a%'  --starting from a
select * from Students where Firstname like '%ta%'  -- contain anywhere
select * from Students where Firstname like '_a%'  -- omit first character start a
select * from Students where Firstname like '__t%'  -- omit first character start a


select * from Students where Mobileno like  '%9454%'
select * from Students where Mobileno like  '97%'
select * from Students where Mobileno like  '%21'
select * from Students where Mobileno like  '%32_'

select * from Students where Firstname like '__a%' 
 
select Studentid,Firstname,Gender,Fees from Students
---------------------------------------------------
/*Date: 18/12/2023 Time: 9:00PM IST :- Day 4- SQL Lecture

INSERT INTO
Null Value
IS NULL
Update
Delete
*/

select * from Students
--INSERT INTO

-- all data provided
INSERT INTO Students  VALUES(11,'TEst','v','M','3453','ratanY@gmail.com','UP',355600)

--part of data insert
INSERT INTO Students(Studentid,Firstname,Lastname,Mobileno)  VALUES(12,'Rajes','v','3453')
INSERT INTO Students(Studentid,Firstname,Lastname,Gender,Mobileno)  VALUES(13,'Rajes','v','','3453')

select * from Students where Gender=''
select * from Students where Gender IS NULL
select * from Students where CITY IS NULL

  -- multi insert
   INSERT INTO Students  VALUES
   (15,'Ragini','v','F','797979','Ragini@gmail.com','Pune',546765),
   (16,'Ragini','v','F','797979','Ragini@gmail.com','Pune',546765),
   (17,'Ragini','v','F','797979','Ragini@gmail.com','Pune',546765)

------------
select * from Students
--> UPDATE
--Synatx:    -- UPDATE tablename SET col1=value ,col2=value
			 -- UPDATE tablename SET col1=value ,col2=value  where col=condvalue


			 UPDATE Students SET Gender=''
			 UPDATE Students SET Gender='M' where Firstname='Gopi'
			 UPDATE Students SET Gender='M' where Studentid=5

--> DELETE
--> Syntax   DELETE FROM TAble where col=value
		DELETE FROM Students where fees=546765
		DELETE FROM Students where  fees is null

 
 -----------------------------------------------------------
/*
Date: 19/12/2023 
Time: 9:00PM IST
Day 5- SQL Lecture

- Column Alias Name
- SELECT TOP   
- Aggregate function  (min,max,avg,sum)
- GROUP BY
- HAVING
*/
-- Column Alias Name
select Firstname from Students
First Name 
Student First Name

select firstname as 'First Name' from Students
select firstname as 'Student First Name' from Students

select firstname as 'Student First Name', Lastname  'kjhk hkjh' from Students
select * from Students

--- SELECT TOP 
select * from Students
select top 5 * from Students
select top 10 * from Students
select top 10 percent * from Students

select * from Students order by studentid desc
select top 5 * from Students order by studentid desc

-- aggregate function
select * from Students
select min(fees) 'Minimum fees' from Students
select max(fees) 'Maximum Fees' from Students
select avg(fees) 'AVG Fees' from Students
select sum(fees) 'sum Fees' from Students

select * from Students

select mobileno,min(fees) 'Minimum fees' from Students group by mobileno
select City,min(fees) 'Minimum fees' from Students group by City
select City,Max(fees) 'maximum fees' from Students group by City

select City,sum(fees) 'sum fees' from Students group by City

select City,sum(fees) 'sum fees' 
from Students where fees >35000
group by City
Having sum(fees)>800000
--------

select  sum(fees) 'sum fees' 
from Students where fees >35000
Having sum(fees)>800000


-------------------------------
/*
Date: 20/12/2023 
Time: 9:00PM IST
Day 6- SQL Lecture

All About Constraint
- Primary Key Constraint
- Foreign Key  Constraint
- Unique Constraint
- Check Constraint
- Default Constraint
*/



Create table Emp
(
id int,
name nvarchar(50),
salary decimal
)

Create table Emp
(
id int primary key,
name nvarchar(50),
salary decimal
)

select * from emp

insert into emp values(1,'Gopi',50000)
insert into emp values(2,'Akash',70000)
insert into emp values(1,'Ratan',70000)
insert into emp(name,salary) values('Akhilesh',70000)

--drop table emp 
 drop table manager
create table Manager
(
	mid int primary key,
	mname nvarchar(50),
	pancard nvarchar(50) Unique,
	--AdharCard nvarchar(50) Unique,
	salary decimal check (Salary>=5000),
	Gender nvarchar(50) check(Gender in('Male','Female')),
	CreateDate datetime default getdate(),
)

insert into Manager(mid,mname,pancard,salary,gender) values(5,'Ratan','AEQEO5422EE',214132,'Male')
insert into Manager values(2,'Akash','AEQE15452EE',215312,'Male')
insert into Manager values(3,'Gopi','ASQE15452EE',215312,'Female')
insert into Manager(mid,mname,pancard,salary) values(4,'Rajesh','sdkjfhkjdsfhj',5000)

update Manager
set Gender='Male'
where mid=4

drop table Manager
select * from Manager


select getdate()

---

create table test1
(
	id int identity(1,1),
	name varchar(50)
)

select * from test1
insert into test1(name) values('Gopi')
insert into test1(name) values('Akash')
insert into test1(name) values('Ratan')


---------------------------------------------
/*
Date: 25/12/2023 
Time: 9:00PM IST
🔥Day 7- SQL Lecture🔥

 
- Primary Key
- Foreign Key
- Relationship between primary key and foreign key
 
 
*/

create table tbl1
(
id int primary key,
name nvarchar(50)
)

insert into tbl1 values(1,'Ratan')
insert into tbl1 values(2,'Ali')
insert into tbl1 values(3,'Gopi')
select * from tbl1
select * from tbl2


create table tbl2
(
id int foreign key references tbl1(id),
salary decimal
)
insert into tbl2 values(1,50000)
insert into tbl2 values(2,60000)
insert into tbl2 values(3,40000)

drop table tbl2

delete from tbl1 where id=2
delete from tbl2 where id=2

------------------------
create table student
(
	sid int primary key identity(1,1),
	name varchar(50),
	age int check (age >16),
	gender varchar(20) check (gender in('M','F')),
	ContactNo varchar(20),
	Createddate datetime default getdate()
)

create table Courses
(
courseid int identity,
Sid int foreign key references student(sid),
Coursename varchar(50),
Createddate datetime default getdate()
)

insert into student (name,age,gender,ContactNo)values('Ali',25,'M','23165455415')
insert into student (name,age,gender,ContactNo)values('Akash',17,'M','974213659')
 
insert into Courses(sid,Coursename) values(1,'C')
insert into Courses(sid,Coursename) values(1,'C++')
insert into Courses(sid,Coursename) values(1,'Html')
insert into Courses(sid,Coursename) values(1,'Css')
insert into Courses(sid,Coursename) values(1,'SQL')

insert into Courses(sid,Coursename) values(4,'C')
insert into Courses(sid,Coursename) values(4,'C++')
insert into Courses(sid,Coursename) values(4,'Html')
insert into Courses(sid,Coursename) values(4,'Css')
insert into Courses(sid,Coursename) values(4,'SQL')


insert into Courses(sid,Coursename) values(null,'C')

select * from student
select * from Courses
	
insert into student  values(1,'Ratan','C')
insert into student  values(1,'Ratan','C++')
insert into student  values(1,'Ratan','html')
insert into student  values(1,'Ratan','css')
insert into student  values(1,'Ratan','SQL')
delete from student where sid=4
drop table student
-------------------------------------
/*
Date: 26/12/2023 
Time: 9:00PM IST
🔥Day 8- SQL Lecture🔥

All about Joins
- inner join
- left join
- right join
- full join
- cross join
- self join
*/


select * from student
select * from Courses

select * from Student join Courses on Student.sid=Courses.Sid

create table Table1
(
id int,
name varchar(50)
)

create table Table2
(
id int,
salary decimal
)


select * from Table1
select * from Table2
 
--insert into Table1 values(1,'A'),(2,'B'),(3,'C'),(4,'D'),(5,'E')
--insert into Table2 values(1,100),(2,200),(3,300),(5,500),(6,600)

select * from Table1
select * from Table2

select * from Table1 t1 join Table2 t2 on t1.id=t2.id
select * from Table1 Left join Table2 on Table1.id=Table2.id
select * from Table1 right join Table2 on Table1.id=Table2.id
select * from Table1 full join Table2 on Table1.id=Table2.id
select * from Table1 cross join Table2


select t1.id,name,salary from Table1 t1 join Table2 t2 on t1.id=t2.id
 
 select * from Employee

 select e.id,e.name,e.salary,m.managerid,m.name 
 from Employee m join Employee e 
 on m.id=e.managerid


 ---UNION
 -- column type , name same 
 
select id from Table1
 union all
select id from Table2
----
/*table1, table2, table3
city, city ,city

Mumbai, Delhi, Jaipur
*/


create table un1
(
 city nvarchar(50)
)


create table un2
(
 city nvarchar(50)
)


create table un3
(
 city nvarchar(50)
)


select * from un1
select * from un2
select * from un3
insert into un1 values('Mumbai'),('Delhi'),('Jaipur')
insert into un2 values('Mumbai'),('Delhi'),('Jaipur'),('Varanasi')
insert into un3 values('Mumbai'),('Delhi'),('Jaipur'),('Jaunpur')

select * from un1
union
select * from un2
union
select * from un3

-----------
select * into std1 from student

select * from student
select * from std1
select * from std2
select * from std3


select sid,name,age into std2 from student
select sid,name,age into std3 from student where age>20


insert into std3(name,age) values('test',12)
insert into std3(name,age) select name,age from student

/*
Date: 02/01/2024 
Time: 9:00PM IST
🔥Day 10- SQL Lecture🔥
------------------------------
SQL VIEW
- Create View
- Update View
- Drop View
- Rename View
*/

Create view  vwemp as select * from Employee
select * from vwemp

insert into Employee(id,name,salary,managerid) values(8,'Bharat',2500.235,4)
select * from employee
Create view  vwempdetails as select id,name,managerid from Employee
select * from vwempdetails
-------------------------


create table customer
(
id int identity(1,1),
name varchar(100),
Balance decimal,
branch varchar(50),
ReisterDate datetime default getdate()

)


select * from customer
insert into customer(name,Balance,branch) values
('Gopi',250000,'Varansi'),
('Bharat',300000,'Mumbai'),
('Ratan',250000,'Varansi'),
('Aakash',150000,'Delhi'),
('Akhilesh',250000,'Azamgahh')



create view Manager1 as select * from customer where branch in('Mumbai','Delhi')
create view Manager2 as select * from customer where branch in('Varansi','Azamgahh')


select * from Manager1
select * from Manager3

alter view Manager2 as select * from customer where branch in('Varansi','Azamgahh','delhi')
alter view Manager2 as select * from customer where branch in('delhi')

drop view Manager2

sp_rename 'Manager2' ,'Manager3'


-----------
create view combinedata as
select t1.id,t1.name,t2.salary from Table1 t1 join Table2 t2 on t1.id=t2.id
 

 select * from combinedata
 ------------------------

 create table tblEmployee(
 EmployeeID int identity,
 FirstName varchar(50),
 LastName varchar(50),
 Department varchar(50),
 Salary decimal
 )


 insert into tblEmployee(FirstName,LastName,Department,Salary) 
 values('John','Doe','Sales',60000),
 ('Jane','Smith','HR',55000),
 ('Alice','Johnson','Sales',62000),
 ('Bob','Brown','IT',70000),
 ('Emily','Davis','Marketing',60000)

--1. Retrieve all columns for all employees.
  select * from tblEmployee

--2. Select the first names of employees working in the Sales department.
 select firstname from tblEmployee where Department='Sales'

--3. List the employees who earn a salary greater than $55,000.
select * from tblEmployee where Salary>55000

--4. Display the total number of employees in each department.
 select   count(1) from tblEmployee  
 select Department, count(1) 'Total Number of Employee' from tblEmployee group by Department

--5. Find the highest salary among all employees.
select max(salary) from tblEmployee
select * from tblEmployee where Salary in(select max(salary) from tblEmployee)

--6. Get the average salary of employees.
select avg(salary) 'Average salary' from tblEmployee

--7. Show the employees sorted by their salary in descending order.
select * from tblEmployee order by Salary desc
select * from tblEmployee order by EmployeeID desc

--8. Count the number of distinct departments in the table.
select  count(distinct department) from tblEmployee
select distinct department from tblEmployee

--9. Retrieve the top 3 highest-earning employees.
select top 3 * from tblEmployee order by Salary desc


--10. Find the second-highest salary in the table.
 select max(Salary) from tblEmployee
 where Salary <(select max(salary) from tblEmployee)

 --------------------------------
 /*
 Date: 04/01/2024 
Time: 9:00PM IST
🔥Day 11- SQL Lecture🔥
------------------------------
All commands about database

- CREATE DATABASE : Creates a new database.
  ex: CREATE DATABASE database_name;
   

- USE: Switches to a specific database.
  ex: USE database_name;
   
 
- DROP DATABASE: Deletes an existing database.
  ex: DROP DATABASE database_name;
   

- ALTER DATABASE: chaning the database properties
	 Change Database Name:
		SSMS: Right-click on the database -> Select "Rename" -> Provide new name.
		T-SQL: ALTER DATABASE Bugstophere MODIFY NAME = Bugstophere1;
 
 
8. EXEC sp_helpdb: Shows information about all databases.
	ex:
	EXEC sp_helpdb;
	EXEC sp_helpdb dbname;
  

9. EXEC sp_helpfile: Provides information about database files.
   ex: EXEC sp_helpfile;     
 
 */
 


 create database Test

 use Test

 drop database test

 ALter database TEst123 modify Name=TESTabc

 exec sp_helpdb
 exec sp_helpdb BugStopHere_Lecture

 EXEC sp_helpfile
---------------------------------------------------


-- How to declare a variable
-- syntax: declare @varibalename datatype

declare @i int=20
declare @j int 
declare @total int
set @i=10
set @j=20

set @total=@i+@j
select @i,@j,@total

------------------------

select * from Employee

select len('Ratan')
select id,name, len(name) 'length of name' from Employee

select charindex('a','Ratan - Happy Birthday')
select charindex('a','Ratan - Happy Birthday',5)

select id,name,CHARINDEX('a',name) from Employee

select left('Bugstophere',5)
select right('Bugstophere',5)

select id,name,left(name,3) from Employee
select id,name,left(name,3)+'...' from Employee

select first_name+last_name from employees
select CONCAT('Hi ',first_name,' >> ',last_name) as 'Full Name' from employees

select SUBSTRING('Akash',2,2)
select name, SUBSTRING(name,2,3) from Employee

select replace('Replaces occurrences of a substring within a string','string','test')

select name,REPLACE(name,'a','b') from Employee

select name,upper(name),lower(name) from Employee

select ltrim('    test    ')


select len(ltrim('    test  msmms   '))
select ltrim(rtrim('   test   '))
 -------------------------------------------------------


 --Nuumber function

 select abs(10)
 select abs(-10)

 select ROUND(2.32616,2)
  select ROUND(2.32616,3)
   select ROUND(2.32616,4)
    select ROUND(2.32616,0)


select CEILING(2.0)
select CEILING(2.1)
select CEILING(2.2)
select CEILING(2.5)
select CEILING(2.9)


select floor(2.0)
select floor(2.1)
select floor(2.2)
select floor(2.5)
select floor(2.9)

select power(2,2)

select power(2,3)

select power(10,3)

select sqrt(25)

select sqrt(100)

select RAND()


select id,name,salary,sqrt(salary) from Employee
select sum(salary),avg(salary),min(salary),max(salary),count(salary) from employee

-----------------------------------------

--Date and Time Functions:

select getdate()

select * from Manager

select DATEADD(MM,2,GETDATE())
select DATEADD(DD,2,GETDATE())
select DATEADD(YY,2,GETDATE())

select DATEADD(MM,-2,GETDATE())
select DATEADD(DD,-2,GETDATE())
select DATEADD(YY,-2,GETDATE())

select mname,CreateDate, dateadd(yy,10,CreateDate) from Manager

select mname,CreateDate, datediff(yy,CreateDate,getdate()) from Manager 
/*
Date: 10/01/2024 
Time: 9:00PM IST
🔥Day 15- SQL Lecture🔥
------------------------------
SQL Function

===>> Date and Time Functions:
SYSDATETIME – returns the date and time of the machine the SQL Server is running on
SYSDATETIMEOFFSET – returns the date and time of the machine the SQL Server is running on 
plus the offset from UTC
SYSUTCDATETIME - returns the date and time of the machine the SQL Server is running on as UTC
-- higher precision functions 
*/
SELECT SYSDATETIME()       AS 'DateAndTime';        -- return datetime2(7)       
SELECT SYSDATETIMEOFFSET() AS 'DateAndTime+Offset'; -- datetimeoffset(7)
SELECT SYSUTCDATETIME()    AS 'DateAndTimeInUtc';   -- returns datetime2(7)
---------------------------------------------------------------------------------

--CURRENT_TIMESTAMP - returns the date and time of the machine the SQL Server is running on
--GETDATE() - returns the date and time of the machine the SQL Server is running on
---GETUTCDATE() - returns the date and time of the machine the SQL Server is running on as UTC

-- lesser precision functions - returns datetime
SELECT CURRENT_TIMESTAMP AS 'DateAndTime'; -- note: no parentheses   
SELECT GETDATE()         AS 'DateAndTime';    
SELECT GETUTCDATE()      AS 'DateAndTimeUtc'; 
---------------------------------------------------------------------------------

--DATENAME – Returns a string corresponding to the datepart specified for the given date 

-- date and time parts - returns nvarchar 
SELECT DATENAME(YEAR, GETDATE())        AS 'Year';        
SELECT DATENAME(QUARTER, GETDATE())     AS 'Quarter';     
SELECT DATENAME(MONTH, GETDATE())       AS 'Month Name';       
SELECT DATENAME(DAYOFYEAR, GETDATE())   AS 'DayOfYear';   
SELECT DATENAME(DAY, GETDATE())         AS 'Day';         
SELECT DATENAME(WEEK, GETDATE())        AS 'Week';        
SELECT DATENAME(WEEKDAY, GETDATE())     AS 'Day of the Week';     
SELECT DATENAME(HOUR, GETDATE())        AS 'Hour';        
SELECT DATENAME(MINUTE, GETDATE())      AS 'Minute';      
SELECT DATENAME(SECOND, GETDATE())      AS 'Second';      
SELECT DATENAME(MILLISECOND, GETDATE()) AS 'MilliSecond'; 
SELECT DATENAME(MICROSECOND, GETDATE()) AS 'MicroSecond'; 
SELECT DATENAME(NANOSECOND, GETDATE())  AS 'NanoSecond';  
SELECT DATENAME(ISO_WEEK, GETDATE())    AS 'Week';      
-------------------------------------------------------------------

--DATEPART – returns an integer corresponding to the datepart specified

-- date and time parts - returns int
SELECT DATEPART(YEAR, GETDATE())        AS 'Year';        
SELECT DATEPART(QUARTER, GETDATE())     AS 'Quarter';     
SELECT DATEPART(MONTH, GETDATE())       AS 'Month';       
SELECT DATEPART(DAYOFYEAR, GETDATE())   AS 'DayOfYear';   
SELECT DATEPART(DAY, GETDATE())         AS 'Day';         
SELECT DATEPART(WEEK, GETDATE())        AS 'Week';        
SELECT DATEPART(WEEKDAY, GETDATE())     AS 'WeekDay';     
SELECT DATEPART(HOUR, GETDATE())        AS 'Hour';        
SELECT DATEPART(MINUTE, GETDATE())      AS 'Minute';      
SELECT DATEPART(SECOND, GETDATE())      AS 'Second';      
SELECT DATEPART(MILLISECOND, GETDATE()) AS 'MilliSecond'; 
SELECT DATEPART(MICROSECOND, GETDATE()) AS 'MicroSecond'; 
SELECT DATEPART(NANOSECOND, GETDATE())  AS 'NanoSecond';  
SELECT DATEPART(ISO_WEEK, GETDATE())    AS 'Week';   

-------------------------------------------------------------------
--DAY – returns an integer corresponding to the day specified
--MONTH– returns an integer corresponding to the month specified
--YEAR– returns an integer corresponding to the year specified

SELECT DAY(GETDATE())   AS 'Day';                            
SELECT MONTH(GETDATE()) AS 'Month';                       
SELECT YEAR(GETDATE())  AS 'Year';

select * from Manager
select month(CreateDate) from manager
-------------------------------------------------------------------
--DATEDIFF - returns the number of date or time datepart boundaries crossed between 
--specified dates as an int
SELECT DATEDIFF(Second, 2019-31-01, 2019-01-01)      AS 'DateDif'    -- returns int

--------------------------------------------------------------------
--CAST / CONVERT: Converts a value from one data type to another.
	SELECT CAST('2024-01-09' AS DATE) AS ConvertedDate;
	SELECT CONVERT(VARCHAR(20), GETDATE(), 100) AS ConvertedDateTime;
	SELECT CONVERT(VARCHAR(20), GETDATE(), 101) AS ConvertedDateTime;
	SELECT CONVERT(VARCHAR(20), GETDATE(), 102) AS ConvertedDateTime;
	SELECT CONVERT(VARCHAR(20), GETDATE(), 103) AS ConvertedDateTime;

--PARSE: Converts a string to a specified data type.
	SELECT PARSE('2024-01-09' AS DATE) AS ParsedDate;


/*
===>> System Functions:
1. @@ROWCOUNT: Returns the number of rows affected by the last statement.
2. @@IDENTITY / SCOPE_IDENTITY: Returns the last identity value generated in a table.
 */


 

create table test2
(
id int
)
 
 insert into test2 values(1),(1),(1)
 select @@rowcount


 select * from test2

 delete from test2
 select @@rowcount


 create table test3
(
id int identity,
name nvarchar(50)
)


insert into test3(name) values('a')
select @@IDENTITY
select * from test3
-------------------------------------------------------
/*
23-Jan-2024
Time:9PM IST
TOPIC: Variable and Store Procedure
*/

int =10
char a,b,c

--Syntax Declare @name int

declare @a int=10
declare @b int=20
declare @c int

set @c =@a+@b

select @c

select @c=salary from Employee where id=1

select @c
----------------------------------


select * from sys.tables
select * from sys.databases
select * from sys.procedures
 
select * from employees where department='HR'
select * from employees where department='IT'
select * from employees where department='Finance'

create procedure pr_allEmployee
as
begin
	select * from Employee
end

create procedure pr_allEmployeeManager
as
begin
	select * from Employee
	select * from manager
end

exec pr_allEmployee
exec pr_allEmployeeManager
--------------------------------
alter procedure pr_allEmployee
@id int=null
as
begin
	if @id is null
	begin
			select * from Employee
	end
	else
	begin
		select * from Employee where id=2
	end
end

exec pr_allEmployee 1
exec pr_allEmployee 2
exec pr_allEmployee 3
execute pr_allEmployee 4
---------------------------------------

select * from sys.procedures
select * from sys.tables











-- Create Products table
CREATE TABLE Products (
    ProductID INT PRIMARY KEY,
    ProductName NVARCHAR(255) NOT NULL,
    Price DECIMAL(10, 2) NOT NULL,
    StockQuantity INT NOT NULL
);

select * from Products

-- Insert 10 records into the Products table
INSERT INTO Products (ProductID, ProductName, Price, StockQuantity)
VALUES
    (1, 'Laptop', 999.99, 50),
    (2, 'Smartphone', 299.99, 100),
    (3, 'Tablet', 199.99, 30),
    (4, 'Headphones', 49.99, 80),
    (5, 'Printer', 129.99, 25),
    (6, 'External Hard Drive', 79.99, 60),
    (7, 'Digital Camera', 199.99, 40),
    (8, 'Wireless Mouse', 19.99, 120),
    (9, 'Gaming Console', 299.99, 15),
    (10, 'Smart TV', 599.99, 10);
-----------------------------------------------------


-->All records
create procedure sp_GetAllProduct
as
begin
	select * from Products
end

exec sp_GetAllProduct

-->> get by id

create procedure sp_GetProductById
@ProductID int
as
begin
	select * from Products where ProductID=@ProductID
end

exec sp_GetProductById 1
exec sp_GetProductById 3
exec sp_GetProductById 12

--> insert procedure
alter procedure sp_AddProducts
@ProductID INT,
@ProductName NVARCHAR(255),
@Price DECIMAL(10, 2),
@StockQuantity INT
as
begin
	 if  exists (select 1 from products where ProductId=@ProductID)
	 begin
		print 'Product id already exists'
	 end
	 else
	 begin
		insert into Products values(@ProductID,@ProductName,@Price,@StockQuantity)
	 end

end

exec sp_AddProducts 12,'Adoptor',25.00,20
-------------------------------------------------



create procedure sp_UpdateProducts
@ProductID INT,
@ProductName NVARCHAR(255),
@Price DECIMAL(10, 2),
@StockQuantity INT
as
begin
	 if  exists (select 1 from products where ProductId=@ProductID)
	 begin
			update products
			set ProductName=@ProductName, Price=@Price, StockQuantity=@StockQuantity
			where ProductId=@ProductID
	 end
	 else
	 begin
		print 'Product id dose not exists'
	 end

end

exec sp_GetProductById 1
sp_UpdateProducts 1,'Dell Laptop',1500,100

-->Delete


create procedure sp_DeleteProducts
@ProductID INT
as
begin
	 if  exists (select 1 from products where ProductId=@ProductID)
	 begin
			Delete products where ProductId=@ProductID
	 end
	 else
	 begin
		print 'Product id dose not exists'
	 end

end

sp_DeleteProducts 12
--------------------------------------------------------------


select * from sys.procedures

alter procedure sp_Products
@Task nvarchar(50)=null,
@ProductID INT =null,
@ProductName NVARCHAR(255)=null,
@Price DECIMAL(10, 2)=null,
@StockQuantity INT=null
as
begin
		if @Task='SELECT'
		begin
			select * from Products
		end

		if @Task='SELECTBYID' and @ProductID>0
		begin
			select * from Products where ProductID=@ProductID
		end

		if @Task='INSERT' 
		begin
			 exec sp_Products_insert @ProductID=@ProductID,
			 @ProductName=@ProductName,
			 @Price=@Price,
			 @StockQuantity=@StockQuantity
		end

		if @Task='UPDATE'
		begin
				if @ProductID is null
				begin
					print 'Please pass product id'
				end
				else
				begin
					update Products
					set ProductName=@ProductName,
					Price=@Price,StockQuantity=@StockQuantity
					where ProductID=@ProductID
				end
		end

		if @Task='DELETE'
		begin
				if @ProductID is null
				begin
					print 'Please pass product id'
				end
				else
				begin
					if exists (select 1 from Products where ProductID=@ProductID)
					begin
						delete from Products where ProductID=@ProductID
						print 'Your record deleted successfully'
					end
					else
					begin
						print 'This record is alredy deleted'
					end
				end
		end
end




create procedure sp_Products_insert
@ProductID INT =null,
@ProductName NVARCHAR(255)=null,
@Price DECIMAL(10, 2)=null,
@StockQuantity INT=null
as
begin
		 
			if @ProductID is null
			begin
				print 'Please pass product id'
			end
			else if @ProductName is null
			begin
				print 'Please pass Product Name'
			end
			else if @Price is null
			begin
				print 'Please pass Price'
			end
			else if @StockQuantity is null
			begin
				print 'Please pass Stock Quantity'
			end
			else
			begin
				insert into Products values(@ProductID,@ProductName,@Price,@StockQuantity)
			end
		 
end






--------------
exec sp_Products 'SELECT'
exec sp_Products @Task='SELECT'
exec sp_Products @Task='SELECTBYID',@ProductID=13

exec sp_Products @Task='INSERT',@ProductID=14 ,@ProductName='Test_nested procedure',@Price=25,@StockQuantity=100
exec sp_Products @Task='INSERT' ,@ProductID=14,@ProductName='Test2',@Price=25,@StockQuantity=100

exec sp_Products @Task='UPDATE' ,@ProductID=14,@ProductName='Test Data',@Price=30,@StockQuantity=500

exec sp_Products @Task ='DELETE' ,@ProductID=12

--------------------------------------------------------------



/*
29-01-2024
*/


begin try
	select 10/0
	print 'try block'

end try

begin catch
	print 'catch block'

	select ERROR_LINE(),
		ERROR_MESSAGE(),
		ERROR_NUMBER(),
		ERROR_SEVERITY(),
		ERROR_PROCEDURE()

end catch



Create table ErrorList
(
id int identity,
ErrorLine int,
ErrorMessage nvarchar(max),
ErrorNumber int,
ErrorSeverity int,
ErrorProcedure nvarchar(max),
CreatedDate datetime default(getdate())

)
select * from ErrorList

--exec sp_Products_test @ProductID=12 ,@ProductName='Test',@Price=25,@StockQuantity=100

alter procedure sp_Products_test
@ProductID INT =null,
@ProductName NVARCHAR(255)=null,
@Price DECIMAL(10, 2)=null,
@StockQuantity INT=null
as
begin
		begin try
		insert into Products values(@ProductID,@ProductName,@Price,@StockQuantity)
	   end try

	   begin catch
				declare @ErrorLine int,
				@ErrorMessage nvarchar(max),
				@ErrorNumber int,
				@ErrorSeverity int,
				@ErrorProcedure nvarchar(max)


				select @ErrorLine=ERROR_LINE(),
				@ErrorMessage=ERROR_MESSAGE(),
				@ErrorNumber=ERROR_NUMBER(),
				@ErrorSeverity=ERROR_SEVERITY(),
				@ErrorProcedure=ERROR_PROCEDURE()

				insert into ErrorList(ErrorLine,ErrorMessage,ErrorNumber,ErrorSeverity,ErrorProcedure)
				values(@ErrorLine,@ErrorMessage,@ErrorNumber,@ErrorSeverity,@ErrorProcedure)
	   end catch	
		 
end

 

 begin try
--select * from Products
select 10/0
end try

begin catch
	select     
				ERROR_LINE(),
				ERROR_MESSAGE(),
				ERROR_NUMBER(),
				ERROR_SEVERITY(),
				ERROR_PROCEDURE()

end catch

-----------------------
--30-01-2024
alter procedure sp_test
@name nvarchar(50),  -- input parameter
@lastid int=0 output  -- output pramater (return type varibale)
as
begin
	 insert into OutputTest(name) values(@name)
	 select @lastid=@@IDENTITY
end




declare @v int
exec sp_test @name='Shoeb',@lastid=@v output
print @v


-------------

 create table OutputTest
 (
 id int identity,
 name nvarchar(50)
 )

 insert into OutputTest(name) values('Raj')

 select * from OutputTest





--drop procedure sp_Products_insert
create procedure sp_Products_insert  
@ProductID INT =null,  
@ProductName NVARCHAR(255)=null,  
@Price DECIMAL(10, 2)=null,  
@StockQuantity INT=null  
as  
begin  
     
   if @ProductID is null  
   begin  
    print 'Please pass product id'  
   end  
   else if @ProductName is null  
   begin  
    print 'Please pass Product Name'  
   end  
   else if @Price is null  
   begin  
    print 'Please pass Price'  
   end  
   else if @StockQuantity is null  
   begin  
    print 'Please pass Stock Quantity'  
   end  
   else  
   begin  
    insert into Products values(@ProductID,@ProductName,@Price,@StockQuantity)  
   end  
     
end

------
--Syntax
/*
WHILE condition
begin
	-- statement
end

*/


declare @counter int
set @counter=0
while @counter<=5
begin
	set @counter=@counter+1

	if @counter=2
	begin
		break
	end

	print 'text '+convert(varchar, @counter)
	
end

-- continue ->skip
-- break   ->stop

 ---Print the table of 2
 --Syntax
/*
WHILE condition
begin
	-- statement
end


2
4
8
6
10

*/


declare @counter int
set @counter=1
while @counter<=20
begin
	 if @counter%2=1
	 begin
		set @counter=@counter+1
		continue
	 end
	 else
	 begin
		print @counter
		set @counter=@counter+1
	 end
end

-- continue ->skip
-- break   ->stop

 declare @counter int
set @counter=1
while @counter<=20
begin
	  
	  set @counter=@counter+1
	  if @counter%2=0
	  begin
		print @counter
	  end
end
 
----
/*
02-02-2024
SQL PARTITION BY Clause overview
*/
CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    OrderDate DATE,
    CustomerName VARCHAR(255),
    CustomerCity VARCHAR(255),
    OrderAmount DECIMAL(10, 2)
)

-- Insert random data into Orders table
INSERT INTO Orders (OrderID, OrderDate, CustomerName, CustomerCity, OrderAmount)
VALUES 
    (1, '2024-01-01', 'John Doe', 'New York', 100.50),
    (2, '2024-01-02', 'Jane Smith', 'Los Angeles', 75.25),
    (3, '2024-01-03', 'Bob Johnson', 'Chicago', 150.00),
    (4, '2024-01-04', 'Alice Brown', 'Houston', 200.75),
    (5, '2024-01-05', 'Charlie Davis', 'Phoenix', 50.30),
    (6, '2024-01-06', 'Eva Wilson', 'New York', 120.90),
    (7, '2024-01-07', 'Frank White', 'San Antonio', 180.60),
    (8, '2024-01-08', 'Grace Miller', 'San Diego', 90.75),
    (9, '2024-01-09', 'Henry Taylor', 'Dallas', 130.40),
    (10, '2024-01-10', 'Ivy Martinez', 'San Jose', 160.20),
    (11, '2024-01-11', 'Jack Robinson', 'Chicago', 110.30),
    (12, '2024-01-12', 'Kelly Garcia', 'New York', 70.80),
    (13, '2024-01-13', 'Leo Rodriguez', 'Indianapolis', 85.45),
    (14, '2024-01-14', 'Mia Lee', 'San Francisco', 140.25),
    (15, '2024-01-15', 'Noah Clark', 'Chicago', 95.70),
    (16, '2024-01-16', 'Olivia Hall', 'Fort Worth', 120.15),
    (17, '2024-01-17', 'Peter Turner', 'Charlotte', 175.50),
    (18, '2024-01-18', 'Raj', 'India', 60.35),
    (19, '2024-01-19', 'Rachel Baker', 'El Paso', 200.00),
    (20, '2024-01-20', 'Samuel Cooper', 'New York', 110.90),
    (21, '2024-01-21', 'Tina Sanchez', 'Baltimore', 80.20),
    (22, '2024-01-22', 'Aakash', 'India', 130.75),
    (23, '2024-01-23', 'Victoria Foster', 'Seattle', 160.50),
    (24, '2024-01-24', 'Walter Reed', 'Denver', 75.80),
    (25, '2024-01-25', 'Xander Taylor', 'Nashville', 140.00);

	
	select * from Orders
	select CustomerCity,customerName,
	COUNT(OrderAmount) ,
	min(OrderAmount) 'min Order Amount',
	sum(OrderAmount) 'Total Order Amount'
	from Orders
	 


	select CustomerName,
	CustomerCity,
	OrderAmount,
	Row_Number() Over(
	Partition by CustomerCity 
	Order By OrderAmount desc
	) as 'Row_Number',
	count(OrderAmount) over(Partition by CustomerCity)'count',
	SUM(OrderAmount) over(Partition by CustomerCity)  'Sum',
	min(OrderAmount) over(Partition by CustomerCity)  'min',
	max(OrderAmount) over(Partition by CustomerCity)  'max',
	sum(OrderAmount) Over(
	Partition by CustomerCity
	Order By OrderAmount desc
	ROWS BETWEEN CURRENT ROW AND 1 Following
	)
	from Orders
	
	
	 
	 