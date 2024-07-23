#include<stdio.h>
#include<string.h>
 
 
int main(void){
	int i;
	char c[] = "abbd";     //배열 
	c[2] = 'c';
	printf("%s", c);
	
	/*
    char *pC = "abbd";     //포인터  통으로 바꿔야함 
    pC[2] = 'c';
    printf("%s", pC);
    */
    
    char *pC = "abbd";     //포인터
    pC = "test";
    printf("%s", pC);
	return 0;
}
