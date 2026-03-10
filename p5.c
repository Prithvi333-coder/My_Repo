//Amstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int c=0,num,i=0,sum=0,rem=0;
	printf("Enter the num to find amstrong or not\n");
	scanf("%d",&num);
	int temp=num;
	while(temp)
	{
		c++;
		temp/=10;
	}
	temp=num;
	while(temp)
	{
	sum+=pow((temp%10),c);
        temp/=10;
	}
	if(sum==num)
		printf("Amstrong number\n");
	else
		printf("Not an amstrong\n");
}

