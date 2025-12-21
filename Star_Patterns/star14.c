#include <stdio.h>
int main ()
{
    //Hollow Diamond Pyramid
    
    
    for (int i=1;i<=4;i++) //Print rows
    {
        for (int j=1;j<=4-i;j++) //Print spaces
        {
            printf (" ");
        }
        for (int j=1;j<=i;j++) //Print '*' marks
        {
            if ((i==3 && j==2) || (i==4 && j==2) || (i==4 && j==3))
            {
                printf ("  ");
            }
            else 
            {
                printf ("* ");
            }
        }
        printf ("\n");
    }
    
    for (int i=1;i<=3;i++) 
    {
        for (int j=1;j<=i;j++)
        {
            printf (" ");
        }
        for (int j=1;j<=4-i;j++)
        {
            if (i==1 && j==2)
            {
                printf ("  ");
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