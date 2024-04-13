#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Default: ./a.out file_name line no to be delted\n"); 
	}

	FILE *f1=fopen(argv[1],"r");          

	if(f1==0)
	{
		printf("File Is Not Present\n");
	}

	int c=1,i=0;
	int line=atoi(argv[2]);
	char buff[1000],ch;

	while((ch=fgetc(f1))!=EOF)
	{
		//if(ch=='\n')
		//	c++;
		if(c!=line)
			buff[i++]=ch;
		if(ch=='\n')
			c++;
		//else
		//	buff[i++]=ch;
	}
	buff[i]='\0';
	i=0;

	FILE *f2=fopen(argv[1],"w");
	while(fputc(buff[i],f2))
		i++;
}

