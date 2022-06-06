#include<stdio.h>

int main(void){
    int ch;//getcharで読み込み
    int count=0;

    //ファイル終了(EOF)で読み込み終了
    while((ch=getchar())!=EOF){
        putchar(ch);
        count++;
    }
    printf("count=%d\n",count);
    return 0;
}
