#include<stdio.h>
#include<string.h>
int main()
{
 	int i,j;
 	float salary,bonus,tot;
 	char grade;
 	printf("Enter A for Grade A and B for Grade B\n");
 	scanf("%c",&grade);
 	printf("Enter Salary\n");
 	scanf("%f",&salary);
 	if(grade=='A' || grade=='a')
 	{
  		if(salary>10000)
  		bonus=(float)(salary*0.05);
  		else
  		bonus=(float)(salary*0.07);
 	}
 	if(grade=='B' || grade=='b')
 	{
  		if(salary>10000)
  		bonus=(float)(salary*0.1);
  		else
  		bonus=(float)(salary*0.12);
 	}
 	printf("Bonus=%.2f\nSalary=%.2f\nTotal Salary=%.2f",bonus,salary,bonus+salary); 
}

