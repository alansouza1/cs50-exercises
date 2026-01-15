#include <stdio.h>

void print_row(int height, int size);
void print_hashes(int size);
void print_spaces(int height, int size);

int main(void)
{
    int height;

    // Asks the user for the height of the pyramid
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // Prints a pyramid
    for (int counter = 1; counter <= height; counter++)
    {
        print_row(height, counter);
        printf("\n");
    }
}

// Prints the row of the pyramid
void print_row(int height, int size)
{
    print_spaces(height, size);
    print_hashes(size);
    printf("  ");
    print_hashes(size);
}

// Prints the hashes of pyramid
void print_hashes(int size)
{
    for (int row = 1; row <= size; row++)
    {
        printf("#");
    }
}

// Prints the spaces before the hashes
void print_spaces(int height, int size)
{
    for (int space = 1; space <= height - size; space++)
    {
        printf(" ");
    }
}
