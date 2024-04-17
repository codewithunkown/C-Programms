#include<stdio.h>
int string(int num)
{
	int i,j,fact,sum;

	for(i=num,sum=0;i;i/=10)
	{
		j=i%10;
		for(fact=1;j;j--)
			fact=fact*j;

		sum+=fact;
	}
	if(sum==num)
		return 0;
	else
		return 1;
}
void main()
{
	int a[6]={2,2,3,4,145,6};
	int ele=sizeof(a)/sizeof(int);
	int i,num,count;

	for(i=0;i<ele;i++)
	{
		num=string(a[i]);
		if(!num)
		{
			printf("%d ",a[i]);
			count++;
		}
	}

	printf("\nCOUNT:- %d\n",count);
}
