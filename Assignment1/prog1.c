/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Swap Numbers
*/
#include "stdio.h"
void main()
{
	int a,b,c;
	printf("\n Enter A - ");
	scanf("%d", &a);
	printf("\n Enter B - ");
	scanf("%d", &b);
	printf("\n Before Swapping");
	printf("\n A - %d", a);
	printf("\n B - %d", b);
	c = b;
	b = a;
	a = c;
	printf("\n After Swapping");
	printf("\n A - %d", a);
	printf("\n B - %d \n", b);
}
	


