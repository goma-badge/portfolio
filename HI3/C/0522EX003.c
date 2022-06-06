#include<stdio.h>

int main(void){
    int ch;//getcharで読み込み

    //ファイル終了(EOF)で読み込み終了
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
    return 0;
}
