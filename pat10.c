#include <stdio.h>
int main()
{
    int i, j, m;
    // for deepasree
    printf("\nEnter the number of lines you want in your pattern = ");
    scanf("%d", &m);
    for (i = 1; i <= m * 2; i += 2)
    {
        for (j = i; j <= m * 2; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            if (i == 1 || i == m * 2 - 1 || j == 1 || j == i)
                printf("* ");
            else
                printf("@ ");
        printf("\n");
    }  
    
    return 0;
}