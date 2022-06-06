#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(int argc, char *argv[])
{
    uint8_t w[4],h[4];  //符号なし整数　8ビット
    uint32_t width,height; //符号なし整数 32ビット
    FILE *fp;
    

    if(argc!=2){                       //ファイル読み込み
        fprintf(stderr,"Usage:%s filename\n", argv[0]);
        exit(1);
    }

    fp=fopen(argv[1],"rb");
    if(fp==NULL){               //ファイルを読み込めなかったとき
        fprintf(stderr,"File %s not opened\n",argv[1]);
        exit(1);
    }

    fseek(fp,16,SEEK_SET);  //ファイル先頭から16バイト目へ移動
    fread(&w,sizeof(uint32_t),1,fp);   //画像の幅を読み込み
    fread(&h,sizeof(uint32_t),1,fp);   //画像の高さを読み込み

    width=((w[0]*256+w[1])*256+w[2])*256+w[3];
    height=((h[0]*256+h[1])*256+h[2])*256+h[3];

    fclose(fp);
    printf("%s: width=%d, height=%d\n",argv[1],width,height);

    return 0;
}