#include <stdio.h>
int main()
	{
	char a;

	printf("Enter a character:");
	scanf("%c" , &a);
		if(a>=97)
		{
		char b;
		b=a-32;
		printf("The uppercase of the entered letter is %c\n:",b);
		}
		else
		{
		printf("You have entered %c which is already in uppercase.\n",a);
		}
	return 0;
	}

