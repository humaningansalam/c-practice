#include <stdio.h>

typedef struct student{
	char name[20];
	int age;
}STUDENT;

void input(STUDENT s[], int size){
	int i;
	
    for(i=0; i<size; i++){
        printf("이름 선택:"); scanf("%s", &s[i].name);
	    printf("나이 선택:"); scanf("%d", &s[i].age);	
	}


}


int main(void){
	
	STUDENT s[3];
	int i;
	int size = sizeof(s)/sizeof(struct student);
	
	input(s,size);
	
	for(i=0; i<size; i++){
		printf("%s  %d \n", s[i].name, s[i].age);
	}

	return 0;
}
