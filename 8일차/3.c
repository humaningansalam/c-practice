//���⿡ �ڵ带 �ۼ��ϼ��� 
#include<stdio.h>

int age, menu;

void Menu(void){
	printf("1.�����Է� \n");
    printf("2.������� \n");
    printf("3.���� \n");
}

void Input(void){
	printf("�����Է� :"); scanf("%d", &age);
}
void Output(void){
	printf("���� : %d \n", age);
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
