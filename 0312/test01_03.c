#include <stdio.h>
#include <stdlib.h>
struct student{
	int number;
	char name[20];
	double grade;
};

struct student list[3]={
	{111, "È«±æµ¿", 4.2},
	{222, "ÀÌÇÑ³ª", 3.2},
	{333, "±èµÎ³ª", 4.5}

};

int main(void){
	
	int i; 
	struct student sS;
	
	int size = sizeof(list)/sizeof(struct student);
	
	sS = list[0];
	
	for(i=0; i<size; i++){
		if(list[i].grade > sS.grade){
			sS = list[i];
		}
	}
	
	printf("%d \n", sS.number);
	printf("%s \n", sS.name);
	printf("%f \n", sS.grade);


	
	return 0;
}
