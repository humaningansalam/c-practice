#include<stdio.h>

 
 
int main(void){
	int i;
	char str[4] = {'a', 'b', 'c'};
	
	i=0;
	while(str[i] != '\0'){
		printf("%c", str[i]);
		i++;
	}
	return 0;
}
