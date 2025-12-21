#include <stdio.h>
int main ()
{
    //Inverted Full Pyramid
    for (int i=1;i<=5;i++) //Print rows
    {
        for (int j=1;j<i;j++) //Print Spaces 
        {
            printf (" ");
        }
        for (int j=5;j>=i;j--) //Print '*" marks
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}