#include<stdio.h>

typedef struct Student{
	int numbre;
	char name[10];
	double grade;
}Student;

int main(void){
	int a;
	Student stu;
	Student tmpstu;
	 
	for(;;){
		printf("1.�Է� ");
		printf("2.��� ");
		printf("3.���� ");
		printf("4.�� ");
		scanf("%d", &a);
		
		if(a == 1){
		    printf("�й� : "); scanf("%d", &stu.numbre); 
	        printf("�̸� : "); scanf("%s", &stu.name); 
	        printf("���� : "); scanf("%lf", &stu.grade); 
			
		}
		if(a == 2){
		   	printf("�й� :%d \n", stu.numbre); 
	        printf("�̸� : %s \n", stu.name); 
	        printf("���� : %lf \n", stu.grade); 
			
		}
		if(a == 3){
		    printf("�й� : "); scanf("%d", &tmpstu.numbre); 
	        printf("�̸� : "); scanf("%s", &tmpstu.name); 
	        printf("���� : "); scanf("%lf", &tmpstu.grade); 
	        
	        stu = tmpstu;
	        //stu.numbre = tmpstu.numbre;
	        //strcpy(stu.name, tmpstu.name);
	        //stu.grade = tmpstu.grade;
		}
		if(a == 4){
		    break;
			
		}
	}

	
	return 0;
}
