#include <stdio.h>
#include <stdlib.h>

struct date{
	int month;
	int day;
};


struct student{

	int number;
	struct date dd;
	char name[10];
};


int main(void){
	
	struct student stu;
	
	stu.number = 1;
	strcpy(stu.name, "ȫ�浿");
	stu.dd.day = 10;
	
	printf("%d", stu.number);
	printf("%s", stu.name); 
	printf("%d", stu.dd.day); 
	
	return 0;
}
