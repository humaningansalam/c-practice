//���⿡ �ڵ带 �ۼ��ϼ��� 
#include<stdio.h>

int age, menu;

void Menu(void){
	printf("1.�����Է� \n");
    printf("2.������� \n");
    printf("3.���� \n");
}


int main(void){

    for(;;){
    	Menu();
    	scanf("%d", &menu);
		 
    	if(menu == 1){
    		printf("�����Է� :"); scanf("%d", &age);
		}
    	if(menu == 2){
    		printf("���� : %d \n", age);
		}
		if(menu == 3){
    		break;
    		
		}
	}
	
	return 0;
}
