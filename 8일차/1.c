//���⿡ �ڵ带 �ۼ��ϼ��� 
#include<stdio.h>

int age, menu;

int main(void){

    for(;;){
    	
    	printf("1.�����Է�");
    	printf("2.�������");
    	printf("1.����");
    	scanf("%d", &menu);
		 
    	if(menu == 1){
    		printf("�����Է� :"); scanf("%d", &age);
		}
    	if(menu == 2){
    		printf("���� : %d", age);
		}
		if(menu == 3){
    		break;
    		
		}
	}
	
	return 0;
}
