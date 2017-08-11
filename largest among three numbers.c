#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is big%d",a);
}
if(b>a&&b>c)
{
printf("b is big%d",b);
}
if(c>a&&c>b)
{
printf("c is big%d",c);
}}
