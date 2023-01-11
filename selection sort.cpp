#include<stdio.h>
int main()
{
	int i,j,n,arr[25];
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the elements:");
		scanf("%d",&arr[i]);
	}
	int index;
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[index]>arr[j])
			{
				index=j;
			}
			
		}
		if(index!=i)
		{
			int temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}
		printf("\nsorted array:");
		for(i<0;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
	}
	return 0;
}
