#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    //Prompt user for height
    do {
        height = get_int("Please enter a height between 0 and 23: ");
    } //Validate the user input
    while (height < 0 || height > 23 );

    //for each row of the pyramid
    for (int row = 0; row < height; row++)
    {
        //print left side pyramid
        for (int space = height - row; space > 1; space--)
        {
            printf(" ");
        }
        for (int hashtag = 0; hashtag < row+1; hashtag++)
        {
            printf("#");
        }

        //print gap
        printf("  ");

        //print right side pyramid
        for (int hashtag = 0; hashtag < row+1; hashtag++)
        {
            printf("#");
        }
        printf("\n");
    }
}
