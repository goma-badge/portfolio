create table  locality(
    locaID int primary key not null auto_increment,
    locality varchar(100),
    country varchar(30));

create table wstatus(
    stID int primary key not null auto_increment,
    status varchar(20),
    forwhat varchar(20));

create table wine (
    wineID int auto_increment not null primary key,
    name varchar(100),
    locaID int,
    kind varchar(32),
    color varchar(8),
    vintage int,
    price int,
    picture varchar(150),
    comment text,
    stID int,
    foreign key(locaID) references locality(locaID),
    foreign key(stID) references wstatus(stID));
    
create table wineSet(
    setID varchar(20) not null primary key,
    name varchar(32),
    comment text,
    stID int,
    foreign key(stID) references wstatus(stID));
    
create table setDetail(
    setID varchar(20),
    wineID int,
    quantity int,
    foreign key(setID) references wineSet(setID),
    foreign key(wineID) references wine(wineID));