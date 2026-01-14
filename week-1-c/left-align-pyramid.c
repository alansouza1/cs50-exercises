#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 6; row++)
    {
        for (int col = 0; col < row; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
