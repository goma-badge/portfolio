#include<stdio.h>
#include"stack.h"

#define STACK_SIZE 10

int array[STACK_SIZE];
int sp;

void stack_initialize(void)
{
    sp=0;
}

void stack_push(int x)
{
    if(sp>=STACK_SIZE){
        printf("STACK OVER FLOW\n");
    }
    else{
        array[sp]=x;
        sp++;
    }
}

int stack_pop(void)
{
    if(sp==0){
        printf("STACK EMPTY\n");
        return -1;
    }
    sp--;
    return array[sp];
}

void stack_print(void)
{
    int i;
    
    for(i=sp-1; i>=0; i--){
        printf("%d\n",array[i]);
    }
    printf("------------\n");
}
