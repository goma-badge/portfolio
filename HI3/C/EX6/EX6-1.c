#include<stdio.h>

//関数プロトタイプ宣言
void wordcounter(FILE *, int *, int *, int *);

int main(void){

    int cl,cw,cc;   //カウントした値の受け取り用

    wordcounter(stdin, &cl,&cw,&cc);    //処理対象標準入力
    printf("%7d %7d %7d\n",cl, cw, cc);

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