//WAP to rotate a bit of given short integer num;


#include<stdio.h>
void main()
{
	short int num,pos,rot;
	int t1,t2,t3;

	printf("Enter The Number:- ");
	scanf("%hd",&num);
	printf("Enter The Number Of Rotations:- ");
	scanf(" %hd",&rot);


	printf("\033[31mBefore Rotating\n\033[0m");
	for(pos=15;pos>=0;pos--)
		printf("%hd ",num>>pos&1);
	printf("\n");

	int temp1,temp2;

	temp1=num>>rot;
	printf("Temp1-%hd\n",temp1);
	temp2=num<<(16-rot);

	num=temp1|temp2;


	t1=temp1;
	printf("\033[31mTemp1\n\033[0m");
	for(pos=15;pos>=0;pos--)
		printf("%d ",t1>>pos&1);
	printf("\n");

	t2=temp2;
	printf("\033[31mTemp2\n\033[0m");
	for(pos=15;pos>=0;pos--)
		printf("%d ",t2>>pos&1);
	printf("\n");

	t3=num;
	printf("\033[31mAfter Rotating\n\033[0m");
	for(pos=15;pos>=0;pos--)
		printf("%d ",t3>>pos&1);
	printf("\n");
}
