//WAP to print palindrome b/w 51 to 151

#include<stdio.h>
void main()
{
	int i,j,rev;

	for(i=51;i<=151;i++)
	{
		for(j=i,rev=0;j;j=j/10)
			rev=rev*10+j%10;
		if(rev==i)
			printf("%d ",i);
	}
	printf("\n");
}
