//WAP to delete at desired position

#include<stdio.h>
void main()
{
	int a[6]={2,3,4,5,6,7};
	int ele=sizeof(a)/sizeof(int);
	int i,j,pos;

	while(1)
	{
		printf("\033[31mBefore\n\33[0m");
		for(i=0;i<ele;i++)
			printf("%d ",a[i]);
		printf("\n");

		printf("Enter The Array Position You Want To Delete:-  ");
		scanf("%d",&pos);

		for(i=pos;i<ele;i++)
			a[i]=a[i+1];
		ele--;

		printf("\033[32mAfter\n\33[0m");
		for(i=0;i<ele;i++)
			printf("%d ",a[i]);
		printf("\n\n");
	}
}
