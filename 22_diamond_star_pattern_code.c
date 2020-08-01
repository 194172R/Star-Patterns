#include<stdio.h>
void main()
{
		int x,y,z=0;
	for(x=10;x>0;x--)
	{
		if(x>5)
		{
			for(y=x-6;y>0;y--)
			{
				printf(" ");
			}
			for(y=z+1;y>0;y--)
			{
				printf("*");
			}
			z=z+2;
		}
		else
		{
			for(y=6-x;y>0;y--)
			{
				printf(" ");
			}
			for(y=z-3;y>0;y--)
			{
				printf("*");
			}
			z=z-2;
		}
		printf("\n");
	}
}
