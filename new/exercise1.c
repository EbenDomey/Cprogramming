#include <stdio.h>

int main()
{
    int i, sum, val, p, start, stop, step;
    sum = 0;
    int a[15];
    // int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    printf("Hello user!\nPlease input a range of numbers for which u want to know its prime numbers\n");
    printf("Start: \n");
    scanf("%d", &start);
    printf("End: \n");
    scanf("%d", &stop);
    printf("Step: \n");
    scanf("%d", &step);

    for (int l = start; l < stop; l += step)
    {
        p = l;
        a[l] = p;
        p += 1;
    }

    printf("The prime numbers in this range are: \n'");
    for (int j = 0; j < stop; j++)
    {
        val = a[j];

        for (i = 2; i <= val; i++)
        {
            if (val % i == 0)
                sum += 1;
        }
        if (sum == 1)
        {
            printf("%d, ", val);
        }
        sum = 0;
    }
    printf("'\n");
}