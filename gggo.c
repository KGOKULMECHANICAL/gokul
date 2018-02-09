#include<stdio.h>
void main()
{
    int A,g,j=0;
    printf("enter the number");
    scanf("%d",&A);
    {
    for(g=1;g<=A;g++)
    if(A%g==0)
    j++;
    }
    {
        if(j==2)
    {
        printf("%d is prime number",A);
    }else
    {
        printf("%d is not prime number",A);
    }
    }
}
