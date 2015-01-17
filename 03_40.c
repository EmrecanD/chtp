#include <stdio.h>

int main()
{
    int line=1, c=1; // line is used as line number counter, c is used as charachter counter filling each line

    while (line <= 8) { // Looping through lines

        if(line%2 == 0) // Every even line has an extra space in beginning
            printf(" ");
        while (c <= 8) { // Filling each line, looping through charachters
            printf("* ");
            c++;
        }

        c = 1; // After filling of one line is done, resetting position of the counter used
        printf("\n"); // Moving to the next line
        line++; // Incrementing line counter
    }
    return 0;
}
