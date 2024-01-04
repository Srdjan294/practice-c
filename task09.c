#include <stdio.h>

int a = 12;

int main(){

	int b=a++;
	printf("%d,%d", a, b);   //13, 12
	
	a = 12;
	b=++a;
	printf("\n%d,%d", a, b);  //13, 13	
}