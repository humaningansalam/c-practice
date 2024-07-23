#include<stdio.h> 

int main(void){
    int n =0;
	int sw =1;
    int sum = 0;
    
    for(n=0; n<=100; n++){
    	if(sw == 1){
    		sum = sum + n;
		}
		else if(sw == -1){
			sum = sum - n;
		}
		sw = -sw;
	}
	
    printf("%d", sum);
    

    return 0;
}
