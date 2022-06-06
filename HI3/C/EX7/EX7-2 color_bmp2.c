#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef struct pixel{ //画素を表す構造体
    uint8_t b;  //BLUE
    uint8_t g;  //GREEN 
    uint8_t r;  //RED


}Pixel;


int main(int argc, char *argv[])
{
    uint32_t size_w,size_h; //符号なし整数 32ビット
    uint32_t data_pos;
    Pixel pix;  //画素データ
    FILE *fp;
    Pixel datain;
    int i,j,s;

    if(argc<2){
        fprintf(stderr,"Usage:%s filename\n", argv[0]);
        exit(1);
    }

    fp=fopen(argv[1],"r+b");
    if(fp==NULL){
        fprintf(stderr,"File %s not opened\n",argv[1]);
        exit(1);
    }

    fseek(fp,18,SEEK_SET);  //ファイル先頭から18バイト目へ移動
    fread(&size_w,sizeof(uint32_t),1,fp);   //画像の幅を読み込み
    fread(&size_h,sizeof(uint32_t),1,fp);   //画像の高さを読み込み


    fseek(fp,10,SEEK_SET);
    datain.b=atoi(argv[2]);
    datain.g=atoi(argv[3]);
    datain.r=atoi(argv[4]);

    fread(&data_pos,sizeof(uint32_t),1,fp);     //画像データの先頭位置

    fseek(fp,data_pos,SEEK_SET);    //画像データの先頭位置へ移動
   

    for(i=0; i<size_w; i++){
        for(j=0; j<size_h; j++){
            fwrite(&datain,sizeof(Pixel),1,fp);
        }
    }
    fseek(fp,data_pos,SEEK_SET);
    fread(&pix, sizeof(Pixel),1,fp);    //画像データ(構造体)の読み出し
    fclose(fp);
    printf("%s: width=%d, height=%d\n",argv[1],size_w,size_h);
    printf("%s:B=%02X,G=%02X,R=%02X\n",argv[1],pix.b,pix.g,pix.r);

    return 0;
}