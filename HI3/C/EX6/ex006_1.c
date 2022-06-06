#include<stdio.h>
void swap1(int a,int b){
    int tmp;

    tmp=a;
    a=b;
    b=tmp;

    printf("a =%5d b=%5d\n",a,b);
}