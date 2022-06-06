#include <stdio.h>
#include <string.h>
#define MAX_N 100
#define N_LEN 20
#define A_LEN 4

// 関数プロトタイプ宣言
int input(char [][N_LEN], int [], int );
void output(char [][N_LEN], int [], int );
// void sort_age(必要な引数型並び);
// void sort_name(必要な引数型並び);

int main(void) {

	char name[MAX_N][N_LEN];
	int age[MAX_N];
	int member;	//登録人数管理用


	member = input(name, age, MAX_N);	//登録人数をmemberに返す
	output(name, age, member);			//登録情報の表示
	//sort_age(必要な引数並び);			//年齢順（昇順)に並び替え
	//output(name, age, member);			//登録情報の表示(並び替えの確認)
	//sort_name(必要な引数並び);		//名前のアルファベット順に並び替え
	//output(name, age, member);			//登録情報の表示(並び替えの確認)
	
	return 0;
}

// 入力関数
int input(char name[][N_LEN], int age[], int max_N){
	int i=0;
	char t_name[N_LEN], t_age[A_LEN];

	printf("名前(文字列)と年齢を入力\n");
	printf("入力例------------------------------------\n");
	printf("kumamoto hanako\n");
	printf("18\n");
	printf("       名前入力時に 改行のみで入力を終了\n");
	printf("------------------------------------------\n");
	while (i < max_N){	//入力上限
		printf("名前:"); fgets(t_name, N_LEN, stdin);
		t_name[strlen(t_name)-1] = '\0';
		if (strcmp(t_name, "") == 0) break;	// 入力終了
		strcpy(name[i], t_name); // X name[i] = t_name;

		printf("年齢:"); fgets(t_age, A_LEN, stdin);
		age[i] = atoi(t_age);
		i++;
	}
	return i;	// 戻り値：実際に入力したデータ個数(人数)
}

// 出力関数
void output(char name[][N_LEN], int age[], int number){
	int i;

	printf("登録情報\n");
	printf("|----------------------------|\n");
	printf("|         名前        | 年齢 |\n");
	printf("|----------------------------|\n");
	for (i = 0; i < number; i++) {
		printf("|%-20s | %4d |\n", name[i], age[i]);
	}
	printf("|----------------------------|\n");
}
