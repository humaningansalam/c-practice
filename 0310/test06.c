//구조체 크기 계 산 
#include <stdio.h>
#include <stdlib.h>

struct Book{
	int number;
};

int main(void){
	
	struct Book *p;
	
	p = (struct Book*)malloc(2*sizeof(struct Book));
	
	if(p == NULL){
		exit(1);
	}
	
	p[0].number = 1;
	p[1].number = 2;
	
	printf("%d", p[0].number);
	printf("%d", p[1].number);
	
	free(p);
	 
	
	return 0;
}
