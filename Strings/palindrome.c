#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],s1[20];
	int i,j,len;

	printf("Enter The String:- ");
	scanf("%s",s);

	for(i=0;s[i];i++)
		s1[i]=s[i]; //copying string into another buffer
		
		s1[i]='\0';

	len=strlen(s1);

	for(i=0,j=len-1;s1[i];i++,j--)
	{
		char temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
	}

	if(strcmp(s,s1)==0)
		printf("Palindrome\n");
	else 
		printf("Not Palindrome\n");
}
