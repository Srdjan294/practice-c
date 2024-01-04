#include <stdio.h>
#define pi 3.14159

int r;
float o,p;

int main(){

	printf("\nUpišite polumjer kruga: ");
	scanf("%d", &r);
	o = 2 * r * pi;
	p = r * r * pi;
	printf("Opseg danog kruga je %f, a površina %f", o, p);

}