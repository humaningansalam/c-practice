#include <stdio.h>

void output(int taken);

int main(void)
{
	int given=10;
	printf("main�� �Ѱ��� ��: %d  %p\n", given, &given);
	output(given);
	return 0;
}

void output(int taken)
{
	printf("output�� ���� ��: %d  %p \n", taken, &taken);
}

