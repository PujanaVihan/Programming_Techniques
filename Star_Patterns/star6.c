#include <stdio.h>
int main ()
{
    //Inverted Left Half Pyramid
    for (int i=5;i>0;i--)
    {
        for (int j=5;j>i;j--)
        {
            printf ("  ");
        }
        for (int j=1;j<=i;j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}