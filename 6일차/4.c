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
	
	printf("Ž���� ���� �Է��Ͻÿ� :");
	scanf("%d", &key);
	
	for(i=0; i<SIZE; i++){
		if(key == list[i]){
		    printf("Ž�� ���� �ε��� = %d" ,t);	
		    break;
		} 
		t++;
	} 
	
	
	return 0;
}
