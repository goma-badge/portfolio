#include <stdio.h>
int main(void){
int ch,x;
		printf("文字を入力してください\n");
		while((ch=getchar())!=EOF){
			if(ch>=48 && ch<=57)
				x++;	
	}
	printf("入力された文字の中に数字は%d個含まれています\n",x);

	return 0;
}


