//WAP to reverse the element in given array

#include<stdio.h>
void main()
{
	int a[6]={2,3,4,5,6,7};
	int ele=sizeof(a)/sizeof(int); //finding total elemnts
	int i,j,temp;

	for(i=0,j=ele-1;i<j;i++,j--)
	{//reverse logic
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
		printf("\n");
}
