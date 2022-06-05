#include <stdio.h>

int main() {
   int i,j,x,y;
   
   printf ("please enter length");
   scanf ("%d", &y);
   printf ("please enter width");
   scanf ("%d", &x);
   
   for (i=1;i<=x;i++)
   {
       for (j=1;j<=y;j++)
       {
            if (i==1|| i==x||j==1||j==y)           
                printf ("*");           
            else           
               printf("@");           
       }
       printf ("\n");
   }
    
    return 0;
}