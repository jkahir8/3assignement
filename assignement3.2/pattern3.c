#include<stdio.h>
void main()
{
    int i,j,k,n;
 
//    printf("Enter the no of lines\n");
//    scanf("%d",&n);
 
    for(i=0;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
         for(k=0; k<i; k++)
         {
         	printf("* ");
		 }
    
		 printf("\n");
	}
}
