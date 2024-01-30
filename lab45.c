#include <stdio.h>
int main()
{
	int prev,current,units;
	float amount = 0.0;
	
	
	printf("Enter Previous meter reading:");
	scanf("%d" ,&prev);
	printf("Enter Current meter reading:");
	scanf("%d" ,&current);
		units=current-prev;

	if (units<=100)
	{
		amount = units* 1.4;
	}
	else if (units<=200)
	{
		amount = 1.4*100 + (units-100)*2.5;
	}
	else(units>200);
	{
		amount = 390 + (units-200)*3.2;
	}
	
	printf("Bill Amount :%f\n",amount);
 	return 0;
}
