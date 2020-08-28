#include<stdio.h>
int main()
{
	int i,j,x=1;
	for(i=13;i>0;i--)
	{
		if(i>10)
		{
			for(j=0;j<19;j++)
			{
				if((j<20-i && j>=i-11) || (j>=i-1 && j<=29-i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		else
		{
			for(j=0;j<19;j++)
			{
				if(j>=10-i && j<=i+8)
				{
					if(i==10)
					{
						if(j<5 || j>14)
						{
							printf("*");
						}
						else
						{
							if(x==1)
							printf("Codeforwin");
							x++;
						}
					}
					else
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
