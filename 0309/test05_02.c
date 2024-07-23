#include<stdio.h>
#include<string.h>
 
 
int main(void){
	int i;
	char str[] = "hello";;
	
	strcpy(str, "hanna");
	
	printf("%s", str);
	
	char *p = "hi~~";
	p = "bye!!!";
	printf("%s", p);
	
	return 0;
}
