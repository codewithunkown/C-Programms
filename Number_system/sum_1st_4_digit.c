#include<stdio.h>
void main()
{
	int i,j,sum,rev,num,count;

	printf("Enter The Number more the 4 digit:- ");
	scanf("%d",&num);

	for(i=num,rev=0;i;i/=10)
	rev=rev*10+(i%10);
	
	sum=0;
	for(i=rev,count=0;count<=3 ;count++,i/=10)
		sum+=(i%10);
	printf("sum of first for digit: %d\n",sum);
}
