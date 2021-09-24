#include<stdio.h>
int main()
{
	FILE *bp;
	p=fopen("a.txt","w+");
	if(p==NULL)
	{
		printf("File not found");
		
	}
	else 
	{
		fprintf(p,"Wassup");
	}
	return 0;
}
