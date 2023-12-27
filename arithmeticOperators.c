#include <stdio.h>

int main(){

	printf("\n%d", 5+2);
	printf("\n%d", 5-2);
	printf("\n%d", 5*2);
	printf("\n%d", 5/2);
	printf("\n%d", 5%2);
	printf("\n---------------");
	printf("\n%d", 5+2);
	printf("\n%d", (5+2)/3);
	printf("\n%d", (5+2)*3);
	printf("\n%d", ((5+2)/3)+((5+2)*3));
	printf("\n---------------");
	printf("\n%d", 20%3);
	printf("\n%d", 9*7/5%8);
	printf("\n%d", 12*5+9/3);

	int a = 2;
	int b = 5;
	int c = 6;
	printf("\n%d", a+b*c-a%b);
	
	int a2 = 13;
	int b2 = 10;
	int c2 = 5;
	printf("\n%d", a2+b2*c2-a2%b2);	
	 

}