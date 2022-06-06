#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(int argc, char *argv[])
{
    uint32_t size_w,size_h; //符号なし整数 32ビット
    FILE *fp;

    if(argc!=2){
        fprintf(stderr,"Usage:%s filename\n", argv[0]);
        exit(1);
    }

    fp=fopen(argv[1],"rb");
    if(fp==NULL){
        fprintf(stderr,"File %s not opened\n",argv[1]);
        exit(1);
    }

    fseek(fp,18,SEEK_SET);  //ファイル先頭から18バイト目へ移動
    fread(&size_w,sizeof(uint32_t),1,fp);   //画像の幅を読み込み
    fread(&size_h,sizeof(uint32_t),1,fp);   //画像の高さを読み込み

    fclose(fp);
    printf("%s: width=%d, height=%d\n",argv[1],size_w,size_h);

    return 0;
}
