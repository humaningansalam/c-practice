#include<stdio.h>              //������� 

/*
void show(){                   //show() �Լ� 
	
	printf("show() ����");
}
*/

int main(void){                //����~ main��

    //show(); 
    printf("main() ����");
    
    int num;
    num = 3;
    
    printf("num = %d %d %d \n", num,num+1,num+2);
    
    printf("%d\n", num);
    printf("%d\n", num*2);
    printf("%d\n\n\n", num*3);
    
    printf("%d\n", num);
    num = num+num;
    printf("%d\n", num);
    num = num+num+num;
    printf("%d\n", num);
    
    int num2;
	 
    printf("ù��°  �����Է�");
	scanf("%d", &num);
	printf("%d�� �ԷµǾ����ϴ�\n", num);
	
    printf("�ι�°  �����Է�");
	scanf("%d", &num2);
	printf("%d�� �ԷµǾ����ϴ�\n", num2);
	
	printf("%d + %d = %d �Դϴ�. \n", num, num2, num+num2);
	
	int a, b;
	
	printf("ù��° ���� �Է�");
	scanf("%d", &a);
	
	printf("�ι�° ���� �Է�");
	scanf("%d", &b);
	
	printf("%d + %d = %d �Դϴ�. \n", a, b, a+b);
	printf("%d - %d = %d �Դϴ�. \n", a, b, a-b); 
    printf("%d && %d = %d �Դϴ�. \n", a, b, a%b); 	
	
	float f = 12.34;
	double d = 3.14;
	
	printf("%f %lf \n", f, d);

	printf("�Ǽ��ΰ� �Է� : ");
	scanf("%f %lf", &f, &d);
	printf("%f %lf", f, d);

	return 0;                  //�� 
}

