#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter String: ");
    scanf("%s", input);
    char reverse[100];
    char *ptr1 = input + strlen(input) - 1; 
    char *ptr2 = reverse;  
    while (ptr1 >= input) {
        *ptr2 = *ptr1;
        ptr2++;
        ptr1--;
    }
    *ptr2= '\0';  
    ptr1 = input;
    ptr2 = reverse;
    int palindrome = 1;  
    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 != *ptr2) {
            palindrome = 0;
            break;
        }
        ptr1++;
        ptr2++;
    }
    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    
    return 0;
}

