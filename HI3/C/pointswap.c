#include<stdio.h>
void swap(int *x,int *y){
    int tmp;
    
    tmp=*x;
    *x=*y;
    *y=tmp;
}

int main(void){
    int xp=10;
    int yp=20;

    int *px,*py;

    px=&yp;
    py=&xp;

    printf("交換前: x = %d  y = %d\n",xp,yp);

    swap(&xp,&yp);

    printf("交換後: x = %d  y = %d\n",xp,yp);

    return 0;
}

