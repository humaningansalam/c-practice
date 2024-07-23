# include<stdio.h>
#define SIZE 5
int main(void){
	int i, cnt =0;
	
	
	int array1[SIZE] = {1,2,3,4,5};
	int array2[SIZE] = {1,3,3,4,5};
	

	for(i=0; i<SIZE; i++){
		if( array1[i]!=array2[i] ){
		printf("다르다");
		break; 
	   	}
	   	else{
	   	cnt++;	
		}
	}	

	if(cnt == SIZE){
	    printf("같다"); 
	}

	
	return 0;
}

