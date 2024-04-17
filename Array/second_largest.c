//WAP To Find Second Largest

#include<stdio.h>
void main()
{
	int a[5]={1,21,51,21,11};
	int ele=sizeof(a)/sizeof(int);
	int l,sl,i,j;

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
		printf("\n");

	l=a[0],sl=a[1];

	if(l<sl)
	{
		sl=a[0];
		l=a[1];
	}

	for(i=2;i<ele;i++)
		if(a[i]>l && (a[i]>sl && l>sl))
		{	
			sl=l;
			l=a[i];
		}
	printf("Second Largest- %d\n",sl);

}
