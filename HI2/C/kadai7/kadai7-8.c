#include <stdio.h>
int getsignchar(int n){
	if(n>0)
		return 'P';
	else if(n<0)
		return 'N';
	else
		return 'Z';
	}

int main(void){
	putchar(getsignchar(-20));
	putchar('\n');
	return 0;
	}

