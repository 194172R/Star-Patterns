#include<stdio.h>
void main()
{
	int x=4,y,z;
	for(z=1;z<=5;z++)
	{
		for(x=5-z;x>0;x--)
		{
			printf(" ");
		}
		for(y=0;y<z;y++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
}
