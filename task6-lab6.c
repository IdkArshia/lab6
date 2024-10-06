#include<stdio.h>
int main()
{
	int num,prime,i,n,x,t,y;
	i=2;
	prime=1;

	printf("enter a number: ");
	scanf("%d",&num);
	
	//speacial case for 2
	if(num==2)
	{
	   printf("entered number is a prime number");
	   prime=1;	
	}
	else
	{
	//while loop ends if a number is found to be prime
	while(i<num && prime==1)
	{
		if(num%i==0)
		{
			printf("entered number is not prime number");
			prime=0;
		}
		else
		{
			i=i+1;
		}
	}
	if(prime==1)
	{
		printf("entered number is a prime number");
	}
}

	
	if(prime==1)
	{
		x=0;
		y=1,
		printf("%d",x);
		printf("%d",y);
		n=x+y;
		while(n<num)
		{
			printf("%d",n);
			x=y;
			y=n;
			n=x+y;	
			
		}
	}
	return 0;
	
}