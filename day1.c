#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double k;
    char c[100];
    scanf("%d",&j);
    scanf("%lf",&k);
    scanf(" %[^\n]",c);
    // Declare second integer, double, and String variables.
    // Read and save an integer, double, and String to your variables.
    int a=0;
    a=i+j;
    printf("%d",a);
    double b;
    b=d+k;
    printf("\n%.1lf",b);
    printf("\n%s%s",s,c);

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    return 0;
}

