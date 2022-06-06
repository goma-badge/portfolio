#include<stdio.h>
#define N 20
int input(int [],int);
void reverse(int[],int);

int main(void){
    int sai=20,b;
    int hai[N];
    b=input(hai,sai);
    reverse(hai,b);
    return 0;
}


int input(int num[N],int x){
    int cou=1;
	printf("データを入力してください(20個まで)\n");
    while(scanf("%d",&num[cou])!=EOF &&cou<x){
    cou++;
    }
    return cou;
}

void reverse(int num[],int x){
    int a=0;
    printf("逆順に出力したデータ\n");
    while(a<x){
        printf("%d\n",num[x]);
        x--;
    }
}
