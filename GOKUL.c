#include<stdio.h>
void main()
{
	int n,G=0,i;
	printf("Enter no.");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
	if(n%i==0){
		G=1	;
	}
	}
	if(G==0)
	{printf("prime");
	}
	else
	{
		printf("no");
	
	}
}
