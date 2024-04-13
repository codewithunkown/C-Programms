#include<stdio.h>
void main()
{
	FILE *fp;

	fp=fopen("data","r");

	if(fp==0)
	{
		printf("File Not Found\n");
		return;
	}
	int c=0;
	char ch;
	while((ch=fgetc(fp))!=EOF){
		c++;
		if(ch==' '|| ch=='\n')
		{
			printf("%d ",c-1);
			c=0;
		}
	}
	printf("\n");
}
