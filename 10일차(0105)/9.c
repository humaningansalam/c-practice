#include<stdio.h>

struct Point{
	int x;
	int y;
};

int main(void){
	struct Point p1 = {10,20}, p2 = {30,40};
	struct Point pp[2] = {{11,22},{34,47}};
	
	printf("%d %d \n", pp[0].x, pp[0].y);
	printf("%d %d \n", pp[1].x, pp[1].y);	

	printf("%d %d \n", p1.x, p1.y);
	printf("%d %d \n", p2.x, p2.y);	
	
	struct Point *ptr;
	ptr = &pp;
	
	printf("%d %d \n", ptr[0].x, ptr[0].y);
	printf("%d %d \n", ptr[1].x, ptr[1].y);
	
	printf("%d %d \n", (*(ptr+0)).x, (*(ptr+0)).y);
	printf("%d %d \n", (*(ptr+1)).x, (*(ptr+1)).y);
	
	printf("%d %d \n", (ptr+0)->x, (ptr+0)->y);
	printf("%d %d \n", (ptr+1)->x, (ptr+1)->y);
	
	return 0;
}
