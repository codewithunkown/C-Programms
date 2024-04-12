//find num divisble by 8 or not by bitwise + ternary operator

#include<stdio.h>
void main()
{
	int num;
while(1)
{
	printf("\033[31mEnter The Number To Check num is Div by 8 or not\n\033[0m");
	scanf("%d",&num);

	printf("\033[32m%d is %s is divisible by 8\n\033[0m",num,((num%8)==0)?"":"\033[31mNOT\033[0m");
	num=0;
}
}
