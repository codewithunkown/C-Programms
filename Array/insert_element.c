//WAP to insert elemnt at desire position

#include<stdio.h>
void main()
{
	int a[6]={2,3,4,5,6};
	int ele=sizeof(a)/sizeof(int);
	int i,j,pos,num;

	printf("\033[31mBefore\n\033[0m");
	for(i=0;i<ele-1;i++)
		printf("%d ",a[i]);
	printf("\n");

	printf("Enter The Pos and num you want to add\n");
	scanf("%d%d",&pos,&num);

	for(j=ele-1;j>pos;j--) //logic
		a[j]=a[j-1];

	a[j]=num;

	printf("\033[32mAfter\n\033[0m");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");


}
