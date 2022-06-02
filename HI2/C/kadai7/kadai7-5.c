#include<stdio.h>
void drawrect(int h, int w, char c){
	int i,j;
	for(i=0; i<h;i++){
		for(j=0; j<w;j++){
			printf("%c",c);
		}
		putchar('\n');
	}
}
void drawrect2(int h, int w, char c){
	int i,j;
	for(i=0; i<h;i++){
		for(j=0;j<w;j++){
			printf("%c",c);
			}
		putchar('\n');
		}
}

int main(void){
	drawrect(4,3,'@');
	drawrect(2,4,'#');

	return 0;
}
