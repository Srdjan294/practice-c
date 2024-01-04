#include <stdio.h>

int x = 3;
int y = 2;
int z = 5;

int main(){
	
//	x*=(y+z)+3;	
	x=x*((y+z)+3);
	printf("%d", x);

}