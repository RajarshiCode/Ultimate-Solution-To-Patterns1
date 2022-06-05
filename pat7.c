#include <stdio.h>

int main()
{
    int i, j, k, x, rows, half_row=1;
    int stars, spaces;

    printf("Enter rows to print : ");
    scanf("%d", &rows);

    int a;
    stars = 1;
    spaces = rows - 1;

    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    // for(i=1; i<=rows; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");

        /* Print numbers */
            if(rows >= i){  /* Print First Half */
                x = i;
                for(k=0;k<i;k++){
                    if(x>=10){
                        x=x%10;
                    }
                    printf("%d", x);
                    x++;
                }
                x--;
                for(k=1;k<i;k++){
                    x--;
                    printf("%d", x);
                    if(x==0){
                        x=10;
                    }
                }
            }
            else{    /* Print Second Half */
                x--;
                for(k=1;k<=i-(2*half_row);k++){
                    if(x==10){
                        x=0;
                    }
                    printf("%d", x);
                    x++;
                }
                x--;
                for(k=1;k<=i-(2*half_row)-1;k++){
                    x--;
                    printf("%d", x);
                    if(x==0){
                        x=10;
                    }
                }
                half_row++;
            }


        /* Move to next line */
        printf("\n");

        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    
    return 0;

}