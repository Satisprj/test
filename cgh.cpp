#include<stdio.h>
int main()
{
	char a[]="NIKITA";
	int i=0,j=0,k=0;
	for(i=0;i<=5;i++)
	{
		for(k=i;k<=4;k++);
		{
			printf(" ");
			for(j=0;j<=i;j++)
			{
				printf("%C ",a[j]);
			}
				printf("\n");
		}
		
	}
	return 0;
}
