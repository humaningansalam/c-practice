#include<stdio.h>

struct student{
	int number;
	char name[20];
	double grade;
};

int main(void){
	struct student list[100];
	
	list[2].number = 27;
	strcpy(list[2].name, "ȫ�浿");
	list[2].grade = 178.0; 
	
	
	printf("%s",list[2].name);
	return 0;
}
