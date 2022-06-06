create table customer(
customerID varchar(10) primary key not NULL,
firstName varchar(30),
lastName varchar(16),
phone varchar(20),
postcode char(8),
address varchar(300),
status char(10),
regDateTime datetime);



create table idpw(
email varchar(150) primary key not NULL,
password varchar(20),
customerID varchar(10),
updateTime datetime,
foreign key (customerID) references customer(customerID));