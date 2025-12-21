#include <stdio.h>
int main ()
{
    //Hollow Inverted Full Pyramid
    for (int i=1;i<=4;i++) //Print rows
    {
        for (int j=1;j<i;j++) //Print outer spaces
        {
            printf (" ");
        }
        for (int j=1;j<=5-i;j++)  
        {
            if (i==2 && j==2)
            {
                printf ("  "); //Print inner spaces
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