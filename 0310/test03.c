//구조체 크기 계 산 
#include <stdio.h>
#include <stdlib.h>

struct student{

	int number;

};


int main(void){
	int i;
	
	struct student stu[3] = {{1004},{506
	},{607}};
	struct student *pS = NULL;
	
	pS = &stu;
	
	printf("%d", (*pS).number);
	
	for(i=0; i<3; i++){
		printf("%3d", (*(pS+i)).number);
		printf("%3d", (pS+i)->number);
	}
	
	 
	
	return 0;
}
