#include<stdio.h>
int main(void){
	int ch;
	do{
		printf("アルファベットの文字を一つ入力してください:");
		ch=getchar();
		if(ch>='0' &&ch<='9'){
			printf("不正な入力です\n");
			}else if(ch>='A' && ch<='Z'){
				printf("%cの小文字は%cです\n",ch,ch+32);
				break;
			}else if(ch>='a' && ch<='z'){
				printf("%cの大文字は%cです\n",ch,ch-32);
				break;
				}
			}while(ch=='\n');

		return 0;
	}

	
