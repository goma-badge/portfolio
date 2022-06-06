#include<stdio.h>
#include<stdlib.h>

void max_height(double [],int);

int main(int argc,char *argv[])
{

    FILE *fp;
    int i,n;
    double height;
    double *xp;
    

    if(argc==1){
        printf("最初に入力するデータの数を入力");
        fp=stdin;
    }
    else if(argc==2){
        fp=fopen(argv[1],"r");
        if(fp==NULL){
            printf("FILE OPEN ERROR\n");
            exit(1);
        }
    }
    else{
        printf("Usage:%s[filename]\n",argv[0]);
        exit(1);
    }
    
    fscanf(fp,"%d",&n);
    printf("n=%d\n",n);
    xp=(double*)malloc(sizeof(double)*n);


    for(i=0;i<n; i++){
        fscanf(fp,"%lf",&height);
        xp[i]=height;
    }

    printf("読み込んだ値\n");
    for(i=0;i<n;i++){
        printf("%.1f\n",xp[i]);
    }
   

    if(argc==1){
        printf("身長の高い順にソート\n");
        max_height(xp,n);
        for(i=0; i<n; i++)
        printf("%.1f\n",xp[i]);
    }

    if(argc==2){
        printf("身長の高い順にソート\n");
        max_height(xp,n);
        for(i=0; i<n; i++)
        printf("%.1f\n",xp[i]);
        fclose(fp);
    }
    free(xp);
    return 0;
}

void max_height(double xp[],int n)
{	
    int i,j,tmp;
    double height;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(xp[i]<xp[j]){
                tmp=xp[i];
                xp[i]=xp[j];
                xp[j]=tmp;
            }
        }
    }
}
