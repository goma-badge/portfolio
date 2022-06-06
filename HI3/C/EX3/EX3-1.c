#include<stdio.h>
int sum(int);

int main(void){
    int n,kai;
    printf("nの値を入力してください:");
    scanf("%d",&n);
    kai=sum(n);
    printf("数列の和は%dです\n",kai);
    return 0;
}

int sum(int s){
    int kai;
    kai=(s*(s+1))/2;
    return kai;
}
