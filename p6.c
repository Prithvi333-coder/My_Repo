//Prime or not
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i=0;
	printf("Enter the num to find Prime or not\n");
	scanf("%d",&num);
	int temp=num;
       for(i=2;i<=num;i++)
       {
        if((num%i)==0)
		break;
       
       }


	if(i==temp)
		printf("Prime number\n");
	else
		printf("Not an Prime\n");
}

