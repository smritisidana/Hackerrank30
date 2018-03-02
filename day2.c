#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double meal_cost;
    scanf("%lf", &meal_cost);
    int tip_percent;
    scanf("%i", &tip_percent);
    int tax_percent;
    scanf("%i", &tax_percent);
    double tip;
    tip=(tip_percent*meal_cost)/100;
    double tax;
    tax=(tax_percent*meal_cost)/100;
    int totalCost;
    totalCost=meal_cost+tip+tax+0.5;
    printf("The total meal cost is %d dollars.",totalCost);
    return 0;
}
