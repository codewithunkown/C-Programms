#include<stdio.h>
void prime(int);
void perfect(int);
void strong(int);
void palindrome(int);
void armstrong(int);

int num,op;
void main()
{
	while(1)
	{

		printf("Enter The Number:- ");
		scanf("%d",&num);
		printf("\033[31m1)prime\n2)perfect\n3)strong\n4)palindrome\n5)armstrong\n");
		scanf("%d",&op);

		switch(op)
		{
			case 1:prime(num);break;
			case 2:perfect(num);break;
			case 3:strong(num);break;
			case 4:palindrome(num);break;
			case 5:armstrong(num);break;
		}
	}
}

void prime(int num)
{
	int i;

	for(i=2;i<num;i++)
		if(num%i==0)
			break;

	if(i==num)
		printf("\033[32m%d is prime number\n\033[0m",num);
	else
		printf("\033[34m%d is not prime number\n\033[0m",num);
}
void perfect(int num)
{
	int i,sum;

	for(i=1,sum=0;i<num;i++)
		if(num%i==0)
			sum+=i;

	if(sum==num)
		printf("\033[32m%d is perfect number\n\033[0m",num);
	else
		printf("\033[34m%d is not perfect number\n\033[0m",num);
}
void strong(int num)
{
	int i,temp,fact,sum;

	for(i=num,sum=0;i;i/=10)
	{
		temp=i%10;
		for(fact=1;temp;temp--)
			fact*=temp;

		sum+=fact;
	}
	if(sum==num)
		printf("\033[32m%d is strong number\n\033[0m",num);
	else
		printf("\033[34m%d is not strong number\n\033[0m",num);
}
void palindrome(int num)
{
	int i,sum=0;

	for(i=num;i;i/=10)
		sum=sum*10+(i%10);

	if(sum==num)
		printf("\033[32m%d is palindrome number\n\033[0m",num);
	else
		printf("\033[34m%d is not palindrome number\n\033[0m",num);
}
void armstrong(int num)
{

	int sum,count=0,buff,mul,i,j,temp;


	for(i=num;i;i/=10) //counting total digits
		count++;

	for(j=num,sum=0;j;j/=10) //main logic
	{
		temp=j%10;
		mul=1;

		for(buff=0;buff<count;buff++)
			mul*=temp; //multiply same digit total count time

		sum+=mul;
	}
	if(num==sum)
		printf("\033[32m%d is Armstrong number\n\033[0m",num);
	else
		printf("\033[34m%d is not Armstrong number\n\033[0m",num);


}




















