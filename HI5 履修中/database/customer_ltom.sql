create table idpw(
    email varchar(150) primary key not NULL, 
    password varchar(20), 
    updateTime datetime);

create table customer( 
    customerID varchar(10) primary keynot NULL, 
    firstName varchar(30), 
    lastName varchar(16), 
    email varchar(150), 
    phone varchar(20), 
    postcode char(8),
    address varchar(300),
    status char(10),
    regDateTime datetime,
    foreign key (email) references idpw(email));