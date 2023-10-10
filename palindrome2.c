#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int a, i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    a = strlen(str);
    for (i = 0, j = a - 1; i < a / 2; i++, j--) {
        if (str[i] != str[j]) {
            printf("%s is not a palindrome.\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome.\n", str);
    return 0;
}