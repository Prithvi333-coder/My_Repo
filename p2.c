//Reverse number
#include<stdio.h>
int main()
{
int n,rem=0,sum=0;
printf("Enter the number to reverse\n");
scanf("%d",&n);
while(n)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;

}
printf("Reversed number:%d\n",sum);
}
