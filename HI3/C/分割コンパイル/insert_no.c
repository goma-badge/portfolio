#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct person{
    int no;
    char name[20];
    struct person *next;
}Person;

Person *root,*ptr;

Person *new_node(int no,char name[])
{
    Person *ptr;
    ptr=(Person*)malloc(sizeof(Person));
    ptr->no=no;
    strcpy(ptr->name,name);
    ptr->next=NULL;
    
    return ptr;
}


void insert_by_no(Person **rootp, int no, char name[])
{
    Person *ptr;
    Person **pp;
    ptr=new_node(no,name);
    
    for(pp=&root; *pp!=NULL; pp=&((*pp)->next)){
        if((*pp)->no > ptr->no){
            break;
        }
    }
    ptr->next=*pp;
    *pp=ptr;
}

void insert_by_name(Person **rootp, int no, char name[])
{
    Person *ptr;
    Person **pp;
    ptr=new_node(no,name);
    
    for(pp=&root; *pp!=NULL; pp=&((*pp)->next)){
        if((*pp)->name > ptr->name){
            break;
        }
    }
    ptr->next=*pp;
    *pp=ptr;
}



void print_list(Person *rootp)
{
    Person *ptr;

    for(ptr=root; ptr!=NULL; ptr=ptr->next){
        printf("%2d %-s\n",ptr->no,ptr->name);
    }

    printf("------------\n");
}

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

