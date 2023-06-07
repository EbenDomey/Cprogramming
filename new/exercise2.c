#include <stdio.h>

int main()
{
    float initVal = 7.3f;
    float sum, sumOfAllRainfall, monthSum, monthlyAverage = 0.0f;
    float YearlyRainfall[5][12] = {
        {2010},
        {2011},
        {2012},
        {2013},
        {2014}};
    // initialize values
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 12; j++)
        {
            YearlyRainfall[i][j] = initVal;
            initVal += 1.5;
        }
        initVal = YearlyRainfall[i][1];
        initVal += 3;
    }
    // test values
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%.2f ,", YearlyRainfall[i][j]);
        }
        printf("\n\n");
    }

    // evaluate yearly rainfall total
    printf("\n\n");
    printf("Year\tRainfall (inches)\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 12; j++)
        {
            sum += YearlyRainfall[i][j];
        }
        sumOfAllRainfall += sum;
        printf("%d\t%0.2f", (int)YearlyRainfall[i][0], sum);
        sum = 0;
        printf("\n\n");
    }

    // evaluate the yearly average
    printf("The yearly average is %0.2f inches\n\n\n", sumOfAllRainfall / 5);

    // evaluate monthly averages
    printf("MONTHLY AVERAGES\n\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\n");
    for (int j = 1; j < 12; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            monthSum += YearlyRainfall[i][j];
        }
        printf("%.2f\t", monthSum / 5);
        monthlyAverage += monthSum / 5;
        monthSum = 0;
    }
    printf("\nMonthly average is: %.2f\t", monthlyAverage);
    printf("\n");
}