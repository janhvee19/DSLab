/*Program for Computing A raised to power n using Recursion*/
#include <stdio.h>
double power(double A, int n, double result) 
{
    if (n == 0) 
    {
        return result;
    } 
    else if (n > 0) 
    {
        return power(A, n - 1, result * A);
    } 
    else
    {
        return power(A, n + 1, result / A);
    }
}

int main() 
{
    double A;
    int n;

    printf("Enter the base (A): ");
    scanf("%lf", &A);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    double result = 1.0;

    if (n >= 0) 
    {
        result = power(A, n, result);
    } 
    else 
    {
        result = 1.0 / power(A, -n, result);
    }

    printf("%.2lf raised to the power %d is %.2lf\n", A, n, result);

    return 0;
}
