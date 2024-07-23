#include<stdio.h>


int main(void){
	
	int a[5] = {1,2,3,4,5};
	int *p = NULL;
	
	p = a;
	
	int i;
	
	for(i=0; i<5; i++){
		printf("%d", p[i]);
		printf("%d", *(p+i));
	}
	return 0;
}
