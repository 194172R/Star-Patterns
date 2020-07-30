#include<stdio.h>
void main()
{
	int x,y,z;
	for(x=5;x>0;x--)
	{
		for(y=x-1;y>0;y--)
		{
			printf(" ");
		}
		for(z=0;z<5;z++)
		{
			printf("*");
		}
		printf("\n");
	}
}
