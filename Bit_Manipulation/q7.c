//WAP to set all bit 1st nibble clear all bit 2nd nibble toggle all bit 3 nibble
#include<stdio.h>
void main()
{
	int num,pos,num1;

	printf("Enter The Num:- ");
	scanf("%x",&num);

	printf("Before Manipulation\n");
	for(pos=15;pos>=0;pos--)
		printf("%d ",num>>pos&1);
		printf("\n");
	
	num1=num;

	int n1=num1&0x000F;
	for(pos=3;pos>=0;pos--)
		n1=n1|1<<pos; //set
	int n2=num1&0x00F0;
	for(pos=4;pos<=7;pos++)
		n2=n2 & ~(1<<pos); //clear

	int n3=num1&0x0F00;
	for(pos=8;pos<=15;pos++)
		n3=n3^1<<pos; //toggle
	int n4=num1&0xF000;

	num1=n1|n2|n3|n4;

	printf("After Manipulation\n");
	for(pos=15;pos>=0;pos--)
		printf("%d ",num1>>pos&1);
		printf("\n");
	

}
