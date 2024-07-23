#include<stdio.h>

void run(){
	
	unsigned char eightBitVal = 0x57;
	unsigned char fourBitVal1, fourBitVal2;
	
	fourBitVal1 = eightBitVal >> 4;
	fourBitVal2 = eightBitVal & 0x0F;
	
	printf("%x, %x ==> %x ", eightBitVal, fourBitVal1, fourBitVal2);
	
	
}
int main(void){
	
	run();
	return 0;
}
