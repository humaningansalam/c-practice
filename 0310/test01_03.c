#include <stdio.h>
#include <stdlib.h>
struct student{

	int number;
	char name[10];
};


int main(void){
	
	struct student s1 = {1, "hanna"};
	struct student s2 = {2, "danna"};

    s1 = s2;
    
    printf("%d", s1.number);
    printf("%s", s1.name);
	return 0;
}
