#include<stdio.h>
#include<string.h>
void convstr(char *s){
	int i,j=0,b,c=0;
	char o[80];
	for(i=0; s[i]!='\0'; i++){
		if(i%2==1){
			for(b=0; b<s[i]-'0';b++){
				o[j] =s[i-1];
				j++;
			}
		}
	}
	strcpy(s, o);
}

int main(void){
	char s[80];
	scanf("%s",s);

	convstr(s);
	puts(s);
	
	return 0;
}

