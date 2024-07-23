//여기에 코드를 작성하세요. 
#include<stdio.h>

int main(void){

    int a, sum = 0;
    
    
    for(a=0; a<=50; a++){
    	if(a %3 ==0){
    		sum = sum + a;
		}
	}
	
	
	printf("3의배수의 핪 : %d", sum);
	
	return 0;
}
