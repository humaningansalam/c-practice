//���⿡ �ڵ带 �ۼ��ϼ���. 
#include<stdio.h>

int main(void){

    int a, sum = 0;
    
    
    for(a=0; a<=20; a++){
    	if(a %2 ==0){
    		sum = sum + a;
		}
	}
	
	
	printf("¦���� �D : %d", sum);
	
	return 0;
}
