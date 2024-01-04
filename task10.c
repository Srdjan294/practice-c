#include <stdio.h>

int x, y;

int main(){

	y = 1;
	x = ++y + 2;
	y = 1;
	x = (y++) + 2;
	printf("%d,%d", x,y);

}