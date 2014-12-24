/* a program to verify the value of getchar() != EOF */

#include <stdio.h>

int main()
{
        char c;

        do {
                c = getchar();
                if(c == '\n')
                        printf("getchar() is \\n, and ");
                else if(c == EOF)
                        printf("getchar() is EOF, and ");
                else
                        printf("getchar() is %c, and ", c);
                printf("the value of getchar() != EOF is %d\n", (c != EOF));
        } while (c != EOF);

        return 0;
}
