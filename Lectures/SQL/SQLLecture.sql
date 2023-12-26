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
 