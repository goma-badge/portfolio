#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person{
    int no;
    char name[20];
    struct person *next;
}Person;

extern Person *root,*ptr;

int main(void){
    Person *root=NULL;


    print_list(root);
    insert_by_name(&root,41,"SENGA");
    print_list(root);
    insert_by_name(&root,21,"WADA");
    print_list(root);
    insert_by_name(&root,24,"KAI");
    print_list(root);
    insert_by_name(&root,5,"MATSUDA");
    print_list(root);

    return 0;
}