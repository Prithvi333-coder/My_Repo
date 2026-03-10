#include<stdio.h>
int main()
{
int a[5];
int i=0,j=0;
printf("Enter the array value\n");
for(i=0;i<5;i++)
	scanf("%d",a+i);
for(i=0,j=4;i<j;i++,j--)
{
a[i]=a[i]^a[j];
a[j]=a[i]^a[j];
a[i]=a[i]^a[j];
}
printf("Printing the  array values\n");
for(i=0;i<5;i++)
	printf("%d ",a[i]);
printf("\n");
}
