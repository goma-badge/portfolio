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
}

void append_tail(Person **rootp, int no, char name[]){
    Person *ptr,*p;

    ptr=new_node(no,name);
    if(*rootp==NULL){
        *rootp=ptr;
    }
    else{
        p=*rootp;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=ptr;
    }
}


int main(void){

    int m_tmp;
    int no;
    char name[20];


    while(1){
        printf("=========\n");
        printf("(1) Insert\n");
        printf("(2) Append\n");
        printf("(3) Print\n");
        printf("(4) Exit\n");
        printf("=========\n");

        scanf("%d",&m_tmp);

        switch(m_tmp){
            case 1 : printf("Select a number:%d\n",m_tmp);
                     printf("Input No. :");
                     scanf("%d",&no);
                     printf("Input Name:");
                     scanf("%s",name);
                     insert_head(&root,no,name);
                     break;

            case 2 : printf("Select a number:%d\n",m_tmp);
                     printf("Input No. :");
                     scanf("%d",&no);
                     printf("Input Name:");
                     scanf("%s",name);
                     append_tail(&root,no,name);
                     break;

            case 3 : printf("Select a number:%d\n",m_tmp);
                     print_list(root);
                     break;

            case 4 : printf("Select a number:%d\n",m_tmp);
                     printf("Exit\n");
                     return 0;

            default: return 0;
            }
        }
    return m_tmp;
}

