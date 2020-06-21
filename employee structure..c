#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[20];
	int age[02];
    int phoneno[10];
    int salary;
 
} Employee;
 
int main()
{
    int i, n=2;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //Age
        printf("Age:");
        scanf("%s",employees[i].age);
        //ID
        printf("Phone number: ");
        scanf("%d",&employees[i].phoneno);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
        
        printf("Age \t:");
        printf("%s \n",employees[i].age);
 
        printf("phone number\t: ");
        printf("%d \n",employees[i].phoneno);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
