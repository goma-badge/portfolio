#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person{
    int no;
    char name[20];
    struct person *next;
}Person;

int main(void){
Person *ptr, *root;
ptr=(Person*)malloc(sizeof(Person));

ptr->no=21;
strcpy(ptr->name,"WADA");
ptr->next=NULL;

root=ptr;

ptr->no=19;
strcpy(ptr->name,"KAI");
ptr->next=root;

root=ptr;

ptr->no=5;
strcpy(ptr->name,"MATSUDA");
ptr->next=root;

root=ptr;

for(ptr=root; ptr!=NULL;  ptr=ptr->next){
    printf("%2d %-s\n",ptr->no,ptr->name);
}

return 0;
}
