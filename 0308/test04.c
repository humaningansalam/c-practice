#include<stdio.h>
#define SIZE 10

int max(int data[], int size){
	int i;
	int tmp = -1;
	for(i=0; i<SIZE; i++){
		if(tmp<data[i]) tmp = data[i]; 
	} 
	return tmp;
}

int min(int data[], int size){
	int i;
	int tmp = 100;
	for(i=0; i<SIZE; i++){
		if(tmp>data[i]) tmp = data[i];
	} 
	return tmp;
}

int main(void){

	int array[SIZE] = {6,5,4,8,2,1,12,36,55,8};
	
	//�ּҰ�
	printf("�ּҰ� : %d", min(array, 10));
	//�ִ밪 
	printf("�ִ밪 : %d", max(array, 10)); 

	return 0;
	
}
