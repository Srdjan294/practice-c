#include <stdio.h>

int a, b;

int main(void){

	printf("\nUpisite dva broja: ");
	scanf("%d, %d", &a, &b);
	printf("\n%d", a+b);
	printf("\n%d", (a+b)/a);
	printf("\n%d", (a+b)*a);
	printf("\n%d", ((a+b)/a)+((a+b)*a));

}