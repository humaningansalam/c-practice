#include<stdio.h>

int main(void){


    int a, i, t = 1;
    double max =0;


    
    for(i=1; i<101; i++){
        max = max + i;
        
        if(i%10 == 0) printf("%lf \n",max);
	}

	return 0; 
}
