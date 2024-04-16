//perfect number b/w 1 to 51

#include<stdio.h>
void main()
{
	int i,j,sum;

	for(i=1;i<51;i++)
	{
		for(j=1,sum=0;j<i;j++)
			if(i%j==0)
				sum+=j;

		if(sum==j)
			printf("\033[31m%d ",j);
	}
	printf("is perfect number\n\033[0m");
}
