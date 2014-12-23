#include <stdio.h>

/* convert fahr to cels */
static inline int convert_tocels(int fahr)
{
        return 5 * (fahr - 32) / 9;
}

/* print fahrenheit-celsius table for fahr = 0 ~ 300 */
int main()
{
        // print out header
        printf("fahrenheit-celsius\nconversion table\n");

        // range
        const int lower = 0;
        const int upper = 300;
        const int step = 20;

        // print out table 
        for(int fahr = 0; fahr <= upper; fahr += step) {
                int cels = convert_tocels(fahr);
                printf("%d\t%d\n", fahr, cels);
        }
        return 0;
}
