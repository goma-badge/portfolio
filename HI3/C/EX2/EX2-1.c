#include<stdio.h>

int main(void){
    int ch;//getcharで読み込み
    int count=0;
    int i=0;
	double p;

    //ファイル終了(EOF)で読み込み終了
    while((ch=getchar())!=EOF){
        putchar(ch);
        count++;
         if(ch>='A'&& ch<='Z'){
            i++;
        }else if (ch>='a'&& ch<='z'){
            i++;
            }
        }
    printf("英字の数=%5d\n",i);
	printf("全体文字数=%5d\n",count);
	p=((double)i/count)*100;
	printf("英字が占める割合:%7.2f％",p);
    return 0;
}
