//fibonacci series
#include<stdio.h>
int main()
{
int num,x=0,y=1,z=0,c=0;
printf("Enter the number of fibonacci you need\n");
scanf("%d",&num);
while(c<num)
{
printf("%d ",x);
z=x+y;
x=y;
y=z;
c++;
}
printf("\n");
}
