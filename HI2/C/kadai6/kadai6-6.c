#include<stdio.h>
#include<time.h>
	
int showtime(int n){
	time_t timer;
	struct tm *date;
		timer = time(NULL);
		date = localtime(&timer);
		puts(asctime(date));
	return n;
}
int main(void){
int n;
	showtime(n);

return 0;
}
