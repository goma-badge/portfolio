// プリプロセッサ
#include <stdio.h>
#include <stdlib.h> // for exit()
#include <string.h> // for strlen()

// 関数output()のプロトタイプ宣言
void output(char []);

#define N 256

int main(void){

	FILE *fp;		// ファイルポインタ
	char line[N];	// 読み込んだ文字列用

	// 外部file.txt を読み込みモードで開く
	// 例外処理も行いなさい
	if((fp=fopen("file.txt","r"))==NULL){
		printf("Cannot open file.txt.\n");
		exit(1);
	}
	
	

// ファイルから配列lineへ1行ずつ読み込み
	while ((fgets(line,N,fp))!=NULL){
		line[strlen(line)-1]='\n';	// (1) 文字列に含まれる改行コードの処理 
		printf("s",line);

		output(line, strlen(line));		// 関数output()呼び出し
	}

	fclose(fp);// ファイルクローズ

	return 0;
}

// 関数output() 戻り値：なし, 第１引数名:line, 第２引数名:length
void output(char str[]){
	int length=str_len(str);
	int line;
	char temp;
	int i,j;

	for(i=0; i<length/2; i++){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;

	printf("[%3d]", length);
	printf("%s\n", line);		// (2)  
	// lineに格納されている文字を逆順に出力するように変更
}
}
