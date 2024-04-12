//WAP to reverse particular bit
#include<stdio.h>
void main()
{
	int num,pos,bits,i,j;

	printf("Enter The Number:- ");
	scanf("%d",&num);

	printf("\033[31mBefore Reversing\n\033[0m");
	for(pos=31;pos>=0;pos--)
		printf("%d ",num>>pos&1);
	printf("\n");

	printf("Enter The Bits You Want To Reverse:- ");
	scanf("%d",&bits);

	for(i=31,j=0;i>=bits;i--,j++)
	{
		if((num>>i&1)!=(num>>j&1))
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}

	printf("\033[31mAfter Reversing\n\033[0m");
	for(pos=31;pos>=0;pos--)
		printf("%d ",num>>pos&1);
	printf("\n");
}
