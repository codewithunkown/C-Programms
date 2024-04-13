#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=4){
		printf("Default: ./a.out f1 f2 f3\n");
		return;}

	FILE *f1,*f2,*f3;

	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"r");
	f3=fopen(argv[3],"w+");

	if(f1==0 || f2==0)
	{
		printf("File Is Not Present\n");
		return;
	}

	int f=1;
	char ch[500];
	while(1)
	{
		if(f) 
		{
			if(fgets(ch,500,f1))
			fputs(ch,f3);
			else
				break;
			f=!f;
		}
		else
		{
			if(fgets(ch,500,f2))
			fputs(ch,f3);
			else 
				break;
			f=!f;
		}
	}
}
