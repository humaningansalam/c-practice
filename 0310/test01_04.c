#include <stdio.h>
#include <stdlib.h>
struct student{

	int number;
	char name[10];
};


int main(void){
	
	struct student s1 = {1, "hanna"};
	struct student s2 = {1, "hanna"};

    if((s1.number == s2.number) && (strcmp(s1.name, s2.name) == 0)){
    	printf("����");
	}
	else{
		printf("�ٸ���"); 
	}
    
    printf("%d", s1.number);
    printf("%s", s1.name);
	return 0;
}
