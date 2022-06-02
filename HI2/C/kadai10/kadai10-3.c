#include<stdio.h>
void hidechars(char *s){
	char *a=s;
	int i=0;
	while(*a){
		if(i%2==0)
			*a='_';
		a++;
		i++;
	}
}

int main(void){
	char s[] = "Kumamoto";
	puts("元の文字列:");
	puts(s);
	hidechars(s);
	puts("hidechars実行後:");
	puts(s);
	return 0;
}
