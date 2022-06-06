create table customer(
    email varchar(150) primary key not NULL,
    password varchar(20),
    pwUpdateTime datetime,
    customerID varchar(10),
    firstName varchar(30),
    lastName varchar(16),
    phone varchar(20),
    postcode char(8),
    address varchar(300),
    status char(10),
    regDateTime datetime
);