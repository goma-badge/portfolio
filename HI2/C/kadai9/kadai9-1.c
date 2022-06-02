#include <stdio.h>
int main(void){
	int x =5;
	int *p =&x;

	printf("x : %d\n", x);
	printf("*p: %d\n", *p);
	*p =100;
	printf("x : %d\n", x);
	printf("*p: %d\n", *p);
	x = x - 50;
	*p = *p + 7;
	printf("x : %d\n",x);
	printf("*p: %d\n" ,*p);
	return 0;
}
