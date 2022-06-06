#include <stdio.h>
#include <string.h>	//オリジナル文字処理関数
//#include "./mystring.h"	//自作文字処理関数

int main(void){

	printf("文字列の長さ: %d\n", strlen("abcde"));
	printf("文字比較(abc:abc): %d\n", strcmp("abc", "abc"));
	printf("文字比較(aBc:ab): %d\n", strcmp("aBc", "ab"));
	printf("文字比較(abc:ab): %d\n", strcmp("abc", "ab"));

	/*
	printf("文字列の長さ: %d\n", mystrlen("abcde"));
	printf("文字比較(abc:abc): %d\n", mystrcmp("abc", "abc"));
	printf("文字比較(aBc:ab): %d\n", mystrcmp("aBc", "ab"));
	printf("文字比較(abc:ab): %d\n", mystrcmp("abc", "ab"));
	*/
	return 0;
}
