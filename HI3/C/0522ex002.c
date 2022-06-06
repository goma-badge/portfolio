#include<stdio.h>
#define N 3

int main(void){
    int a[N];
    double b[N];
    char c[N];
    int i;

    printf("整数　実数　文字の順で入力してください\n");
    for(i=0; i<N; i++){
        scanf("%d %lf %c",&a[i], &b[i],&c[i]);
    }
    for (i=0; i<N; i++){
        printf("整数:[%d]\t 実数:[%f]\t 文字[%c]\n",a[i],b[i],c[i]);
    }
    return 0;
}