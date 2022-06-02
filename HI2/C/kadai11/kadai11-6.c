#include<stdio.h>
#include<time.h>

int main(void){
time_t csec= time(NULL);
struct tm *timeinfo=localtime(&csec);
printf("現在%d年%d月%d日の%d時%d分%d秒です。\n",timeinfo->tm_year+1900,timeinfo->tm_mon+1,timeinfo->tm_mday,timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec);

return 0;
}
