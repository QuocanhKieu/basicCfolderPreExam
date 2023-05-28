#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize an array of strings
    char strings[][20] = {
        "Hello",
        "World",
        "OpenAI",
        "ChatGPT"
    };

    int i, j;
    char temp[20];

    // Sort the strings in alphabetical order
    for (i = 0; i < sizeof(strings) / sizeof(strings[0]) - 1; i++) {
        for (j = i + 1; j < sizeof(strings) / sizeof(strings[0]); j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                char* tempPtr = strings[i];
                strings[i] = strings[j];
                strings[j] = tempPtr;
            }
        }
    }

    // Print the sorted strings
    for (i = 0; i < sizeof(strings) / sizeof(strings[0]); i++) {
        printf("String %d: %s\n", i, strings[i]);
    }

    return 0;
}

