#include<stdio.h>
int main()
{
	int pin,correct,i,blocked;
	correct=0;
	blocked=0;
	i=1;
	printf("enter pin: ");
	scanf("%d",&pin);
	while (i<3 && correct==0 && blocked==0) 
	{
		if(pin==5678)
		{
			printf("access granted");
			correct=1;
		}
		else
		{
			printf("incorrect pin, try again:");
			scanf("%d",&pin);
			i=i+1;
		}
		
	}
	if(correct==0)
	{
		blocked=1;
		printf("your card has been blocked");
	}
	
}