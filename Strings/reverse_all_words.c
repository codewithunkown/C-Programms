#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,k,t;

	printf("Enter The String:- ");
	scanf("%[^\n]",s);

	for(i=0,t=0;s[i];i++)
		if(s[i]==' ')
		{
			for(j=t,k=i-1;j<k;j++,k--)
			{
				ch=s[j];
				s[j]=s[k];
				s[k]=ch;
			}
			t=i+i;
		}

	//logic for last word
	for(j=t,k=i-1;j<k;j++,k--)
	{
		ch=s[j];
		s[j]=s[k];
		s[k]=ch;
	}

	printf("%s\n",s);

}

