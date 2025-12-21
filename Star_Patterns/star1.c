#include <stdio.h>
int main ()
{
    //5*5 Square
    for (int i=0;i<5;i++)  //Outer Loop-Print lines
    {
        for (int j=0;j<5;j++)  //Inner Loop-Print '*' marks
        {
            printf ("* ");
        }
        printf ("\n");
    }
return 0;

}