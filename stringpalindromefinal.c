#include<stdio.h>
#include<string.h>

int main() {
    int i, j, len, flag = 0;
    char n1[40], n2[40] = {};

    // Input
    printf("\n\n\t\tEnter a string : ");
    gets(n1);

    len = strlen(n1);

    // Reversing the string
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        n2[j] = n1[i];
    }

    // Comparing each character
    for (i = 0; i < len; i++) {
        if (n1[i] == n2[i]) {
            flag += 0; // No mismatch
        } else {
            flag += 1; // Mismatch found
        }
    }

    // Output based on the comparison
    if (flag == 0) {
        printf("\n\n\t\tThe given string is a palindrome\n\n");
    } else {
        printf("\n\n\t\tThe given string is not a palindrome\n\n");
    }

    return 0;
}