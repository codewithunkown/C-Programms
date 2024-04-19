#include<stdio.h>
#include<string.h>
int vowel(char *p)
{
	char s[]="AEIOUaeiou";
	int count=0;
	while(*p)
	{
		if(strchr(s,*p++)!=NULL)
			count++;
	}
	return count;
}
void main()
{
	char s[20];
	int count=0;

	printf("Enter The INPUT:- ");
	scanf("%[^\n]",s);
	count=vowel(s);

	printf("COUNT-%d\n",count);

}
