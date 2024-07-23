#include<stdio.h>

int main(void){
	int ee[5][5];
	int i, j, t=4;
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
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if((i+j)%2 == 1){
                add += ee[i][j];	
			}
			else{
				ee[i][j] = 0;
			}
			printf("%3d", ee[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("%3d", add);
	
	return 0;
}
