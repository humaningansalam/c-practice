//여기에 코드를 작성하세요. 
#include<stdio.h>

int main(void){
	int a, t;
	int kor[5], mat[5], eng[5]; 
	
	char c[5];
	
	for(;;){
		
		printf("1. 이름과 성적을 입력 ");
		printf("2. 이름과 성적을 출력 ");
		printf("3. 각 학생들의 총점 ");
		printf("4. 프로그램 종료 ");
		scanf("%d", &a); 
		
		if(a == 1){
			
			for(t=0; t<5; t++){
				printf("%d번째  이름과 국 영 수 성적입력", t+1);
			    scanf(" %c %d %d %d", &c[t], &kor[t], &eng[t], &mat[t]);	
			}			

	    }	
	
		if(a == 2){
			for(t=0; t<5; t++){
				printf("이름: %c 국: %d 영: %d 수: %d \n", c[t], kor[t], eng[t], mat[t]);
			}

	    }
	    
		if(a == 3){
			
			for(t=0; t<5; t++){
				printf("이름: %d 총점: %d \n", c[t], kor[t] + eng[t] + mat[t]);
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
