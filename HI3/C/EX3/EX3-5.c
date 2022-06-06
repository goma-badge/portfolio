#include<stdio.h>
#include<string.h>
#define N 1000

int num(char []);

int main(void){
    char su[N];
    int numb;
    printf("数字列を入力してください:");
    scanf("%s",su);
    numb=num(su);
    printf("入力した数字列%sを数値変換すると%dです\n",su,numb);
    return 0;
}

int num(char su[]){
    int i;
    int x=0;
    int te=1;
    int str=strlen(su);
    while(su[i]){
        x+=(su[str-1-i]-'0')*te;
        te*= 10;
        i++;
    }
    return x;
}


