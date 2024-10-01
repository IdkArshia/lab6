#include <stdio.h>
int main()
{
	int num, sum;
	sum=0;
	do
	{
		printf("enter number to add. enter 0 to end");
	scanf("%d",&num);
	sum=sum+num;
	}
	while(num!=0);
	printf("sum is %d ",sum);
	
}
