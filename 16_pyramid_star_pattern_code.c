#include<stdio.h>
void main()
{
	int x,y,z=2;
	for(x=0;x<5;x++)
	{
		for(y=5-x;y>0;y--)
		{
			printf(" ");
		}
		for(y=1;y<z;y++)
		{
			printf("*");
		}
		z=z+2;
		printf("\n");
	}
}
