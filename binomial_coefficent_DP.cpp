// A Dynamic Programming based solution is one that uses table C[][] to calculate the Binomial Coefficient

#include <stdio.h>

// Prototype of a utility function that returns minimum of two integers
int min(int a, int b);

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++)
    {
        // Caculate value of Binomial Coefficient in bottom up manner
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
            }
        }
    }
    return C[n][k];
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int n = 5, k = 2;
    printf("Value of C(%d, %d) is %d ", n, k, binomialCoeff(n, k));
}