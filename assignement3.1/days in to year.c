#include<stdio.h>

int main()
{
	
	float Days ,week,Year;
	char choice;
	printf("enter your choice \n");
	
	printf("1. Days To Year   \n");
	
	printf("2. Year To days \n");
	scanf(" %d", &choice);
	
	
	if (choice == 1)
	{
		
		printf("enter your days \n");
		scanf(" %f" , &Days);
		printf("%f", Days * 1 / 365);
	}
	else if(choice == 2)
	{
		printf("enter Year \n");
		scanf(" %f" , &Year);
		printf("%f", Year * 365 / 1);
		
	}else
	{
		printf("---Error---");
	}
	
}
