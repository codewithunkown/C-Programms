#include<stdio.h>
void main()
{
	char s[20];
	int i,j;
	printf("Enter The String\n");
	scanf("%[^\n]",s);


	for(i=0;s[i];i++)
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(j=i+1;s[j];j++)
				s[j]=s[j+1];
		}

	printf("%s\n",s);
}
