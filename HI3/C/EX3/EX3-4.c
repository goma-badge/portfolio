#include<stdio.h>
void init(int);

int main(void){
    int x,su;
    printf("数値を入力してください");
    scanf("%d",&su);
    init(x);
    printf("入力した%dを初期化した値は%dです\n",su,x);
    return 0;
}

void init(int a){
    a=a*0;
}
