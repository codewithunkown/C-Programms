#include<stdio.h>
void main ()
{
FILE *fp=fopen("data","r");
if(fp==0)
{
	printf("File is not present...\n");
	return;
}
char ch;
int c=0,c1=0,c2=0;
while((ch=fgetc(fp))!=EOF)
{
	if(ch=='\n')
	c++;
	if(ch==' ' || ch=='\n')
	c1++;
	if(ch>='0' && ch<='9')
	c2++;
}
	printf("count line:%d\n",c);
	printf("count word:%d\n",c1);
	printf("count digit:%d\n",c2);
}
