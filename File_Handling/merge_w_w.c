#include<stdio.h>
void main (int argc,char **argv)
{if(argc!=4)
{
	printf("default: ./a.out f1 f2 f3\n");
	return;
}

	FILE *f1,*f2,*f3;

	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"r");
	f3=fopen(argv[3],"w+");

	if(f1==0 || f2==0)
	{
		printf("File Is Not Present\n");
		return;
	}

	char ch1[100],ch2[200];
	int op1,op2;	
	while(1)
	{		
			op1=fscanf(f1,"%s",ch1);
			op2=fscanf(f2,"%s",ch2);

			if((op1==-1) &&(op2==-1))
				break;
			
			if(op1!=-1)
			fprintf(f3,"%s ",ch1);

			if(op2!=-1)
				fprintf(f3,"%s ",ch2);
	}
}
