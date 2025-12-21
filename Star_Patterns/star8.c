#include <stdio.h>
int main ()
{
    //Rhombus Pattern
    for (int i=1;i<=6;i++) //Print rows
    {
        for (int j=1;j<i;j++) //Print Spaces
        {
            printf (" ");
        }
        for (int j=0;j<4;j++) //Print 4 '*' marks
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}