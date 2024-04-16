//WAP for fibanocci series from 0 to 31
#include<stdio.h>
void main()
{
	int n1=0,n2=1,n3,i,j;

	printf("%d %d ",n1,n2);
	for(n3=0;n3<31;)
	{
		n3=n1+n2;

		if(n3>31)
			break;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	printf("\n");

}
