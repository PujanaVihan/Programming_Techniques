#include <stdio.h>
int main ()
{
    //Hollow Square Pattern
    for (int i=1;i<=5;i++) //Print rows
    {
        for (int j=1;j<=5;j++) //Print columns
        {
            if (i==1 || i==5 || j==1 || j==5) //Print '*' marks 
            {
                printf ("* ");
            }
            else 
            {
                printf ("  "); //Print spaces
            }
        }
        printf ("\n");
    }
    return 0;
}