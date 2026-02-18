#include <stdio.h>

int main() {
    int salary;
    int absentDays;
    scanf("%d %d",&salary,&absentDays);
    int deduction=absentDays*100;
    int finalSalary=salary-deduction;
    printf("Final Salary:₹%d", finalSalary);
    return 0;
}
