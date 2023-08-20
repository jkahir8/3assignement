#include<stdio.h>
int main()
{
	
	int n,i,j;
	printf("enter number");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d \n",i);
		
	}
	int odd;
	if(n%2!=0)
	{
		printf("odd");
		odd++;
	}
	
	
	printf("fibonacci is %d \n",2*odd);
	
	
	
}
