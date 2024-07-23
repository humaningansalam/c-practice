#include<stdio.h> 

int main(void){
    int n,s;
    int sum =0;
    
    for(n=0; n<=100; n++){
    	if(n%2 == 1){
    		sum = sum + n;
		}
		if(n%2 == 0){
			sum = sum - n;
		}
	}
    printf("%d", sum);
    
    sum =0;
    n =0;
    for(n=1; n<=100; n++){
          sum = sum+n;
          n++;
          sum = sum-n;
	}
    printf("%d", sum);
    return 0;
}
