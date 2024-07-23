#include<stdio.h>

int main(void){


    int a, i, t = 56;


    
    for(;;){
    	printf("정답을 추측해 보세요 : ");
    	scanf("%d", &a);
		
		if(a == t){
			break;
		}
        else if(a != t){
        	if(a > t){
        		printf("정답 보다 큽니다.");
			}
			else if(a < t){ 
				printf("정답 보다 작습니다.");
			}
			else{
				printf("알 수 없음.");
			}
	    }
		else{
			printf("알 수 없음.");
		} 
        i++;
    }
    printf("축하합니다 시도횟수 : %d", i+1);
    
	return 0; 
}
