//구조체 크기 계 산 
#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	struct student *next;
};

int main(void){
	//s2 > s1 > s4> s3
	struct student s1 = {1, NULL};
	struct student s2 = {2, NULL};
	struct student s3 = {3, NULL};
	struct student s4 = {4, NULL};
	struct student s5 = {5, NULL};
	struct student *first = NULL;
	struct student *current = NULL;
	
		
	first = &s5;
	s5.next = &s2;
	s2.next = &s1;
	s1.next = &s4;
	s4.next = &s3;
	s3.next = NULL;
	current = first;
	
	while(current != NULL){
		printf("%d", current -> number);
		current = current->next;
	}
	
	
	return 0;
}
