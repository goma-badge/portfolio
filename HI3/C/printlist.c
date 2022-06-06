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


void insert_head(Person **root, int no, char name[])
{
    Person *ptr;
    ptr=new_node(no,name);

    ptr->next=*root;
    *root=ptr;
}


void print_list(Person *root)
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
    insert_head(&root,21,"WADA");
    print_list(root);
    insert_head(&root,19,"KAI");
    print_list(root);
    insert_head(&root,5,"MATSUDA");
    print_list(root);


    return 0;
}

