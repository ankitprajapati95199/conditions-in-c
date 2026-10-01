#include <stdio.h>

int main() {
    //program to check wheather a year is leap year or not.
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year % 400 == 0 || (year % 4 ==0  && year % 100 != 0 ))
    {
        printf("%d is a leap year.",year);
    }
    else
    {
        printf("%d is NOT a leap year.");
    }
    return 0;
}