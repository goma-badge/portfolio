#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

typedef struct person {
	int no;
	char name[20];
	struct person *next;
} Person;


void print_list(Person *root)
{
	Person *p;

	for (p = root; p != NULL; p = p->next) {
		printf("%2d %-s\n", p->no, p->name);
	}
	printf("----------\n");
}

Person *new_node(int no, char name[])
{
	Person *ptr;

	ptr = (Person *) malloc( sizeof(Person) );

	ptr->no = no;
	strcpy(ptr->name, name);
	ptr->next = NULL;

	return ptr;
}

void append_tail(Person **rootp, int no, char name[])
{
	Person *ptr, *p;

	ptr = new_node(no, name);

	if (*rootp == NULL) {
		*rootp = ptr;
	}
	else {
		p = *rootp;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = ptr;
	}
}

void insert_head(Person **rootp, int no, char name[])
{
	Person *ptr;

	ptr = new_node(no, name);

	ptr->next = *rootp;
	*rootp = ptr;
}

void insert_by_no(Person **rootp, int no, char name[])
{
	Person *ptr, **pp;

	ptr = new_node(no, name);

	for ( pp=rootp; *pp!=NULL; pp=&((*pp)->next) ) {
		if ( (*pp)->no > ptr->no ) {
			break;
		}
	}

	ptr->next = *pp;
	*pp = ptr;
}
void insert_by_name(Person **rootp, int no, char name[])
{
	Person *ptr, **pp;
	int tmp;
	ptr = new_node(no, name);

	for (pp=rootp; *pp!=NULL; pp=&((*pp)->next) ) {
		tmp=strcmp((*pp)->name,ptr->name);
		if(tmp>=0){
			if(tmp==0){
				if((*pp)->no >= ptr->no)
					break;
			}
			else
				break;
			}
		}
	ptr->next = *pp;
	*pp = ptr;
}


void delete_by_no(Person **rootp, int target_no)
{
	Person **pp, *temp;

	for ( pp=rootp; *pp!=NULL; pp=&((*pp)->next) ) {
		if ( (*pp)->no == target_no ) {
			temp = *pp;
			*pp = (*pp)->next;
			free(temp);
			break;
		}
	}
}

int  main(void)
{
	FILE	*fp;
	Person   *root;
	int		no;
	char	name[20];

	root = NULL;

	fp = fopen("catcher.txt", "r");
	if (fp == NULL) {
		printf("File open error\n");
		exit(1);
	}

	while (1) {
		fscanf(fp, "%d%s", &no, name);

		if (feof(fp)) break;

		insert_by_name(&root, no, name);
	}
	print_list(root);

	fclose(fp);

	return 0;
}
