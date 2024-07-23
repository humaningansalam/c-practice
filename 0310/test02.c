#include <stdio.h>
#include <stdlib.h>


struct student{

	int number;

};


int main(void){
	
	struct student stu[5];
	int i;
	
	int size = sizeof(stu)/sizeof(struct student);
	printf("%d", size);
	for(i=0; i<5; i++){
		stu[i].number = i+1;
		printf("%3d", stu[i].number);
	}

	
	return 0;
}
