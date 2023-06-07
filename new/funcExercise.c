#include <stdio.h>
#include "sizeComp.h"

int GCD(int a, int b);
int absoluteVal(int num);
// int maxNum(int first, int second);
// int minNum(int first, int second);

int main()
{
    int a = 8;
    int b = 12;
    printf("the gcd of %d and %d is %d\n", a, b, GCD(a, b));
    printf("The absolute val of 9 is %d\n", absoluteVal(9));
    return 0;
}

int GCD(int a, int b)
{
    int dividend = maxNum(a, b);
    int divisor = minNum(a, b);
    int modTest = maxNum(a, b) + 10;
    while (modTest != 0)
    {
        modTest = dividend % divisor;
        dividend = divisor;
        if (modTest == 0)
            return divisor;
        else
            divisor = modTest;
    }

    return 0;
}

int absoluteVal(int num)
{
    if (num < 0)
        return -1 * num;
    else
        return num;
}