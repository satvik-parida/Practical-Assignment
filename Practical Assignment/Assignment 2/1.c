#include <stdio.h>
int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;
    tax = gross * 0.05;
    net = gross - tax;
    printf("\nEmployee Name: %s", name);
    printf("\nBasic Salary: %.2f", basic);
    printf("\nHRA: %.2f", hra);
    printf("\nDA: %.2f", da);
    printf("\nGross Salary: %.2f", gross);
    printf("\nIncome Tax: %.2f", tax);
    printf("\nNet Salary: %.2f\n", net);
    return 0;
}