#include <stdio.h>
#include <stdlib.h>

struct student{
   int number;
   char name[20];
   double grade;
};

struct student list[3] = {
   {111, "A", 4.2},
   {222, "B", 3.2},
   {333, "C", 4.5}
};

int main(){
   
   int i, j;
   int keyValue;
   
   for(i=0; i<3; i++){
      keyValue = list[i+1].number;
      
      for(j=i; j>-1; j--){
         
         if(list[j].number > keyValue){
            list[j].number = list[j].number;
         }
         else{
            break;
         }
      }
      
      list[j+1].number = keyValue;
   }
   
   printf("ÃÖ´ñ°ªÀº %d", list[j+1].number);
   
   for(i=0; i<3; i++){
   	printf("%d \n", list[i].number);
   }
   
   return 0;
}

