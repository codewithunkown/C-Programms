#include<stdio.h>
void main()
{
	int num,num1,sum,count,buff,mul;

	printf("Enter The NumberRange:- ");
	scanf("%d%d",&num,&num1);


	for(num;num<=num1;num++)
	{
		sum=0,count=0;

		for(int i=num;i;i/=10)
			count++;
		//	printf("%d\n",count);


		for(int j=num;j;j/=10)
		{
			int temp=j%10;
			mul=1;
			//		printf("temp-%d\t",temp);

			for(buff=0;buff<count;buff++)
				mul*=temp;
			//		printf("mul-%d\t",mul);

			sum+=mul;
			//		printf("sum-%d\t",sum);
		}
		if(num==sum)
			printf("%d ",num);

	}
	printf("Armstrong\n");
}
