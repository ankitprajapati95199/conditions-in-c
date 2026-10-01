#include<stdio.h>
int main() {
    //program to find smallest among three numbers.
    int a, b, c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);

    if (a<b && a<c)
        {
            printf("%d is the smallest number.",a);
        }
    else if (b<a && b<c)
        {
            printf("%d is the smallest number.",b);
        }
    else
        { 
            printf("%d is the samllest number.",c);
        }
    
    return 0;
}