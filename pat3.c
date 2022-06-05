#include<stdio.h>
int main()
{
    int i,j,k,m=1;
    for(i=1;i<=10;i++)
    {

        for(k=10;k>i;k--)
            printf("\t");        
        for(j=1;j<=i;j++)
        {    printf("%d\t",m++);
        // if(m>10)
        //    m=1;
        }        
    printf("\n");        
    }
    
    
    
    
    return 0;
}