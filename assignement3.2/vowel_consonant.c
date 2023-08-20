#include<stdio.h>
main()
{
	
	int ch;
	
	printf("enter a alphabet : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("vowel");
			break;
			
		case 'e' :
			printf("vowel");
			break;
		
		case 'i' :
			printf("vowel");
			break;
		
		case 'o' :
			printf("vowel");
			break;
				
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
	}
}
