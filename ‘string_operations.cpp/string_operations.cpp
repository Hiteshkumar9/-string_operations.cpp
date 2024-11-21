/*
 * FILE          : string_operations.cpp
 * PROJECT       : string_operations.cpp
 * PROGRAMMER    : HITESH KUMAR
 * FIRST VERSION : 2024
 * DESCRIPTION   :
 *   This assignment focuses on developing basic string manipulation skills in C and this program prompts
     the user to input a string, processes the string to count the number of vowels, and then reverses the 
     string before displaying it
 **/


#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100  // Maximum length for input string

/**
 * @brief Counts the number of vowels in the given string.
 *
 * @param str The input string to process.
 * @return int The number of vowels in the string.
 */
int countVowels(const char* str) {
    int count = 0;
    char ch;
    for (int i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

/**
 * @brief Reverses the given string.
 *
 * @param str The input string to reverse.
 * @param reversed The output string that will hold the reversed string.
 */
void reverseString(const char* str, char* reversed) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';  // Null-terminate the reversed string
}

int main() {
    char input[MAX_LENGTH];
    char reversed[MAX_LENGTH];

    // Prompt the user for input
    printf("Enter a string: ");
    fgets(input, MAX_LENGTH, stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = 0;

    // Count vowels
    int vowelCount = countVowels(input);
    printf("Total number of vowels: %d\n", vowelCount);

    // Reverse the string
    reverseString(input, reversed);
    printf("Reversed string: %s\n", reversed);

    return 0;
}
