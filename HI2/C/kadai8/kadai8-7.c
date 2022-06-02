#include <stdio.h>
int str_chnum(const char str[],int c)
{
	int i;
	int count = 0;

	for(i =0; str[i]!='\0';i++)
		if(str[i] == c)
			count++;
		return count;
}

int main(void)
{
	char str[256];
	char ch[10];

	printf("文字列を入力してください:");
	scanf("%s",str);

	printf("探したい文字を入力してください:");
	scanf("%s",ch);

	printf("文字列%sの中には文字%sが%d個含まれています。\n",str,ch,str_chnum(str,ch[0]));

	return 0;
}
