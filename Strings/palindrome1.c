#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	int i,j,len;

	printf("Enter The String:- ");
	scanf("%s",s);

	len=strlen(s);

	for(i=0,j=len-1;i<=j;i++,j--)
		if(s[i]!=s[j])
		{
			printf("Not Palindrome\n");
			break;
		}


	if(s[i]==s[j])
		printf("Palindrome\n");

}
