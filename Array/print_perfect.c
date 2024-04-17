//WAP To Print Perfect Number In Array
#include<stdio.h>
int perfect(int num)
{
	int i,sum=0;

	for(i=1;i<num;i++)
		if(num%i==0)
			sum=sum+i;
	
	if(sum==num)
		return 1;
	else
		return 0;
}
void main()
{
	int a[5]={2,6,6,28,11};
	int ele=sizeof(a)/sizeof(int);
	int i,num,count;

	for(i=0;i<ele;i++)
	{
		num=perfect(a[i]);
		if(num!=0)
		{
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("\nCOUNT-%d\n",count);
}

