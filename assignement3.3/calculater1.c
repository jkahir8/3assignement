#include<stdio.h>
int main()
{
	char choice;
	int num1, num2;
	
	
	printf("Enter first Number \n");
	scanf("%d", &num1);
	printf("Enter second Number \n");
	scanf("%d", &num2);
	
	printf("Enter choice \n");
	scanf(" %c", &choice);
	
	switch(choice)
	{
		case '+':
		{
			printf("%d", num1 + num2);
			break;
		}
		case '-':
		{
				printf("%d", num1 - num2);
			break;
		}
		case '/':
		{
				printf("%d", num1 / num2);
			break;
		}
		case '*':
		{
				printf("%d", num1 * num2);
			break;
		}
		case '%':
		{
				printf("%d", num1 % num2);
			break;
		}
		default:
		{
				printf("invalid choice  \n");
				
			break;
		}
	}
	
}
