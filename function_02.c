#include <stdio.h>

void printStar(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%c", '*');
    }
}

int main(void)
{

    printStar(7);
    return 0;
}

// Outputs "*******"
