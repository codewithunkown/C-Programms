//WAP TO Count Duplicate Element

#include<stdio.h>
void main()
{
	int a[8]={1,1,2,3,2,2,1,7};
	int ele=sizeof(a)/sizeof(int);
	int i,j,k,count;

	for(i=0;i<ele;i++)
	{
		for(j=i+1,count=0;j<ele;j++)
			if(a[i]==a[j])
				{
					for(k=j;k<ele;k++)
						a[k]=a[k+1];

						j--;
						ele--;
						count++;
				}
		
		if(count)
		printf("%d->%d\n",a[i],count+1);
	}
}
