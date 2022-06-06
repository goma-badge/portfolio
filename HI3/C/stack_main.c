#include<stdio.h>
#include"stack.h"

int main(void)
{
    int x;
    stack_initialize();

    stack_push(10); stack_print();
    stack_push(50); stack_print();
    stack_push(20); stack_print();

    x=stack_pop();

    while(x>=0){
        printf("x=%d\n",x);
        stack_print();
        x=stack_pop();
    }
    
    return 0;
}
