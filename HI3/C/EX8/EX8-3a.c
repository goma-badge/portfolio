#include <stdio.h>
#include <string.h>

#define MAX_N 100
#define N_LEN 20
#define A_LEN 4

typedef struct person {
	char name[N_LEN];	//名前
	int age;			//年齢
} Person;

// 関数プロトタイプ宣言
int input(Person [],  int );
void output(Person [],  int );
void sort_age(Person [], int);
void sort_name(Person [], int);

void swap(Person *a,Person *b){
	Person tmp;

	tmp=*a;
	*a=*b;
	*b=tmp;
}


int main(void) {

	Person data[MAX_N];


	int member;	//登録人数管理用


	member = input(data, MAX_N);	//登録人数をmemberに返す
	output(data, member);			//登録情報の表示
	sort_age(data,member);			//年齢順（昇順)に並び替え
	output(data, member);			//登録情報の表示(並び替えの確認)
	sort_name(data,member);		//名前のアルファベット順に並び替え
	output(data, member);			//登録情報の表示(並び替えの確認)
	
	return 0;
}

// 入力関数
int input(Person data[], int max_N){
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
		strcpy(data[i].name, t_name); // 文字列の代入はできません　X name[i] = t_name;

		printf("年齢:"); fgets(t_age, A_LEN, stdin);
		data[i].age = atoi(t_age);
		i++;
	}
	return i;	// 戻り値：実際に入力したデータ個数(人数)
}



// 出力関数
void output(Person data[], int number){
	int i;

	printf("登録情報\n");
	printf("|----------------------------|\n");
	printf("|         名前        | 年齢 |\n");
	printf("|----------------------------|\n");
	for (i = 0; i < number; i++) {
		printf("|%-20s | %4d |\n", data[i].name, data[i].age);
	}
	printf("|----------------------------|\n");
}

void sort_age(Person data[], int number){
	int i,j;
	for(i=0; i<number-1; i++){
		for(j=i+1; j<number; j++){
			if(data[i].age<data[j].age){
				swap(&data[i],&data[j]);
			}
		}
	}
	printf("\n年齢の高い順に並べ替え\n");
}

void sort_name(Person data[],int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(strcmp(data[i].name,data[j].name)>0){
				swap(&data[i],&data[j]);
			}
		}
	}
	printf("\nアルファベットの早い順に並べ替え\n");
}
