//여기에 코드를 작성하세요 
#include<stdio.h>

int age, menu;

int main(void){

    for(;;){
    	
    	printf("1.정보입력");
    	printf("2.정보출력");
    	printf("1.종료");
    	scanf("%d", &menu);
		 
    	if(menu == 1){
    		printf("나이입력 :"); scanf("%d", &age);
		}
    	if(menu == 2){
    		printf("나이 : %d", age);
		}
		if(menu == 3){
    		break;
    		
		}
	}
	
	return 0;
}
