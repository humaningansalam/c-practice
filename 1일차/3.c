#include<stdio.h>              //������� 



int main(void){                //����~ main��

    char name, name2;
    

    int a, sum1, b, sum2;
    
    printf("ù��° �̸��Է� ==>");
    //scanf(" %c", &name);   //%c �տ� �����̽��� �־���� 
    name = getchar();
	//printf("%c \n", name); 
    

    printf("���� ������ �Է��ϼ��� ==> ");
    scanf("%d", &a);
    
    sum1 = sum1 + a;
    
    printf("���� ������ �Է��ϼ��� ==> ");
    scanf("%d", &a);
    
    sum1 = sum1 + a;
    printf("���� ������ �Է��ϼ��� ==> ");
    scanf("%d", &a);
    sum1 = sum1 + a;
    
    
    printf("��° �̸��Է� ==>");
    //scanf(" %c", &name2);
    name2 = getchar();
    name2 = getchar();
    

    printf("���� ������ �Է��ϼ��� ==> ");
    scanf("%d", &b);
    sum2 = sum2 + b;
    
    printf("���� ������ �Է��ϼ��� ==> ");
    scanf("%d", &b);
    
    sum2 = sum2 + b;
    printf("���� ������ �Է��ϼ��� ==> ");
    scanf("%d", &b);
    sum2 = sum2 + b;
    
    
    printf("%c�� ���� ��ü�հ�� %d ����� %f �Դϴ�.\n", name, sum1, (float)sum1/3);
    printf("%c�� ���� ��ü�հ�� %d ����� %f �Դϴ�.\n", name2, sum2, sum2/3.0);
    

	return 0;                  //�� 
}

