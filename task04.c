#include <stdio.h>

int main(){
	
	int a, b, c, d, e, f;
	double x, y;
	printf("\nUnesite 6 brojeva: ");
	scanf("%d,%d,%d,%d,%d,%d", &a, &b, &c, &d, &e, &f);
//	ax+by=e
//	cx+dy=f
//	x = (e-by)/a		y = (e - ax)/b
//	x = (f-dy)/c		y = (f - cx)/d
//	(e-by)/a = (f-dy)/c	(e-ax)/b = (f-cx)/d
//	e/a - by/a = f/c - dy/c		e/b - ax /b = f/d - cx/d
//	dy/c - by/a = f/c - e/a		cx/d-ax/b = f/d-e/b
//	y(d/c - b/a) = f/c - e/a	x(cd - ab) = f/d - e/b
	x = (f/d - e/b)/(c/d - a/b);
	y = (f/c - e/a)/(b/a - d/c);
	printf("%f,%f", x,y);		
}