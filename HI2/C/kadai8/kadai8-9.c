#include <stdio.h>
void del_digit(char s[])
{
	int i = 0,idx = 0;

	while(s[i]){
		if(s[i] < '0' || s[i] > '9')
			s[idx++] =s[i];
		i++;
	}
	s[idx] = '\0';
}

int main(void)
{
	char str[256];

	printf("文字列を入力してください:");
	scanf("%s",str);

	del_digit(str);

	printf("%s\n",str);

	return 0;
}
