#include <stdio.h>

int main(){
	
	int grade;
	printf("Enter your marks\n");
	scanf("%d",&grade);
	if (grade<=100 && grade>85)
	{
		printf("Grade A\n");
	}
	else if(grade<=84 && grade>70)
	{
		printf("Grade B\n");
	}
	else if(grade<=69 && grade>55)
	{
		printf("Grade C\n");
	}
	else if(grade<=54 && grade>40)
	{
		printf("Grade D\n");
	}
	else if(grade<=40 && grade>0)
	{
		printf("Grade F\n");
	}
	return 0;
}
