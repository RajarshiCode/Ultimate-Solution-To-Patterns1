#include<stdio.h>
int main()
{
    int i,j,k=0,l,m=10;
    for(i=0;i<=6;i++)
    {
        for(k=65;k<=71-i;k++)
            printf("%c",k);
        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=71-i;l>=65;l--)
            if(l!=71)
                printf("%c",l);
        printf("\n");
    }
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            // printf(" %d",++k);
            printf(" %d",j);
            
        printf("\n");        
    }
    return 0;

}