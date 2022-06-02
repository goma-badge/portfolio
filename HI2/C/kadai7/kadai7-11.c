#include<stdio.h>
int main(void){
	int num;
	char result[255];
	int i,w=0;
	while(1){
		printf("10進数の整数を入力してください:");
		scanf("%d",&num);
		if(num<=0||num>=65535){
			printf("0から65535までの値のみ受け付けます.\n");
			continue;
		}else{
			while(num!=0){
				if(num%2==1){
					result[i]='1';
				}else{
					result[i]='0';
				}
				num=num/2;
				i++;
			}
		}
		while(i>=0){
			printf("%c",result[i]);
			i--;
		}
		putchar('\n');
		return 0;
	}
}
