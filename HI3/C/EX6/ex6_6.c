#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    FILE *fi;
    int ch;
    int i;

    //ファイルオープン
    if(argc==1){
        while((ch=fgetc(stdin))!=EOF){
            putchar(ch);
        }
    }
    else if(argc>=2){
        for(i=1; i<argc; i++){
            if((fi=fopen(argv[i],"r"))==NULL){
                printf("Cannot open %s.\n",argv[i]);
                continue;
            }
            while((ch=fgetc(fi))!=EOF){
                putchar(ch);
            }
            fclose(fi);
        }
    }
    return 0;
}
