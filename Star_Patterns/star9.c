#include <stdio.h>
int main ()
{
    //Diomand Pattern
    
    //Full Pyramid
    for (int i=1;i<=4;i++) //Print rows
    {
        for (int j=4;j>i;j--) //Print spaces
        {
            printf (" ");
        }
        for (int j=1;j<=i;j++) //Print '*' marks
        {
            printf ("* ");
        }
        printf ("\n");
    }
    
    //Inverted Full Pyramid
    for (int i=1;i<=3;i++) 
    {
        for (int j=1;j<=i;j++)
        {
            printf (" ");
        }
        for (int j=3;j>=i;j--)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;

}