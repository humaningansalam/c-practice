#include<stdio.h> 

int main(void){
    int i;
    int sum;
    
    for(i=0; i<=100; i+=2){
    	sum = sum + i;
	}
    printf("%d", sum);
    

    return 0;
}
