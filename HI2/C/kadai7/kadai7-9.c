#include<stdio.h>
int getchartype(char c){
int ch;
	if(c>='0' && c<='9'){
	ch = 1;
	}
	else if(c>='A' && c<='Z'){
	ch=3;
	}else if(c>='a' && c<='z'){
	ch= 2;
	}else
	ch=0;
return ch;
}
int main(void){
	int ch;
	printf("文字を1つ入力してください:");
	ch = getchar();
	printf("入力された文字のタイプは%dです。\n",getchartype(ch));
	return 0;
}
