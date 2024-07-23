//여기에 코드를 작성하세요 
#include<stdio.h>

int age, menu;

void Menu(void){
	printf("1.정보입력 \n");
    printf("2.정보출력 \n");
    printf("3.종료 \n");
}

void Input(void){
	printf("나이입력 :"); scanf("%d", &age);
}
void Output(void){
	printf("나이 : %d \n", age);
}

int main(void){

    for(;;){
    	Menu();
    	scanf("%d", &menu);
		 
    	if(menu == 1){ Input();
		}
    	if(menu == 2){ Output();
		}
		if(menu == 3){  break;   		
		}
	}
	
	return 0;
}
