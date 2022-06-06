#include<stdio.h>
int factorial(int n){
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}

int main(void){
    int x;

    x=factorial(3);
    printf("n! = %d\n",x);
    return 0;
}
