#include <stdio.h>

typedef struct student{
	char name[20];
	int age;
}STUDENT;

void input(STUDENT s[], int size){
	int i;
	
    for(i=0; i<size; i++){
        printf("�̸� ����:"); scanf("%s", &s[i].name);
	    printf("���� ����:"); scanf("%d", &s[i].age);	
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
