#include<stdio.h>
#define N 20
int input(int [],int);
int max(int [],int);
int min(int [],int);

int main(void){
    int a,b=20;
    int c[20];
    a=input(c,b);
    printf("最大値は%d\n",max(c,a));
    printf("最小値は%d\n",min(c,a));
    return 0;
}

int input(int num[],int x){
    int cou=0;
	printf("データを入力してください");
    while(scanf("%d",&num[cou])!=EOF &&cou<x-1){
    cou++;
    }
    return cou;
}

int max(int oo[N],int d){
    int MAX=oo[0];
    int i,cou;
    for(i=1; i<d; i++){
        if(MAX<oo[i]){
            MAX=oo[i];
        }
    }
    return MAX;
}

int min(int suk[N],int e){
    int MIN=suk[0];
    int i,cou;
    for(i=0; i<e; i++){
        if(MIN>suk[i]){
            MIN=suk[i];
        }
    }
    return MIN;
}
