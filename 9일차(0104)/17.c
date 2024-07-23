#include<stdio.h>
typedef struct Item{
	char name[50];
	int price;
	int count;
}Item;

void printitem(Item item);

int main(void){
	Item item = {"사과", 1000, 500};
	printitem(item);
	printf("main품명 : %s \n", item.name); 
	printf("main단가 : %d \n", item.price); 
	printf("main수량 : %d \n", item.count);  
	return 0;
}

void printitem(Item item){
	item.price = 123;
	printf("품명 : %s \n", item.name); 
	printf("단가 : %d \n", item.price); 
	printf("수량 : %d \n", item.count); 
	return item;
}
