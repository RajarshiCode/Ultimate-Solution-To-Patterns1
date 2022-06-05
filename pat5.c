#include <stdio.h>
int main()
{
    int i, j, k, m;
    // for (i = 1; i <= 10; i++)
    // {
    //     for (j = i; j <= 10; j++)
    //         printf(" ");
    //     for (j = 1; j <= i; j++)
    //         printf("%d ",j);
    //         // printf("* ");
    //     printf("\n");
    // }
    // for (i = 9; i >= 1; i--)
    // {
    //     for (j = i; j <= 10; j++)
    //         printf(" ");
    //     for (j = 1; j <= i; j++)
    //        printf("%d ",j);
    //         // printf("* ");
    //     printf("\n");
    // }
    // for (i = 1; i <= 10; i++)
    // {
    //     m=10;
    //     for (j = i; j <= 10; j++)
    //         printf(" ");
    //     for (j = 1; j <= i; j++)
    //         printf("%d ",m--);
    //         // printf("%d ",j);
    //         // printf("* ");
    //     printf("\n");
    // }
    // for (i = 1; i <= 10; i++)
    // {
    //     for (j = i; j <= 10; j++)
    //         printf(" ");
    //     for (j = 10; j >= i; j--)
    //         printf("%d ",j);
    //         // printf("* ");
    //     printf("\n");
    // }
    // for (i = 9; i >= 1; i--)
    // {
    //     for (j = i; j <= 10; j++)
    //         printf(" ");
    //     for (j = 1; j <= i; j++)
    //        printf("%d ",j);
    //         // printf("* ");
    //     printf("\n");
    for(i=1;i<=10;i++)
    {
        for(j=i;j<10;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");    
    }
    
    return 0;
}