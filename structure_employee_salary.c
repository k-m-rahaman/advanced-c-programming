#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic_salary;
    float bonus;
};

int main()
{
    struct Employee e;
    float total;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter basic salary: ");
    scanf("%f", &e.basic_salary);

    printf("Enter bonus: ");
    scanf("%f", &e.bonus);

    total = e.basic_salary + e.bonus;

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Total Salary: %.2f\n", total);

    return 0;
}
