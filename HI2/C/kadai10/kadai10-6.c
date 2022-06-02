#include<stdio.h>
#include<string.h>

void reverse(char *s){
int i,n;
char c;
n=strlen(s);

for(i=0;i<n/2;i++){
	c=s[i];
	s[i]=s[n-i-1];
	s[n-i-1]=c;
}
}

int main(void)
{
	char s[100];
	printf("文字列は？:");
	scanf("%s",s);
	reverse(s);
	printf("%s\n",s);

	return 0;
}

