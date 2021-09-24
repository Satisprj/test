#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10]={12,13,129,89,43,64,34,54,65,90};
	int i=0,j=0,count=0,num=0;
	num=a[0];
	for(i=1;i<=9;i++)
	{
		if(a[0]>a[i])
		{
			num=a[i];
			
		}
	}
	printf("%d ",a[i]);
	return 0;
}
