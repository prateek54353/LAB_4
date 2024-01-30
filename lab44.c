#include <stdio.h>
int main()
{
	int m,p,c,t;
	
	printf("Enter the marks obtained in physics, chemistry and mathematics:");
	scanf("%d%d%d" ,&p,&c,&m);
	
		t = p + c + m;
	
	if ((m>=65 && p>=65 && c>=65 && t>=190)||(m+p >=140))
	{
		printf("The candidate is eligible for admission\n");
	}
	else 
	{
		printf("The candidate is not eligible for admission\n");
	}
	
 	return 0;
}
