#include<stdio.h>
void main()
{
	char s[20];
	int i,j,count=0;

	printf("Enter The String:- ");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
			count++;
		else if(s[0]==' ')
			count--;
	}
	printf("Total Words: %d\n",count+1);
}
