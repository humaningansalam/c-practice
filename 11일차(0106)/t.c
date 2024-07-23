#include <stdio.h>

   int main (void) {
    int i,j= 0;
    int sum1,sum2,sum3,sum4 =0;
    int z = 1;
    int num[5][5]= {0};

    for(i=0;i<5;i++) {
        for(j=0;j<5;j++){
            num[i][j]= z;
            z++;
        }
    }

    for(i=0;i<5;i++) {
        for(j=0;j<5;j++){
            printf("%3d", num[i][j]);
            if(j==4) printf("\n");
        }
    }   //초기 입력 확인


      for(i=0;i<5;i++) {
        for(j=0;j<5;j++){
            if((1<=i && i<4) && (1<=j && j<=3) ) continue;
            else {
                sum4 += num[i][j];

            }
        }
    }

    printf("4번예제:%d\n", sum4);
   }
