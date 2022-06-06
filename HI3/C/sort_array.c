#include <stdio.h>

#define N 1000

void input(int [], int);
void print(int [], int);
int menu(int [], int);
void up_sort_h(int [], int);


void print(int data[], int n){
	int i;
	for (i=0; i<n; i++) printf("%4d",data[i]);
	printf("\n");
}

void input(int data[], int n){
	int i;
	for (i=0; i<n; i++) scanf("%4d",&data[i]);
}

int menu(int data[], int n){

	int m_tmp;
	printf("================= Sorting Menu =============\n");
	printf("    1:  身長順(高い順)   2:身長順(低い順) \n");
	printf("    3:  体重順(重い順)   4:体重順(軽い順) \n");
	printf("    5:  名前順(昇順)     6:名前順(降順) \n");
	printf("    0:  プログラム終了\n");
	printf("================= Sorting Menu =============\n");
	scanf("%d", &m_tmp); printf("\n");

	switch (m_tmp){
		case 1 : printf("----- 身長順(高い順)に整列 ------\n");
		    	 //up_sort_h(data,n);
				 print(data, n);
				 break;
		case 2 : printf("----- 身長順(低い順)に整列 ------\n");
				 break;
		case 3 : printf("----- 体重順に整列 ------\n");
				 break;
		case 0 : break;
		default: break;
	}
	return m_tmp;
}
int main(void) {
	int data[N],n;

	printf("入力するデータ個数を入力: ");
	scanf("%d", &n); printf("\n");
	
	input(data, n);
	print(data, n);

	while (menu(data, n) != 0) ;

	return 0;
}
