#include <stdio.h>
int main ()
{
    //Hollow Full Pyramid
    for (int i=1;i<=4;i++) //Print rows
    {
        for (int j=1;j<=4-i;j++) //Print outer spaces 
        {
            printf (" ");
        }
        for (int j=1;j<=i;j++)
        {
            if (i==3 && j==2)
            {
                printf ("  "); //Print inter space 
            }
            else 
            {
                printf ("* ");
            }
        }
        printf ("\n");
    }
    
    return 0;
}