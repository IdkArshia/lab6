#include <stdio.h>
int main()
{
	int a,b,i,sum;
	printf("enter starting limit");
	scanf("%d",&a);
	printf("enter ending limit");
	scanf("%d",&b);
	sum=0;
	if(a%2 != 0)
	{
		a=a+1;
	}
	if(b%2 != 0)
	{
		b=b-1;
	}
	for(i=a;i<=b;)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("sum of all even numbers between given numbers is: %d",sum);
	return 0;
}
