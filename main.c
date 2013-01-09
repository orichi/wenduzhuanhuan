/*
 ===========================================================================
 Name        : 温度转换.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
int convert(int fahr);
int main(){
	int i;
	for(i=0; i<=300;i+=20)
		printf("%d\t\t%d\n", i, convert(i));
	return 0;
}
int convert(int fahr){
	return (fahr-32)*5/9;
}
