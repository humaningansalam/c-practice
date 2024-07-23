#include<stdio.h>

void pp(int *pA, int *pB){
	int tmp;
	tmp = *pA ;
	*pA = *pB;
	*pB = tmp;
}

int main(Void){
	int a,b;
	
	printf("a값 입력:"); scanf("%d", &a);
	printf("b값 입력:"); scanf("%d", &b);
	
	pp(&a, &b);

    printf("바뀐값은 a:%d b:%d\n", a, b);
	return 0;
}
