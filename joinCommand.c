#include <stdio.h>

int a, b, c, d, e;

int main (){

	printf("Upisite dva broja: \n");
	scanf("%d,%d", &a, &b);
	c = a + b;
	d = c / a;
	e = c * a;
	printf("\n%d", c);
	printf("\n%d", d);
	printf("\n%d", e);
	printf("\n%d", d + e);

}