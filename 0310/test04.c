//구조체 크기 계 산 
#include <stdio.h>
#include <stdlib.h>


struct student{
	int number;
	struct student *next;
};


int main(void){
	
	struct student s1 = {1, NULL};
	struct student s2 = {2, NULL};
	struct student *first = NULL;
	struct student *current = NULL;
	
	
	first = &s1;
	s1.next = &s2;
	s2.next = NULL;
	current = first;
	
	while(current != NULL){
		printf("%d", current -> number);
		current = current->next;
	}
	

	 
	
	return 0;
}
