#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("enter the range:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n;b++)
		{
			for(c=1;c<=n;c++)
			{
				if(c*c==a*a+b*b)
				{
					printf("%d,%d,%d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
