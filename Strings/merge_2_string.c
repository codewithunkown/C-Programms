#include<stdio.h>
void main()
{
	char s1[20],s2[20],s3[20];
	int i,j,k;

	printf("Enter 1st String:- ");
	scanf("%s",s1);
	printf("Enter 2nd String:- ");
	scanf("%s",s2);

	for(i=0,j=0,k=0;s1[k];i++,j++,k++)
	{
		s3[i]=s1[k];
		s3[++i]=s2[j];
	}
	s3[i]='\0';
	printf("%s\n",s3);
}
