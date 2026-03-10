/*Size of a datatype*/

#include<stdio.h>
int main()
{
int n;
printf("Enter the datatype 1)char 2)int 3)float 4)Double\n");
scanf("%d",&n);
switch(n)
{
	case 1:
		{
		char *p=0,*q;
		q=p+1;
		int c=(char*)q-(char*)p;
		printf("Sizeof char:%d\n",c);
		}
		break;
	case 2:
		{
		int *p=0,*q;
		q=p+1;
		int c=(char *)q-(char*)p;
		printf("Sizeof int:%d\n",c);
		}
		break;
	case 3:
		{
		float *p=0,*q;
		q=p+1;
		int c=(char*)q-(char*)p;
		printf("Sizeof float:%d\n",c);
		}break;
	case 4:
		{
		double *p=0,*q;
		q=p+1;
		int c=(char*)q-(char*)p;
		printf("Sizeof double:%d\n",c);
		}break;
	default:
		printf("No more cases\n");
}

}

