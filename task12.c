#include <stdio.h>

int main(){

	float a, b, p, o;
	printf("\n upišite dva broja: ");
	scanf("%f, %f", &a, &b);
	o = 2 * (a + b);
	p = a * b;
	printf("\n p = %.2f", p);
	printf("\n o = %2f", o);

}