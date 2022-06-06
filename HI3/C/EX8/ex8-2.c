#include<stdio.h>

typedef struct stype{
    char st[15];
    int d;
    char c;
}Stype;

int main(void){

    Stype a={"hello",1,'2'}, b={"good night",10,'b'},tmp;

    puts("(1)");
    printf("%-15s\t%5d\t%c\n",a.st,a.d,a.c);
    printf("%-15s\t%5d\t%c\n",b.st,b.d,b.c);

    tmp=a;
    a=b;
    b=tmp;

    puts("(2)");
    printf("%-15s\t%5d\t%c\n",a.st,a.d,a.c);
    printf("%-15s\t%5d\t%c\n",b.st,b.d,b.c);

    return 0;
}