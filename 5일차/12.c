#include<stdio.h>

int main(void){


    double a, i, t = 1;
    double max =0;


    
    for(i=1; i<11; i++){
        max = max + 1/i;
	}

    printf("�� : %lf", max);
    
	return 0; 
}
