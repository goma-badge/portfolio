#include<stdio.h>
void hidevowel(char s[]){
	int i=0,j;
	char n[]="a,i,u,e,o";
	while(s[i]){
		j=0;
		while(n[j]){
			if(s[i]==n[j])
				s[i]='*';
			j++;
		}
		i++;
	}
}

int main(void){
	char s[80];
	printf("文字列を入力してください:");
	scanf("%s",s);

	printf("hidevowelを呼出す前");
	puts(s);
	hidevowel(s);
	printf("hidevowelを呼出した後");
	puts(s);
	return 0;
}
