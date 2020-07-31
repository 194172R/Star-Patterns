#include<stdio.h>
void main()
{
	int x,y,z=2;
	for(x=0;x<5;x++)
	{
		for(y=4-x;y>0;y--)
		{
			printf(" ");
		}
		for(y=1;y<z;y++)
		{
			if(x>0 && x<4)
			{
				if(y==1 || y==z-1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
		}
		z=z+2;
		printf("\n");
	}
}
