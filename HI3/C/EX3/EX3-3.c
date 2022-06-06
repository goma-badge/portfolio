#include<stdio.h>
#include<math.h>

int triangle(int,int,int);


int main(void){
    int q,w,e,kai;
    printf("三角形の辺の長さをそれぞれ入力してください\n");
    scanf("%d%d%d",&q,&w,&e);
    kai=triangle(q,w,e);
    if(kai==1){
        printf("直角三角形は作れます");
        return 0;
    }
    if(kai==0){
        printf("直角三角形は作れません");
        return 0;
    }
}

int triangle(int x,int y,int z){
    if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==x*x+y*y){
        return 1;
    }else{
        return 0;
    }
}

