#include <stdio.h>

int main(){

	int xyz = 462, x, y, z;
	x = xyz / 100;
	y = xyz % 100 / 10;
	z = xyz % 10;
	printf("\n %d, %d, %d, %d", x, y, z, x+y+z); 

}