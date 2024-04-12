// Q1-swapping first and last nibble in given short integer (2 Byte)

#include<stdio.h>
void main()
{
	short int num,i,pos,n1,n2,n3,n4;

	printf("Enter The Number:- ");
	scanf("%hd",&num);
	
	printf("\033[31mBefore Swapping First and Last Nibble\n\033[0m");
	for(pos=15;pos>=0;pos--)
		printf("%d ",num>>pos&1);
		printf("\n");

		
		n1=num&0x000F;
		n2=num&0x00F0;
		n3=num&0x0F00;
		n4=num&0xF000;

		n1=n1<<12;
		n4=n4>>12;

		num=n1|n2|n3|n4;


	printf("\033[31mAfter Swapping First and Last Nibble\n\033[0m");
	for(pos=15;pos>=0;pos--)
		printf("%d ",num>>pos&1);
		printf("\n");


}
