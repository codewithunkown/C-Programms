#include<stdio.h>
void main()
{
	FILE  *fp;

	fp=fopen("text","r+");
	if(fp==0)
	{
		printf("File is Not Present\n");
		return;
	}

	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch>='a' && ch<='z')
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(ch-32,fp);
		}
	}

}
