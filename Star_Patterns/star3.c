#include <stdio.h>
int main ()
{
    //Left Half Pyramid
    for (int i=1;i<=5;i++) //Print Rows
    {
        for (int j=1;j<=5-i;j++) //Print Spaces
        {
            printf ("  ");
        }
        for (int j=1;j<=i;j++) //Print '*' marks
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}