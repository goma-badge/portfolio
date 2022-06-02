#include<stdio.h>
void sort3(int *p1, int *p2, int *p3){
	if(*p1 > *p2) swap(p1,p2);
	if(*p2 > *p3) swap(p2,p3);
	if(*p1 > *p2) swap(p1,p2);
}
void swap(int *px ,int *py){
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main(void){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	sort3(&x,&y,&z);
	printf("%d %d %d\n",x,y,z);
	return 0;
}
