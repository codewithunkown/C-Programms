//WAP to print strong number b/w 251

#include<stdio.h>
void main()
{
	int num=145,i,j,fact,sum;

	for(i=0;i<251;i++)
	{
		for(j=i,sum=0;j;j=j/10)
		{
			int temp=j%10;
			for( fact=1;temp>0;temp--)
				fact=fact*temp;
			sum=sum+fact;
		}
		if(sum==i)
			printf("%d ",i);
	}
	printf("\n");

}
