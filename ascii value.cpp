#include<stdio.h>          	/*a-z=97-122_ _ _ _ _ _ _ _ _ _ _A-Z=65-90*/
int main()
{
	char a;
	printf("Enter a character:");
	scanf("%c",&a);
	if( a='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		printf("Its a vowel");
	}
	else 
	{
		printf("ITS constant");
	}
	return 0;
}
