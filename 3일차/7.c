//���⿡ �ڵ带 �ۼ��ϼ���. 
#include<stdio.h>

int main(void){

    int a, sum = 0 ;
    
    for(a=1; a<=50; a++){
    	if(a %3 == 0){
    		sum = sum + 1;
		}
	}
	
	printf("%d", sum);
	return 0;
}
