#include<stdio.h>
int main()
{
	int num,n,r,sum;
	printf("enter a number: ");
	scanf("%d",&num);
	n=num;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(sum==num)
	{
		printf("number is an armstrong number");
	}
	else
	{
		printf("number is not an armstrong number");
	}
	return 0;
	
}