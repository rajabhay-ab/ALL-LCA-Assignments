#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100], s2[100], temp[200];
    int choice, i, n;
    char ch, *p;

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Length (strlen)\n");
        printf("2. Copy (strcpy)\n");
        printf("3. Concatenate (strcat)\n");
        printf("4. Compare (strcmp)\n");
        printf("5. Reverse\n");
        printf("6. Convert to Uppercase (toupper)\n");
        printf("7. Convert to Lowercase (tolower)\n");
        printf("8. Search a character (strchr)\n");
        printf("9. Search a substring (strstr)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            printf("Length = %lu\n", strlen(s1));
            break;

        case 2:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            strcpy(s2, s1);
            printf("Copied string = %s\n", s2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf(" %[^\n]", s1);
            printf("Enter second string: ");
            scanf(" %[^\n]", s2);
            strcpy(temp, s1);
            strcat(temp, s2);
            printf("Concatenated string = %s\n", temp);
            break;

        case 4:
            printf("Enter first string: ");
            scanf(" %[^\n]", s1);
            printf("Enter second string: ");
            scanf(" %[^\n]", s2);
            if (strcmp(s1, s2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are NOT equal.\n");
            break;

        case 5:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            n = strlen(s1);
            for (i = 0; i < n; i++)
                temp[i] = s1[n - 1 - i];
            temp[n] = '\0';
            printf("Reversed string = %s\n", temp);
            break;

        case 6:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            for (i = 0; s1[i] != '\0'; i++)
                s1[i] = toupper(s1[i]);
            printf("Uppercase = %s\n", s1);
            break;

        case 7:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            for (i = 0; s1[i] != '\0'; i++)
                s1[i] = tolower(s1[i]);
            printf("Lowercase = %s\n", s1);
            break;

        case 8:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            printf("Enter character to search: ");
            scanf(" %c", &ch);
            p = strchr(s1, ch);
            if (p != NULL)
                printf("'%c' found at position %ld\n", ch, p - s1 + 1);
            else
                printf("Character not found.\n");
            break;

        case 9:
            printf("Enter main string: ");
            scanf(" %[^\n]", s1);
            printf("Enter substring to search: ");
            scanf(" %[^\n]", s2);
            p = strstr(s1, s2);
            if (p != NULL)
                printf("Substring found at position %ld\n", p - s1 + 1);
            else
                printf("Substring not found.\n");
            break;

        case 0:
            printf("Exiting program. Thank you!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
