#include<stdio.h>
void main()
{
	int x,y,z;
	for(x=0;x<5;x++)
	{
		for(z=0;z<x;z++)
		{
			printf(" ");
		}
		for(y=0;y<5;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
