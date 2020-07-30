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
		if(x==5 || x==1)
		{
			for(z=0;z<5;z++)
			{
				printf("*");
			}
			
		}
		else
		{
			for(z=0;z<5;z++)
			{
				if(z==0 || z==4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
