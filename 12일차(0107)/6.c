#include<stdio.h>

int sum(int data[], int size);

int main(void){
	
	int total;
	int data[5] = {10,30,20,50,70};
	total = sum(data, 5);
	
	printf("�հ� : %d", total);
	
	return 0;
}

/*
int sum(int data[], int size){ //�迭 
	int i, total =0;
	
	for(i=0; i<size; i++){
		total += data[i];
	}
	return total;
}
*/

int sum(int *p, int size){ //���� �� 
	int i, total =0;
	
	for(i=0; i<size; i++){
		total += *(p+i);
	}
	return total;
}
