#include <stdio.h>
#include<conio.h>
int main()
{
   int num, reverse_num=0, remainder,A;
   clrscr();
   printf("Enter a number: ");
   scanf("%d", &num);

   A=num;
   while(A!=0)
   {
      remainder=A%10;
      reverse_num=reverse_num*10+remainder;
      A/=10;
   } 

   if(reverse_num==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
