#include<stdio.h>

 
 
int main(void){
	int i = 100;
	int *p = &i;
	int **q = &p;
	
	printf(" %d" , i);
	
	*p = 200;
	printf(" %d" , i);
	**q = 300;
	printf(" %d" , i);
}
