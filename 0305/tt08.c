
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
	
	int (*fp[4])(int, int);

	int a=10,b=4;
	int c;
	
	printf("�����ڸ� �����ϼ��� 1.�� 2.�� 3.�� 4.����\n");
	scanf("%d", &c); 
	
	fp[0] = add;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = div;
	
	printf("%d", fp[c-1](a, b));

	return 0; 
} 



