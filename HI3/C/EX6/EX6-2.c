#include<stdio.h>

//関数プロトタイプ宣言
void wordcounter(FILE *fp, int *gyo, int *tango, int *moji);

int main(int argc, char *argv[]){
    FILE *fi;
    int ch;
    int i;
    int cl,cw,cc;   //カウントした値の受け取り用
    int gwa=0;
    int twa=0;
    int mwa=0;

    if(argc==1){
    fi=stdin;
        wordcounter(fi, &cl,&cw,&cc); 
        printf("%7d %7d %7d\n",cl, cw, cc);
        
    }
    else if(argc==2){
        if((fi=fopen(argv[1],"r"))==NULL){
            printf("Cannot open %s.\n",argv[1]);
        }
    wordcounter(fi, &cl,&cw,&cc);    //処理対象標準入力
    printf("%7d %7d %7d  %s\n",cl, cw, cc,argv[1]);
    fclose(fi);

    }else if(argc>2){
        for(i=1; i<argc; i++){
			if((fi=fopen(argv[i],"r"))==NULL){
				printf("Cannot open file\n");
                continue;
			}
            wordcounter(fi, &cl,&cw,&cc); 
            printf("%7d %7d %7d  %s\n",cl, cw, cc,argv[i]);   //処理対象標準入力
            gwa+=cl;
            twa+=cw;
            mwa+=cc;
            fclose(fi);
    }
    printf("総行数%7d  総単語数%7d  総文字数%7d\n",gwa,twa,mwa);
    }
    return 0;
}
//関数wordcounter()
void wordcounter(FILE *fp ,int *gyo , int *tango , int *moji){ // cl 行　cw 単語　cc 文字数
    int ch, fl;
    *gyo=0; *moji=0; *tango=1; fl=2;

    while((ch=fgetc(fp))!=EOF){  
        if(fl==2){
            fl=0;
            if(ch==' ')
            (*tango)--;
        }
        (*moji)++;     
		if(ch=='\n')
			(*gyo)++;
        if(ch=='\n'||ch==' '||ch=='\t')
            fl=1;

        if(fl==1 && ch!='\n' && ch!=' ' && ch!='\t'){
            (*tango)++;
            fl=0;
        }
    }
        if(*moji==0){
            *gyo=0;
            *tango=0;
    }
}