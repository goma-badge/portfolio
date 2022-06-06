typedef struct person{
    int no;
    char name[20];
    struct person *next;
}Person;

extern Person *root,*ptr;