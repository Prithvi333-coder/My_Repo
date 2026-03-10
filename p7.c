//Perfect square
#include<stdio.h>
int main()
{
int num=0,i=0;
printf("Enter the num to check perfect\n");
scanf("%d",&num);
for(i=0;i*i<=num;i++)
{
if(i*i==num)
{
break;
}
}
if(i*i==num)
	printf("Perfect square\n");
	else
	printf("Not a perfect square\n");

}
