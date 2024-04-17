#include<stdio.h>
void main()
{
	int a[6];
	int ele=sizeof(a)/sizeof(int);
	int i,j,k;

	printf("Enter The Element For Sorting\n");

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
