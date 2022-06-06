#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

typedef struct stack_list{
    int x;
    struct stack_list *next;
}StackList;

StackList *root;

void stack_initialize(void)
{
    StackList *ptr;
    int x;
    StackList *root =NULL;
    ptr = (StackList *) malloc( sizeof(StackList) );
    ptr->x = x;
	ptr->next = NULL;
}

void stack_push(int x)
{
    StackList *ptr;
    StackList **root;

	ptr = x;

	ptr->next = *root;
	*root = ptr;

}

int stack_pop(void)
{    
    int x;
    if(x==0){
        printf("STACK EMPTY\n");
        return -1;
    }
}

void stack_print(void)
{    
    StackList *p;
    
	for (p = root; p != NULL; p = p->next) {
		printf("%2d\n", p->x);
	}
	printf("----------\n");
}
