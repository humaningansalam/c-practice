//여기에 코드를 작성하세요. 
#include<stdio.h>

int main(void){

    int a,sum = 0;
    
    for(a=0; a<=50; a++){
    	sum = sum + a;
	}
	
	printf("1에서 50까지 수의 합계: %d",sum);
	
	return 0;
	
}
