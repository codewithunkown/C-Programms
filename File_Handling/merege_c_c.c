#include<stdio.h>
void main()
{
	FILE *f1,*f2,*f3;

	f1=fopen("f1","r");
	f2=fopen("f2","r");
	f3=fopen("f3","w+");
	if(f1==0 || f2==0)
	{
		printf("File is not present\n");
		return;
	}

	char ch1,ch2;

	while(1)
	{
		if((ch1=fgetc(f1))!=-1)
		{
			if(ch1=='\n')
				continue;
			fputc(ch1,f3);
		}
		else
			break;

		if((ch2=fgetc(f2))!=EOF)
		{
			if(ch2=='\n')
				continue;
			fputc(ch2,f3);
		}
		else
			break;
	}
}

