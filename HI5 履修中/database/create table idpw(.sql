create table idpw(
    email varchar(150) primary key not NULL, 
    password varchar(20),
    updateTime datetime);
    
create table customer( 
    email varchar(150) primary key not NULL, 
    customerID varchar(10), 
    firstNamevarchar(30), 
    lastName varchar(16), 
    phone varchar(20), 
    postcode char(8),
    address varchar(300),
    status char(10),
    regDateTime datetime);