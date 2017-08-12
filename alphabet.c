#include<stdio.h>
#include<conio.h>
void main()
{
char d;
printf("ENTER A CHARACTER");
scanf("%c",&d);
if((d>='a'&&d<='z')||(d>='A'&&d<='Z'))
{
printf("the given character is alphabet %c",d);
}
else
{ 
printf("the given character in not alphabet %c",d);
}}
