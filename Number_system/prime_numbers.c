//print and count prime numbers
#include<stdio.h>
void main()
{
	while(1)
	{
		int num,num1,i,count;
		printf("Enter The Range Number:- ");
		scanf("%d%d",&num,&num1);


		for(num,count=0;num<=num1;num++)
		{

			for(i=2;i<num;i++)
				if(num%i==0)
					break;

			if(i==num)
			{
				count++;
					printf("\033[31m%d ",num);
			}

		}
		printf("is prime number\n\033[0m");
		printf("\033[32mCOUNT:-%d\n\033[0m",count++);
		num=0,num1=0;
	}
}
