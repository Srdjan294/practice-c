#include <stdio.h>

int main(){
	
	int t;
	int b = 10;
	int c = 12;
	int a = (t = b + c) + 20;
	
	printf("%d", a);

}