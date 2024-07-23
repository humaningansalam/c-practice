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
	double tmpg = -1;
	struct student *sS;
	
	
	for(i=0; i<3; i++){
		printf("%d \n", list[i].number);
		printf("%s \n", list[i].name);
		printf("%f \n", list[i].grade);
		if(tmpg < list[i].grade) sS = &list[i];
	}
	
	printf("%d \n", (*sS).number);
	printf("%s \n", (*sS).name);
	printf("%f \n", (*sS).grade);


	
	return 0;
}
