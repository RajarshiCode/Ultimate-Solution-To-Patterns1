#include<stdio.h>
int main()
{
    int i,j,k=1,k2=0;
    for(i=1;i<=10;i++)
    {
        for(j=i;j<10;j++)
            printf(" ");
        for(j=1;j<=i;j++)
        {    
            printf("%d",k++);           
        }
        --k;            
        for(j=1;j<i;j++)
            printf("%d",--k);    
        printf("\n");        
    }
    // for(i=1;i<=10;i++)
    // {
    //     k1=i;
    //     // k2=i-1;
    //     for(j=i;j<10;j++)
    //         printf(" ");
    //     for(j=1;j<=i;j++)
    //     {    
    //         printf("%d",k1++);
    //         if(k1==10)
    //         {
    //             k1=0;                
    //         }                            
    //     }        
    //     k2-=k1-2;           
    //     for(j=1;j<i;j++)
    //         printf("%d",k2--);    
    //     printf("\n");        
    // }    
    return 0;
}