#include <stdio.h>
void swapchar(char *s,int d1,int d2){
	int a;
	a=s[d1];
	s[d1]=s[d2];
	s[d2]=a;

}

int main(void){
	char s[] = "hamster";
	puts(s);
	swapchar(s, 2, 5);
	puts(s);
	return 0;
}
