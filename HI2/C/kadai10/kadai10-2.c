#include<stdio.h>
int main(void){
	char word[80];
	char *p = word;
	int count = 0;
	
	printf("単語を入力してください:");
	scanf("%s",word);

	while(*p!='\0'){
		if(*p>='0' && *p<='9'){
			count++;
			}
			p++;
		}
	
	printf("数値は%d個含まれています。\n",count);
	return 0;
}
		

