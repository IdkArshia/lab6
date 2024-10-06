#include<stdio.h>
int main()
{
	int num,prime,i;
	i=2;
	prime=0;

	printf("enter a number: ");
	scanf("%d",&num);
	
	//speacial case for 2
	if(num==2)
	{
	   printf("entered number is a prime number");
	   prime=1;	
	}
	
	//while loop ends if a number is found to be prime
	while(i<num && prime==0)
	{
		if(num%i==0)
		{
			printf("entered number is not prime number");
			prime=1;
		}
		else
		{
			i=i+1;
		}
	}
	if(prime==0)
	{
		printf("entered number is a prime number");
	}
	return 0;
	
}