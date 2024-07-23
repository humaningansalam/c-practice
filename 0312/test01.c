#include <stdio.h>
#include <stdlib.h>
struct student{
	int number;
};

int main(void){
	
	struct student stu;
	
	stu.number = 1;
	
	printf("%d", stu.number);
	
	struct student *pS;
	pS = &stu;
	
	(*pS).number = 20;
	
	printf("%d", (*pS).number);

	
	return 0;
}
