#include <stdio.h>

int main() {
    //to check a number even or odd.
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n%2 == 0)
        printf("The number %d is even number.",n);
    else
        printf("The number %d is an odd number",n);
    
    return 0;
}