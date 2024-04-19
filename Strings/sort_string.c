#include<stdio.h>
void main()
{
	char s[20];
	int i,j,k;

	printf("Enter The String:- ");
	scanf("%s",s);


	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]>s[j])
			{
				char temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}

	printf("%s\n",s);
}
