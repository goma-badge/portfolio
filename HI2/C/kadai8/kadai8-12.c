#include<stdio.h>
#include<string.h>
int main(void){
	char p[]={"abc123"};
	char pa[33];
	while(1){
		printf("Input password:");
		scanf("%s",pa);
		if(strcmp(p,pa)==0){
			printf("OK.\n");
			break;
		}else{
			printf("Wrong!\n");
		}
	}

	return 0;
}
