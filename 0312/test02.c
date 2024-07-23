#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;

POINT translate(POINT a, POINT b){
	POINT newP;
	newP.x = a.x +b.x;
	newP.y = a.y + b.y;
	
	return newP;
}
int main(void){
	
	POINT p = {2,3};
	POINT d = {10,10};
	POINT r;
	
	r = translate(p,d);
	
	printf("%d", r.x);
	printf("%d", r.y);
	return 0;
}
