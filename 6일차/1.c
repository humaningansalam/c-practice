#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM] ;
   int tt[7] = {1,1};
   int i, t;

    for(i=0; i<NUM; i++){
    	scanf("%d", &test[i]);
	}
	
	for(t=2; t<7; t++){
		tt[t] = (tt[t-1]) + (tt[t-2]);
	}
	
	for(t=0; t<7; t++){
    	printf("%d번재 점수 : %d \n",t+1,tt[t]);
	}

   return 0;

}
