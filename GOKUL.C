#include<stdio.h>
int main()
{
int result=1,Base,Exponent;
scanf("%d",&Base);
scanf("%d",&Exponent);
while(Exponent!=0)
{
result=result*Base;
exponent--;
}
printf("%d",result);
}
