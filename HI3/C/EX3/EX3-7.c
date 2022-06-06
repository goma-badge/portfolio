#include<stdio.h>
int fact(int);

int main(void){
    int n;

    printf("整数を入力:");
    scanf("%d",&n);
    printf("%dの階乗:%d\n",n,fact(n));

    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }else{
      return n*fact(n-1);
    }
}
