/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Determine whether a number n is a factorial number or not.
*/
#include "stdio.h"
void main()
{
	int n = 1, fact, temp = 1;
	printf("\n Enter n - ");
	scanf("%d", &fact);
	
	while(n < fact)
	{
		temp *= n;
		if(temp == fact)
		{
			printf("\n Yes it a factorial number \n");
			break;
		}
		else if(temp > fact)
		{
			printf("\n No it is not factorial number \n");
			break;
		}
		
		n++;
	}
}
