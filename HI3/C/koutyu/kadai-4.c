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

void print_list(Person *rootp)
{
    Person *ptr;

    for(ptr=root; ptr!=NULL; ptr=ptr->next){
        printf("%2d %-s\n",ptr->no,ptr->name);
    }
}

int main(void){
    FILE *fi;
    int no;
    char name[20];
    Person *root=NULL;

    if((fi = fopen("catcher.txt","r"))==NULL){
        printf("Cannot open catcher.txt.\n");
        exit(1);
    }
    while((fscanf(fi,"%d%s",&no,name))!=EOF){
        insert_by_no(&root,no,name);
    }
    print_list(root);
    fclose(fi);
    
    return 0;
}



