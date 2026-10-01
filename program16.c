#include <stdio.h>

int main() {
    //program to check a character for vowel or consonent.
    char ch;
    printf("Enter the alphbetical character : ");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel.",ch);
        }
    else
        {
            printf("%c is a consonent.",ch);
        }
    return 0;
}