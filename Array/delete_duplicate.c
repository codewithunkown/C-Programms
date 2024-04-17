//WAP to Delete Duplicate array
#include<stdio.h>
void main()
{
	int a[7]={2,2,2,3,3,3,4};
	int ele=sizeof(a)/sizeof(int);
	int i,j,k;

	printf("\033[31mBefore\n\33[0m");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");


	for(i=0;i<ele;i++)
	{//logic
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ele;k++)
					a[k]=a[k+1];

				ele--;
				j--;
			}

		}
	}

	printf("\033[32mAfter\n\33[0m");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
