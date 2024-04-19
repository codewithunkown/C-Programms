#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,k;

	printf("Enter The String\n");
	scanf("%s",s);

	printf("\033[31mEnter The Desired Charactet you want to Delete:-\033[0m ");
	scanf(" %c",&ch);

	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}


	}

	printf("%s\n",s);
}
