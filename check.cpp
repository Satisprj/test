#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,i,count1=0,count2=0,sum=0;
printf("input a number ");
scanf("%d",&a);
printf("input a number ");
scanf("%d",&b);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
count1++;
}
}
for(i=1;i<=b;i++)
{
if(b%i==0)
{
count2++;
}
}
if (count1==2)
{
if(count2==2)
{
sum=a+b;
printf("the sm of %d and %d is %d",a,b,sum);
}
else
{
printf("%d is not prime number",b);
}
}
else
{
printf("%d is not prime no",a);
}
return 0;
}
