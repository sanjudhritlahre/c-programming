#include <stdio.h>

// Creat a function
int sum(int a, int b)
{
    return a + b;  // code to be executed
}

int main(void)
{

    int a, b, c;
    a = 56;
    b = 98;
    c = sum(a, b); // call the function
    printf("The sum is: %d", c);

    return 0;
}
