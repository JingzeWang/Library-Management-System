create database LibraryManagementSystem;
use LibraryManagementSystem;
create table BookInfo(
	name char(30),
	price int,
	author char(30),
	type char(30),
	pageNum int,
	wordNum int,
	isbn char(30),
	primary key(isbn)
);
create table Book(
	id char(20),
	isbn char(30),
	borrowerid char(30),
	hasborrowednum int,
	isborrowed int,
	startborrowtime char(30),
	shouldreturntime char(30),
	primary key(id)
);
create table People(
	id char(20),
	fine int,
	bookid0 char(20),
	bookid1 char(20),
	bookid2 char(20),
	bookid3 char(20),
	bookid4 char(20),
	bookid5 char(20),
	bookid6 char(20),
	bookid7 char(20),
	bookid8 char(20),
	bookid9 char(20),
	primary key(id)
);
create table PeopleInfo(
	id char(20),
	mode int,
	name char(15),
	age int,
	gender char(1),
	password char(15),
	primary key(id)
);
create table PeopleHistory(
	id char(20),
	bookid0 char(20),
	bookid1 char(20),
	bookid2 char(20),
	bookid3 char(20),
	bookid4 char(20),
	bookid5 char(20),
	bookid6 char(20),
	bookid7 char(20),
	bookid8 char(20),
	bookid9 char(20),
	primary key(id)
);
create table PeopleID(
	type char(1),
	id char(19)
);
create table BookID(
	type char(1),
	id char(20)
);
insert into PeopleID values ('n', '0000000000000000000');
insert into BookID values ('n', '00000000000000000000');
insert into PeopleInfo values('l0000000000000000000', 0, 'dzz', 20, 'm', '123');