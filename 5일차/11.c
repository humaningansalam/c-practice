#include<stdio.h>

int main(void){


    int a, i, t = 1;
    int max;
    printf("숫자 입력 : ");
    scanf("%d", &a);

    
    for(i=1; i<(a+1); i++){
    	if(i%7 == 0){
    	    max = i;
		} 
	}

    printf("최대값 : %d", max);
    
	return 0; 
}
