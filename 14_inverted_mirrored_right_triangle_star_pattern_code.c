#include<stdio.h>
void main()
{
	int x,y,z;
	for(x=5;x>0;x--)
	{
		for(y=5-x;y>0;y--)
		{
			printf(" ");
		}
		for(z=x;z>0;z--)
		{
			printf("*");
		}
		printf("\n");
	}
}
