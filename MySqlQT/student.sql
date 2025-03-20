create database mydatabase;

use mydatabase;

create table student (

	id integer unsigned primary key,
	name varchar(16) not null,
	birth date
)charset utf8;

select * from student;