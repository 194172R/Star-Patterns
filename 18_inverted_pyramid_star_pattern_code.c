#include<stdio.h>
void main()
{
	int x,y,z=10;
	for(x=0;x<5;x++)
	{
		for(y=0;y<x;y++)
		{
			printf(" ");
		}
		for(y=1;y<z;y++)
		{
			printf("*");
		}
		z=z-2;
		printf("\n");
	}
}
