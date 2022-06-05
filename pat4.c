#include<stdio.h>
int main()
{
    int i,j,k,m;
    for(i=1;i<10;i++)
    {    for(j=1;j<i;j++)
            printf("\t");          
       for(k=10;k>=i;k--)
            printf("%d\t",k);        
    printf("\n");        
    }
    for(i=10;i>=1;i--)
    {  
        for(k=1;k<i;k++)
            printf("\t");        
        for(j=10;j>=i;j--)
            printf("%d\t",j);          
    printf("\n");        
    }
    
    
    
    
    return 0;
}