#include<stdio.h>
#include<stdlib.h>

void copy(FILE *, FILE *);

int main(int argc ,char *argv[]){

    FILE *fi;
    FILE *fo;
    int ch;
    int i;

    if(argc == 3){
        if((fi=fopen(argv[1],"r"))==NULL){
            printf("Cannot open file:%s",argv[1]);
            exit(1);
        }
        if((fo=fopen(argv[2],"w"))==NULL){
            printf("Cannot open file:%s",argv[2]);
            exit(1);
        }
        copy(fi,fo);
        fclose(fi);
        fclose(fo);
    }else{
        printf("ファイルの過不足があります\n");
    }
    return 0;
}

void copy(FILE *f1, FILE *f2){
    int ch;
    while((ch=fgetc(f1))!=EOF){
        fputc(ch,f2);
    }
}

