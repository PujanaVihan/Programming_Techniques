#include <stdio.h>
int main ()
{
    //Full Pyramid
    for (int i=5;i>0;i--) //Print rows
    {
        for (int j=1;j<i;j++) //print spaces
        {
            printf (" ");
        }
        for (int j=5;j>=i;j--) //Print '*' marks
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}