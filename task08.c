#include<stdio.h>

int a = 13;
int b = 13;

int main(){

	a+=b;
	printf("%d", a);
	a = 13;
	b%=a-3;
	printf("\n%d", b);

}