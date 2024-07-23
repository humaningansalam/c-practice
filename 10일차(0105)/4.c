#include<stdio.h>


int main(void){
	char input;
	
	while(1){
		input =getchar();
		
		if(input == '.'){
			break;
		}
		
		if(input >= 'a' && input <= 'z'){
			input = input + 'A'-'a';
		}
		
		putchar(input);
	}
	
	printf("프로그램을 종료합니다. \n");
	

	return 0;
}
