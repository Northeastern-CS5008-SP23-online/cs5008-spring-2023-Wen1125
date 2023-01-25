/*C Program to read and print the n employee details using structure and dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>
/*structure to hold the details of an employee*/
typedef struct employee
{
    int empId;
    char Name[100];
    char Designation[100];
    char Dept[10];

}employee_t;
/* Read the employee details using scanf*/
void readData(int n, employee_t* s)
{   
    for (int i=0; i<n; i++) {
        printf("Please enter employeeID, Name, Designation, Department of Employee %d:\n ", i+1);
        scanf("%d", &(s->empId));
        scanf("%s", s->Name);
        scanf("%s", s->Designation);
        scanf("%s", s->Dept);
        printf("\n");
        s++;
    }
    
    
}
/* Function to print the employee details*/
void display(int n, employee_t* s)
{
    for (int i=0; i<n; i++) {
        printf("The details of the employee %d:\n", i+1);
        printf("empId: %d\n", s->empId);
        printf("Name: %s\n", s->Name);
        printf("designation: %s\n", s->Designation);
        printf("Dept: %s\n", s->Dept);
        printf("\n");
        s++;
    }
    
}

/*----------Main Program--------*/
int main()

{
    // Get the number of employees.
    int n;
    printf("Enter the numebr of employees: ");
    scanf("%d", &n);

    // Allocting memory accordingly.
    employee_t* s = (employee_t*)malloc(3* sizeof(employee_t));
    if (s!=NULL) {
        readData(n, s);
        display(n, s);
    }
    free(s);
return 0;
}

