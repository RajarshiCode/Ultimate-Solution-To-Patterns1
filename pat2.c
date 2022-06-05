#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=10;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("%d\t",j);                
    printf("\n");     
    }
    for(i=2;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d\t",j);        
    printf("\n");     
    }    
    for(i=1;i<=10;i++)
    {
        for(j=10;j>=i;j--)
        printf("%d\t",j);                
    printf("\n");     
    }
    for(i=9;i>=1;i--)
    {
        for(j=10;j>=i;j--)
        printf("%d\t",j);        
    printf("\n");     
    }    
  return 0;  
}