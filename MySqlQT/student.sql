create database mydatabase;

use mydatabase;

create table student (
	id integer unsigned primary key,
	name varchar(16) not null,
	birth date
)charset utf8;

insert into student values (1,"tom","1999-9-7");
insert into student values (2,"jim","1909-9-9");
insert into student values (3,"hali","1978-9-8");

select * from student;


mysql -uroot -p

create user "test1"@"%" identified by "123456";

grant select,insert,create on *.* to "test1"@"%";

























update user set password=password("123456") where user="test1";


五.删除用户
命令:
DROP USER 'username'@'host';

DROP USER "test1"@"host";

flush privileges;