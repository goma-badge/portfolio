#include <stdio.h>
int str_char(const char s[], int c){
	int i=0,cou=0;

	while(s[i]!='\0'){
		if(s[i]==c){
			cou++;
			break;
		}
		i++;
	}
	if(cou==1)
		printf("%sの中に%cが最初に出現する添字は%dです。\n",s,c,i);
	else
		printf("その文字は含まれていません。\n");

}

int main(void){
	char s[80], c;
	printf("文字列を入力してください:");
	scanf("%s", s);
	printf("探したい文字を入力して下さい:");
	scanf(" %c", &c);
	str_char(s,c);
	return 0;
}
	
