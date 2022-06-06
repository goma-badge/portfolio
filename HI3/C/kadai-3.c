#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fi;
    int no;
    char name[20];


    if((fi = fopen("catcher.txt","r"))==NULL){
        printf("Cannot open catcher.txt.\n");
        exit(1);
    }
    
    while((fscanf(fi,"%d%s",&no,name))!=EOF){
        printf("%d ",no);
        puts(name);
    }
    fclose(fi);
    
    return 0;
}
