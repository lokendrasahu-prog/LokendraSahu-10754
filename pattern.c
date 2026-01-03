#include <stdio.h>   // Includes standard input-output functions
int main() {
    int n, i, j;     // Declare variables:
                     // n = number of rows
                     // i = outer loop counter (rows)
                     // j = inner loop counter (columns)

    printf("Enter number of rows: ");  // Ask user for input
    scanf("%d", &n);                   // Read number of rows from user

    // Outer loop controls the number of rows
    for (i = 1; i <= n; i++) {

        // Inner loop prints numbers from 1 to i in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", j);           // Print the current number
        }

        printf("\n");                   // Move to the next line after each row
    }

    return 0;                           // End of program
}
