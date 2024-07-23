//구조체 크기 계 산 
#include <stdio.h>
#include <stdlib.h>

struct date{
	int day;
};

struct student{
	int number;
	int age;
	struct date d;
};


int main(void){
	int i;
	
	struct student s;
	s.number = 1;
	s.age = 20;
	s.d.day = 2;
	
	struct student *pS = NULL;
	pS = &s;
	
	printf("%d \n", s.number);
	printf("%d \n", s.age);
	printf("%d \n", s.d.day);
	
	
	printf("%d \n", (*pS).number);
	printf("%d \n", (*pS).age);
	printf("%d \n", (*pS).d.day);
	
	printf("%d \n", pS->number);
	printf("%d \n", pS->age);
	printf("%d \n", pS->d.day);
	

	 
	
	return 0;
}
