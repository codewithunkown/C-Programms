#include<stdio.h>
void main()
{
	int a[6];
	int ele=sizeof(a)/sizeof(int);
	int i,j;

	printf("Enter The Element for sorting:- ");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

	for(int i=0;i<ele;i++)
		printf("%d ",a[i]);
		printf("\n");
}
