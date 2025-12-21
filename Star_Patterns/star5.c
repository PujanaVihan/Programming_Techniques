#include <stdio.h>
int main ()
{
    //Inverted Right Half Pyramid
    for (int i=5;i>0;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}