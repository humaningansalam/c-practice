#include <stdio.h>

typedef struct						// ����ü ����
{
	char name[100];					// ǰ��
	int  price;						// �ܰ�
	int	 count;						// ����
} Item;

void PrintItem(const Item *item);
// const �б� ���� �� 
int main(void)
{
	Item item = {"���", 1000, 50};	// ����ü �ʱ�ȭ
	PrintItem(&item);				// ����ü�� ���ڷ� �Ѱ���
	return 0;
}

void PrintItem(const Item *item)			// ����ü�� ���ڷ� �޴� �Լ�
{
	printf("ǰ��: %s\n", item->name);
	printf("�ܰ�: %d\n", item->price);
	printf("����: %d\n", item->count);
}

