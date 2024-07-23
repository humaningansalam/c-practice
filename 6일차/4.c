#include<stdio.h>
#define SIZE 10
int main(void){
	int key, i, t=0;
	int list[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	printf("[");
	for(i=0; i<SIZE; i++){
		printf("%5d", list[i]);
	}
	printf("]\n");
	
	printf("탐색할 값을 입력하시오 :");
	scanf("%d", &key);
	
	for(i=0; i<SIZE; i++){
		if(key == list[i]){
		    printf("탐색 성공 인덱스 = %d" ,t);	
		    break;
		} 
		t++;
	} 
	
	
	return 0;
}
