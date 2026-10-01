#include <stdio.h>

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n > 0)
    {
        printf("The number %d is a positive number.",n);
    }
    else if (n < 0)
    {
        printf("The number %d is a negative number.",n);
    }
    else
    {  
         printf("The number %d is zero.",n);
    }
    return 0;
}
