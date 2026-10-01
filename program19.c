#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("The number %d is divisible by both 3 and 5.",n);
    }
    else
    {
        printf("The number %d is not divisible by both 3 and 5.",n);
    }

    return 0;
}
