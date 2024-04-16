//WAP to print factorial no b/w 2 to 11
#include<stdio.h>
void main()
{
	unsigned int num,num1,fact,temp;

	while(1)
	{
		printf("Enter The Number Range:- ");
		scanf("%d%d",&num,&num1);

		for(num;num<=num1;num++)
		{
			for(temp=num,fact=1;temp;temp--)
				fact*=temp;

			printf("\033[31m%d:%d\n\033[0m",num,fact);
		}
		printf("\033[32mfactorial of particular range\033[0m\n");
		num=0,num1=0;
	}
}
