#include<stdio.h>
#include<string.h>
int main()
{
	int pr,t,si;
	char a;
	printf("Is customer senior citizen(y/n):");
	scanf("%c",&a);
	printf("enter the principal:");
	scanf("%d",&pr);	
	printf("\nenter the time:");
	scanf("%d",&t);
	if(a=='y' || a=='Y')
	{
		si=(pr*0.1*t)/100;
		printf("\nsimple interest: %d ",si);
	}
	else
	{
		si=(pr*0.12*t)/100;
		printf("\nsimple interest : %d ",si);
	}
	return 0;
	
}
