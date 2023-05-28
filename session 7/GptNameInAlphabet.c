#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j, count, flag = 1;
    char temp[20];
    char str[][20] = {"William", "Tim", "Roger", "Xavier", "Tina", "Albert", "George"};
    int length = sizeof(str) / sizeof(str[0]); // Calculate the length of the array
    
    printf("The Name list is:\n\n");
    for (i = 0; i < length; i++) {
        printf("%s\n", str[i]);
    }
    printf("Length before sorting: %d\n\n", length);
    
    do {
        count = 0;
        
        for (i = 0; i < length - 1; i++) {
            if (str[i][0] > str[i + 1][0]) {
                strcpy(temp, str[i + 1]);
                strcpy(str[i + 1], str[i]);
                strcpy(str[i], temp);
                count++;
            }
        }
        
        
    } while (count);
    
    printf("\nThe Name list in Alphabetical Order:\n\n");
    for (i = 0; i < length; i++) {
        printf("%s\n", str[i]);
    }
    printf("Length after sorting: %d\n", length);

    return 0;
}

