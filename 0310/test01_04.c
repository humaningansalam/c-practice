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
    	printf("같다");
	}
	else{
		printf("다르다"); 
	}
    
    printf("%d", s1.number);
    printf("%s", s1.name);
	return 0;
}
