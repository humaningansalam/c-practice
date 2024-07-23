#include<stdio.h>

//int sum(int data[5])

int sum(int data[], int size){
	int i, total = 0;
	for(i=0; i<5; i++){
		total += data[i];
	}
	return total;
}
int main(void){
	
	int total=-1;
	int data[5]={10,30,20,50,70};
	total = sum(data, 5);
	
	printf("%d \n", total);
	/*
	int students, s,i ,sum = 0;
	int score[6];
	
	for(i=0; i<6; i++){
		printf("%d.Á¡¼öÀÔ·Â :", i+1);
		scanf("%d", &score[i]);
	}
	
	students = sizeof(score)/sizeof(int);
	
	for(s=0; s<students; s++){
		sum = sum + score[s];
	}
	
	printf("ÃÑÁ¡ : %d \n", sum);
	printf("Æò±Õ : %0.2f \n",(double)sum/students);
    */
	return 0;
}
