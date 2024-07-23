#include <stdio.h>

typedef struct						// 구조체 선언
{
	char name[100];					// 품명
	int  price;						// 단가
	int	 count;						// 수량
} Item;

void PrintItem(const Item *item);
// const 읽기 권한 만 
int main(void)
{
	Item item = {"사과", 1000, 50};	// 구조체 초기화
	PrintItem(&item);				// 구조체를 인자로 넘겨줌
	return 0;
}

void PrintItem(const Item *item)			// 구조체를 인자로 받는 함수
{
	printf("품명: %s\n", item->name);
	printf("단가: %d\n", item->price);
	printf("수량: %d\n", item->count);
}

