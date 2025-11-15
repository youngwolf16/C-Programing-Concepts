/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 25-10-2025
Program Name : to implement strtok function

Sample Input : 

Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:

Sample Output:

Tokens :

 
Bangalore

 
Chennai

 
Kolkata

 
Delhi
Mumbai

*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

// Splits a string into tokens based on multiple delimiters
char *my_strtok(char str[], const char delim[]) {
    static char *ptr;
    static int i;
    int j, start;

    if (str != NULL) {
        ptr = str;
        i = 0;
    }

    // Skip all leading delimiters
    while (ptr[i] != '\0') {
        j = 0;
        while (delim[j] != '\0') {
            if (ptr[i] == delim[j]) {
                i++; // Skip delimiter
                break;
            }
            j++;
        }
        if (delim[j] == '\0') break; // Found non-delimiter
    }

    if (ptr[i] == '\0') return NULL;

    start = i;

    // Scan until next delimiter or end of string
    while (ptr[i] != '\0') {
        j = 0;
        while (delim[j] != '\0') {
            if (ptr[i] == delim[j]) {
                ptr[i] = '\0'; // Terminate token
                i++;
                return &ptr[start];
            }
            j++;
        }
        i++;
    }

    return &ptr[start]; // Last token
}


int main()
{
    char str[50], delim[50];

    // Read full input string including spaces
   // printf("Enter the string  : ");
    scanf("%s", str);  // Reads until newline
    //getchar();             // Consume leftover newline
    __fpurge(stdout);     

    // Read delimiter characters
   // printf("Enter the delimeter : ");
    scanf("\n%s", delim);  // Reads delimiter string
    __fpurge(stdout);    

    // Begin tokenization
    char *token = my_strtok(str, delim);
    printf("Tokens :");

    // Print tokens one by one
    while (token) {
        printf("\n%s", token);
        token = my_strtok(NULL, delim); // Continue with next token
    }
}