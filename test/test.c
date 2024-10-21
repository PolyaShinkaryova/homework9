#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>


   
int main() 
{
    int h1,
        l1,
        h2,
        h3,
        l3,
        d;
       char flag = ' ';

    while (flag != '0')
    {
        char g = getchar();
        scanf("%d%d%d%d%d%d", &h1, &l1, &h2, &h3, &l3, &d);
        
        for (int a = 1; a <= h1 - h2; a++)
        {
            for (int i = 1; i <= l1; i++)
            {
                putchar(g);
            }
            printf("\n");
        }

        for (int b = 1; b <= h2; b++)
        {
            for (int n = 1; n <= d; n++)
            {
                putchar(g);
            }
            for (int k = 1; k <= l3; k++)
            {
                printf(" ");
            }
            for (int l = 1; l <= l1 - (l3 + d); l++)
            {
                putchar(g);
            }
            printf("\n");
        }
        for (int s = 1; s <= h3; s++)
        {
            for (int f = 1; f <= d; f++)
            {
                printf(" ");
            }
            for (int y = 1; y <= l3; y++)
            {
                putchar(g);
            }
            printf("\n");
        }
        flag = getchar();
        flag = getchar();
    }
    return 0;
}