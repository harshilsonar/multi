#include <stdio.h>

int main() {
    float base_salary, hra_percent, da_percent, ta_percent;
    float hra, da, ta, gross_salary;

   
    printf("Enter the base salary: ");
    scanf("%f", &base_salary);

   
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_percent);

    printf("Enter the DA percentage: ");
    scanf("%f", &da_percent);

    printf("Enter the TA percentage: ");
    scanf("%f", &ta_percent);

    
    hra = (hra_percent / 100) * base_salary;
    da = (da_percent / 100) * base_salary;
    ta = (ta_percent / 100) * base_salary;

   
    gross_salary = base_salary + hra + da + ta;

    
    printf("Base Salary: %.2f\n", base_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
