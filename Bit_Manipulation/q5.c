//WAP to delete no of bit from particulalt position in the given number
#include<stdio.h>
void main()
{
	 int num,bit,pos;
	 unsigned int num1,num2;

	printf("Enter The Number\n");
	scanf("%d",&num);

	for(pos=31;pos>=0;pos--)
		printf("%d ",num>>pos&1);
	printf("\n");

	printf("Enter The No of Bits You want to Delete:- ");
	scanf("%d",&bit);
	printf("Enter The Pos From Which you want to delete:- ");
	scanf("%d",&pos);

	num1=num;
	num1=num1>>(bit+pos);
	num1=num1<<pos;

	num2=num;
	num2=num2<<32-pos;
	num2=num2>>32-pos;

	num=num1|num2;
	
	printf("\033[31mAfter Deleting Bit From Particular Position\n\033[0m");
	for(pos=31;pos>=0;pos--)
		printf("%d ",num>>pos&1);
	printf("\n");


}
