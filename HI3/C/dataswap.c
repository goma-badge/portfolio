#include<stdio.h>
int main(void){
    int x;
    int y;
    int tmp;

    x=10;
    y=20;

    tmp=x;
    x=y;
    y=tmp;

    printf("x   =%d\ny   =%d\n",x,y);

    return 0;
}
