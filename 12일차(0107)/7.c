#include<stdio.h>

int main(void){
	
	int i;
	
	char menu[5][10] = {
		"init",
		"open",
		"close",
		"read",
		"write"
	};
	
	for(i=0; i<5; i++){
		printf("%s \n", menu[i]);
	}
	
	printf("\n");
	
	char *p[3] = {"aaa","bbb","ccc"};
	
	for(i=0; i<3; i++){
		printf("%s \n", p[i]);
	}
	
	
	return 0;
}
