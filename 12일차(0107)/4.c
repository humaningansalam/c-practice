#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int iidd = 1234;
int ppww = 4567;
int count = 0;

int main(void){
	int i, j;
    int id, pw;
	
	for(;;){
		if(count > 2){
			printf("로그인 3번 이상 실패!! \n");
			break;
		}
	
	
		printf("아이디"); scanf("%d", &id);
		printf("비밀번호"); scanf("%d", &pw);
		
		if(id == iidd && pw == ppww){
			printf("로그인 성공 \n");
			break;
		}
	    
		if(!(id == iidd && pw == ppww)){
			count++;
	    	printf("실패하셧습니다 남은횟수 %d \n",3-count);
		} 

	}
	
	
	return 0;
}
