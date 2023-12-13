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
 

-----------------------------------------------


select Studentid,Firstname,Gender,Fees from Students