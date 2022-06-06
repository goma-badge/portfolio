#include<stdio.h>

int z;
void func(int x){
    int y;
    printf("func: &x = %018p\n",&x);
    printf("func: &y = %018p\n",&y);
}

int main(void){
    int x;
    printf("main: &x = %018p\n",&x);

    printf("main: &z = %018p\n",&z);

    func(x);
   

    return 0;
}

