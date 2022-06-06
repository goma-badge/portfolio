#include<stdio.h>

typedef struct stype{
    char st[15];
    int d;
    char c;
}Stype;

void swap(Stype *a, Stype *b){      //参照元の値を入れ替えるためポインタを使用してアドレスを受ける
    Stype tmp;

    tmp=*a;     //値の参照はアドレスなのでアスタリスクをつける
    *a=*b;
    *b=tmp;
}

int main(void){

    Stype a={"hello",1,'2'}, b={"good night",10,'b'},tmp;

    puts("(1)");
    printf("%-15s\t%5d\t%c\n",a.st,a.d,a.c);
    printf("%-15s\t%5d\t%c\n",b.st,b.d,b.c);

    swap(&a,&b);　//アドレスを渡すときは＆をつける

    puts("(2)");
    printf("%-15s\t%5d\t%c\n",a.st,a.d,a.c);
    printf("%-15s\t%5d\t%c\n",b.st,b.d,b.c);

    return 0;
}