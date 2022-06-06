#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person{
    int no;
    char name[20];
    struct person *next;
};

int main(void){
struct person a,b,c,d,e;
struct person *root;

a.no=21;
strcpy(a.name,"WADA");

b.no=19;
strcpy(b.name,"KAI");

c.no=5;
strcpy(c.name,"MATSUDA");

d.no=81;
strcpy(d.name,"KUDO");

e.no=11;
strcpy(e.name,"TSUMORI");

root=&a;
a.next=&e;
e.next=&c;
b.next=&c;
c.next=&d;
d.next=NULL;

struct person *ptr;
for(ptr=root; ptr!=NULL;  ptr=ptr->next){
    printf("%2d %-s\n",ptr->no,ptr->name);
}

return 0;
}
