#include<stdio.h>

//v = *p++ : p가 가리키는 값을 v에 대입한 후 p를 증가
//v = (*p)++ : p가 가리키는 값을 v에 대입한 후에 p가 가리키는 값을 증가
//v = *++p : p를 증가시킨 후에 p가 가리키는 값을 v에 대입
//v = ++*p : p가 가리키는 값을 가져온 후에 그 값을 증가하여, v에 대입 
void print_reverse(int a[], int size){
	int *pA = NULL;
	pA = a;
	int i;
	
	for(i=size; i>0; i--){
		printf("%3d", pA[(i-1)]);
	}
	
	i=4;
	
	while(i>-1){
		
		printf("%3d", pA[(i)]);
		i--;
	}
	
}

int main(void){
	
	int a[5] = {10,20,30,40,50};   //배열 --> 포인터 
	
	print_reverse(a, 5); 
	return 0;
}
