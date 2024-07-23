#include<stdio.h>

int main(void){


    int i, t = 1;

    
    for(i=1; i<101; i++){
    	if(i%2 == 0){
    	    printf("%3d", i);
    	    
    	    /*
			if(t%10 == 0){
				printf("\n"); 
			} 
			t++;
			*/	
		} 
		
		if(i%20 == 0){
    	    printf("\n");
    	}
	}

	return 0; 
}
