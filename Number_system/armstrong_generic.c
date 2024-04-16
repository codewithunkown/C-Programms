#include<stdio.h>
void main()
{
	int num,num1,sum,count,buff,mul;

	printf("Enter The NumberRange:- ");
	scanf("%d%d",&num,&num1);


	for(num;num<=num1;num++) //loop range
	{
		sum=0,count=0;

		for(int i=num;i;i/=10) //counting total digits
			count++;


		for(int j=num;j;j/=10) //main logic
		{
			int temp=j%10;
			mul=1;

			for(buff=0;buff<count;buff++)
				mul*=temp; //multiply same digit total count time

			sum+=mul;
		}
		if(num==sum)
			printf("%d ",num);

	}
	printf("Armstrong\n");
}
