#include<stdio.h>
main()
{
	
	int n[10];
	int i;
	int sum=0;
	int even=0;
	int odd=0;
	printf("enter 10 number \n ");
	
	for(i=1; i<=9; i++)	
		scanf("%d \n",&n[i]);
    for(i=0;i<=9; i++)
    {
		if(n[i]%2==0)
		{
			sum = sum + even;
		}
		else
		{
		
			sum = sum + even;
			
		}
		
    }
    
    printf("total is :%d ",sum);

}
