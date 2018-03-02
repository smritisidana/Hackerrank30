#include<stdio.h>
int main()
{
    char c[50];
    printf("Enter the string:");
    scanf("%[^\n]",c);
    printf("Hello, World.\n");
    printf("%s",c);
    return 0;
}
