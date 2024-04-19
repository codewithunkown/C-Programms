#include<stdio.h>
void main()
{
	char s[20];
	int i,j,k,count;


	printf("Enter The String:- ");
	scanf("%s",s);


	for(i=0;s[i];i++)
	{
		for(j=i+1,count=1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				count++;
					for(k=j;s[k];k++)
						s[k]=s[k+1];

				j--;

			}
		}
		if(count>1)
			printf("%c->%d\n",s[i],count);
	}
}
