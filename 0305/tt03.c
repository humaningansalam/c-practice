
#include <stdio.h>  //계산기 

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
	
	int a,b;
	char c; 
	
	printf("계산할 값 입력");
	scanf("%d %s %d", &a, &c, &b);
	
	if(c=='+'){
		printf("%d", add(a,b));
	} 
	if(c=='-'){
		printf("%d", sub(a,b));
	} 
	if(c=='*'){
		printf("%d", mul(a,b));
	} 
	if(c=='/'){
		printf("%d", div(a,b));
	} 
	return 0;
	
} 

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}
	
int div(int a, int b){
	return a/b;
}



