#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x=get_int("Size:");
    }
    while (x < 1 || x > 8);
    //for each row
    for (int r = 0;r  < x; r++)
    {
        // for each column
        for (int c = 0; c < x; c++)
        {
            //print a brick
            if(r + c < x - 1)
            printf(" ");
            else
            printf("#");
        }
    {
        //Double space in the middle
        printf("  ");
        //other column for the other piramid
        for (int k = 0; k - 1 < x; k++)
        {
            //print a brick
            if(r + k > x - 1)
            printf("#");
        }
    }
    printf("\n");
    }
}