//여기에 코드를 작성하세요. 
#include<stdio.h>

typedef struct Student{
	char name[10];
	int kor;
	int mat;
	int eng;	
}Student;

int main(void){
	
	Student st[5];
	
	int a, t;

	
	for(;;){
		
		printf("1. 이름과 성적을 입력 ");
		printf("2. 이름과 성적을 출력 ");
		printf("3. 각 학생들의 총점 ");
		printf("4. 프로그램 종료 ");
		scanf("%d", &a); 
		
		if(a == 1){
			
			for(t=0; t<5; t++){
				printf("이름 입력");
			    scanf("%s", &st[t].name);
				printf("국어 입력");
			    scanf("%s", &st[t].kor);
				printf("영어 입력");
			    scanf("%s", &st[t].eng);
				printf("수학 입력");
			    scanf("%s", &st[t].mat);	
			}			

	    }	
	
		if(a == 2){
			for(t=0; t<5; t++){
				printf("이름: %s 국: %d 영: %d 수: %d \n", &st[t].name, &st[t].kor, &st[t].eng, &st[t].mat);
			}

	    }
	    
		if(a == 3){
			
			for(t=0; t<5; t++){
				printf("이름: %s 총점: %d \n", &st[t].name, &st[t].kor, &st[t].eng, &st[t].mat);
			}

	    }		
		if(a == 4){
            printf("종료 \n");
			break; 
	    }
	}
    printf("프로그램이 정상 종료하였습니다. \n");
	return 0;
}
