#include<stdio.h>
int main()
{
int streak,i,ch;
printf("did you send a message today? enter 1 for yes and 0 for no");
scanf("%d",&ch);
streak=0;
for(i=1;ch==1;){
	streak=streak+1;
	printf("did you send a message today?");
scanf("%d",&ch);
}
printf("you had a streak of %d",streak);
return 0;
}