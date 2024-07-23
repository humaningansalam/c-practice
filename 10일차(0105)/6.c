#include<stdio.h>


int students;

int input(int score[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d.Á¡¼öÀÔ·Â :", i+1);
		scanf("%d", &score[i]);
	}
}

int add(int score[], int size){
	
	int  s ,sum = 0;
	
	for(s=0; s<students; s++){
		sum = sum + score[s];
	}
	return sum;
	
}
int main(void){

	int sum = 0;
	int score[6];
	
	input(score, 6);
	students = sizeof(score)/sizeof(int);
	sum = add(score, 6);
	
	printf("ÃÑÁ¡ : %d \n", sum);
	printf("Æò±Õ : %0.2f \n",(double)sum/students);
	return 0;
}
