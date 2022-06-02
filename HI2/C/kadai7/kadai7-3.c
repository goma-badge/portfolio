#include<stdio.h>
int main(void){
	int ch;
	printf("文字を1つ入力してください:");
	ch = getchar();
	if(ch!=EOF){
	printf("入力された文字は%cです\n",ch);
	printf("文字コードは10進数で%d,16進数で%Xです\n",ch,ch);
	}
	else{
	puts("EOFです\n");
	}
return 0;
}

