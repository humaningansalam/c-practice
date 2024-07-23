
#include <stdio.h> 

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

struct Calc{
	int (*fp)(int, int);
};
int main(){
	
	struct Calc c;
	c.fp = add;
	printf("%d",c.fp(10,20));
	
	return 0; 
} 



