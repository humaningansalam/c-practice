#include<stdio.h>
typedef struct Item{
	char name[50];
	int price;
	int count;
}Item;

void printitem(Item item);

int main(void){
	Item item = {"���", 1000, 500};
	printitem(item);
	printf("mainǰ�� : %s \n", item.name); 
	printf("main�ܰ� : %d \n", item.price); 
	printf("main���� : %d \n", item.count);  
	return 0;
}

void printitem(Item item){
	item.price = 123;
	printf("ǰ�� : %s \n", item.name); 
	printf("�ܰ� : %d \n", item.price); 
	printf("���� : %d \n", item.count); 
	return item;
}
