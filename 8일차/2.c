//여기에 코드를 작성하세요 
#include<stdio.h>

int age, menu;

void Menu(void){
	printf("1.정보입력 \n");
    printf("2.정보출력 \n");
    printf("3.종료 \n");
}


int main(void){

    for(;;){
    	Menu();
    	scanf("%d", &menu);
		 
    	if(menu == 1){
    		printf("나이입력 :"); scanf("%d", &age);
		}
    	if(menu == 2){
    		printf("나이 : %d \n", age);
		}
		if(menu == 3){
    		break;
    		
		}
	}
	
	return 0;
}
