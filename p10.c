//Binary to octal 
//octal to Binary
#include<stdio.h>
#include<string.h>
void fun(int op)
{
	int num=0,rem=0,n=0,sum=0,i=0,j=0,c=0;
	char k[32],g[32],s[10]="0123456789";
	if(op==1)
	{

		printf("Enter the binary\n");
		scanf("%s",g);
for(i=0,sum=0;g[i];i++)
{
if(g[i]=='1')
	sum=sum+(1<<i);

}
num=0;
n=8;
printf("sum=%d\n",sum);
	while(sum)
	{
		num=num*10+(s[sum%n]-48);
		sum/=n;
	}

	while(num)
	{
		rem=(rem*10)+(num%10);
		num/=10;
	}
printf("Binary to Octal:%d\n",rem);
	}
	else
	{
		printf("Enter the Octal\n");
		scanf("%o",&num);
		n=2;
		i=0;
		while(num)
		{
			k[i++]=s[num%n];
			num/=n;
		}
		int len=strlen(k);
		for(i=len-1;i>=0;i--)
			printf("%c",k[i]);
		printf("\n");

	}


}
int main()
{
	int op,num;
	printf("Enter 1)Binary to octal 2)octal to Binary\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			fun(op);

			break;
		case 2:
			fun(op);
			break;
		default:
			printf("No more options\n");
			break;
	}

}
