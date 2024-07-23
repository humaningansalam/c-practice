
#include <stdio.h> 

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

int main(){
	
	void (*fp)(int, int);

	int a,b,d;
	char c; 
	
	printf("계산할 값 입력");
	scanf("%d %s %d", &a, &c, &b);
	
	if(c=='+'){
		fp = add;
	} 
	if(c=='-'){
		fp = sub;
	} 
	if(c=='*'){
		fp = mul;
	} 
	if(c=='/'){
		fp = div;
	} 
	
	d = fp(a, b);
	printf("%d" d)

	return 0; 
} 


