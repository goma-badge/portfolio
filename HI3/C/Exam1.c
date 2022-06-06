// プリプロセッサ 必要なものがあれば追加しなさい
#include <stdio.h>
#include<stdlib.h>

#define N 32	// 4バイト(32bit)

// 必要なプロトタイプ宣言を書きなさい
int BtoD();
int Bcheck();


// main()	
int main(int argc,char *argv[]){

	int flag_B = 1; // 変換対象が2進数であるかの判別用
	int base=1;// 初期値:1(2進数)

    if (argc==1;) {
		printf(	// コマンドライン引数の過不足確認

		// 関数Bcheck()により変換対象が2進数であるか判別
		// flag_Bの値をBcheck()で設定しなさい

		if (flag_B){	// ２進数の時
			printf(" 2進数:%s\n", XXXXXXXXXX);	// 入力された二進数を出力
			printf("  ↓\n");
			printf("10進数:%d\n", XXXXXXXXXX); // 関数BtoD()の関数呼び出し
		}
		else {			// ２進数でない時
			printf("2進数で入力してください\n");
		}
	}
	else {	// コマンドライン引数に過不足がある場合
		printf("2進数を10進数に変換するプログラムです．\n");
		printf("2進数で入力してください\n");
	}

	return 0;
}

// BtoD() を書きなさい(戻り値: 2進数から変換した10進数)
int BtoD(){



// Bcheck()	を書きなさい(戻り値: 2進数:1, 2進数でない:0)
int Bcheck(int x,int y){
int ch;
while((ch=fgetc(fi))!=EOF){
	if(ch!=1  || ch!=0){
		return 0;
	}else{
		return 1;
	}
}


