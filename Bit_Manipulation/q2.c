//Q-2 WAP to reverse bits of given character

#include<stdio.h>
void main()
{
	char ch;
	int pos,i,j;

	printf("Enter The Character:- ");
	scanf("%c",&ch);
	printf("Ascii:- %d\n",ch);
	
	printf("\033[31mBefore Reversing\n\033[0m");
	for(pos=7;pos>=0;pos--)
		printf("%d ",ch>>pos&1);
		printf("\n");
	for(i=7,j=0;i>=j;i--,j++)
		{
			if((ch>>i&1) != (ch>>j&1))
			{
				ch=ch^1<<i;
				ch=ch^1<<j;

			}
		}




	printf("\033[31mAfter Reversing\n\033[0m");
	for(pos=7;pos>=0;pos--)
		printf("%d ",ch>>pos&1);
		printf("\n");

}
