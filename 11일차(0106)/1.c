#include<stdio.h>

int main(void){
	int ee[5][5];
	int i, j, t=0;
	int tmp = 1;
	int add = 0;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			ee[i][j] = tmp;
			printf("%3d", ee[i][j]);
			tmp++;
		}
		printf("\n");
	}
	printf("\n");
	
/*
	for(i=4; i>-1; i--){
		for(j=4; j>t; j--){
			printf("%3d", ee[i][j]);
            add += ee[i][j];
		}
		t++;
		printf("\n");
	}
*/
	

	for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i+j>5) add+=ee[i][j];
        }
    }
 
    
	printf("\n");
	
	printf("%3d", add);
	
	return 0;
}
