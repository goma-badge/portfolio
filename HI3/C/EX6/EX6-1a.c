#include<stdio.h>
#include<stdlib.h>
#define N 20

int main(void){
    FILE *fi;
    char filename[N];
    int ch;

    printf("ファイル名を入力");
    scanf("%s",filename);

    if((fi = fopen(filename,"r"))==NULL){
        printf("Cannot open test.txt.\n");
        exit(1);
    }
    
    while((ch=fgetc(fi))!=EOF){
        putchar(ch);
    }
    fclose(fi);
    
    return 0;
}
