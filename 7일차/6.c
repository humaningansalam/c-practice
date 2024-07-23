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
		printf("1.입력 ");
		printf("2.출력 ");
		printf("3.수정 ");
		printf("4.끝 ");
		scanf("%d", &a);
		
		if(a == 1){
		    printf("학번 : "); scanf("%d", &stu.numbre); 
	        printf("이름 : "); scanf("%s", &stu.name); 
	        printf("학점 : "); scanf("%lf", &stu.grade); 
			
		}
		if(a == 2){
		   	printf("학번 :%d \n", stu.numbre); 
	        printf("이름 : %s \n", stu.name); 
	        printf("학점 : %lf \n", stu.grade); 
			
		}
		if(a == 3){
		    printf("학번 : "); scanf("%d", &tmpstu.numbre); 
	        printf("이름 : "); scanf("%s", &tmpstu.name); 
	        printf("학점 : "); scanf("%lf", &tmpstu.grade); 
	        
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
