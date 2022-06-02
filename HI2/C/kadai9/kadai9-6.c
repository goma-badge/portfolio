#include<stdio.h>

int getnextday(int month, int day, int *nmonth, int *nday) {
	switch(month){

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		if(day == 31){
			*nmonth=month+1;*nday=1;
			return 1;
		}else if(day > 31){
			return -1;
		}else{
			*nday = day+1;*nmonth=month;
			return 1;
		}

	case 4:
	case 6:
	case 9:
	case 11:
		if(day == 30){
			*nmonth=month+1;*nday=1;
			return 1;
		}else if(day >30){
			return -1;
		}else{
			*nday = day+1;*nmonth=month;
			return 1;
		}

	case 12:
		if(day == 31){
			*nmonth = 1;*nday = 1;
			return 1;
		}else if(day > 31){
			return -1;
		}else{
			*nday = day+1;
			return 1;
		}	

	case 2:
		if(day == 28){
			*nmonth = month+1;*nday =1;
			return 1;
		}else if(day > 28){
			return -1;
		}else{
			*nday=day+1;*nmonth=month;
			return 1;
		}
	default:
			return -1;
	}
}
int main(void) {
	int m, d, nm, nd, ret;
	while(1) {
	printf("日付を入力してください: ");
	scanf("%d/%d", &m, &d);

	ret = getnextday(m, d, &nm, &nd);
	if(ret<0)
		puts("不正な値です。");
	else
		printf("翌日は%d月%d日です。\n", nm, nd);

	}
	return 0;
	
}
