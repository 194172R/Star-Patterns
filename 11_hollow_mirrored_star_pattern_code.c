#include<stdio.h>
void main()
{
	int x,y,z;
	for(x=1;x<=5;x++)
	{
		for(z=5-x;z>0;z--)
		{
			printf(" ");
		}
		for(y=x;y>0;y--)
		{
			if(x<2 || x<5)
			{
				if(y==x || y==1 )
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
		printf("\n");
	}
}
