#include<stdio.h>
int main(){
	int i,a=0,b=1,sum;
	for(i=0;i<=5;i++)
	{
		sum=a+b;
		printf(" %d",sum);
		a=b;
		b=sum;
	}
	return 0;

}
