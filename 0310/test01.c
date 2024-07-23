#include <stdio.h>
#include <stdlib.h>
struct student{
	int number;
	char name[10];
};

int main(void){
	
	struct student stu;
	
	stu.number = 1;
	strcpy(stu.name, "ȫ�浿");
	
	printf("%d", stu.number);
	printf("%s", stu.name); 
	
	return 0;
}
