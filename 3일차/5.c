//���⿡ �ڵ带 �ۼ��ϼ���. 
#include<stdio.h>

int main(void){

    int a, sum = 0;
    
    
    for(a=0; a<=50; a++){
    	if(a %3 ==0){
    		sum = sum + a;
		}
	}
	
	
	printf("3�ǹ���� �D : %d", sum);
	
	return 0;
}
