#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double br1;
    double br2;
    double rez;}

    printf("\nEnter your operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &br1);
    
    printf("Enter number 2: ");
    scanf("%lf", &br2);

    switch(operator)
    {
        case '+':
            rez = br1 + br2;
            printf("\nResult is: %.2lf\n", rez);
            break;
        case '-':
            rez = br1 - br2;
            printf("\nResult is: %.2lf\n", rez);
            break;
        case '*':
            rez = br1 * br2;
            printf("\nResult is: %.2lf\n", rez);
            break;
        case '/':
            rez = br1 / br2;
            printf("\nResult is: %.2lf\n", rez);
            break;
        default:
            printf("%c operator that you entered, is not valid!", operator);
    }
    return 0;
}