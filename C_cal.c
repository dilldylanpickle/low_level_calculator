#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void additionFunction();
void subtractionFunction();
void multiplicationFunction();
void divisionFunction();

int main (int argc, char **argv)
{

    char bufferMain[4096];
    char menuInput[1];
 
    while (1) {
        printf("Enter one of the following actions or press CTRL-D to exit.");
        putchar('\n');
        printf("A - addition");
        putchar('\n');
        printf("S - subtraction");
        putchar('\n');
        printf("M - multiplication");
        putchar('\n');
        printf("D - division");
        putchar('\n');
 
        fgets(bufferMain, sizeof(bufferMain), stdin);
            sscanf(bufferMain, "%[^\t\n]", menuInput);
            fflush(stdin);
 
        if (strcmp(menuInput, "A") == 0 || strcmp (menuInput, "a") == 0) {
            additionFunction();
        }
        else if (strcmp(menuInput, "S") == 0 || strcmp (menuInput, "s") == 0) {
            subtractionFunction();
            putchar('\n');
        }
        else if (strcmp(menuInput, "M") == 0 || strcmp (menuInput, "m") == 0) {
            multiplicationFunction();
            putchar('\n');
        }
        else if (strcmp(menuInput, "D") == 0 || strcmp (menuInput, "d") == 0) {
            divisionFunction();
            putchar('\n');
        }
        else {

            printf("ERROR: fail to enter valid character");
            putchar('\n');
            //exit(EXIT_FAILURE);
        }
    }
    return 0;
}

void additionFunction () {

    int integerOneInput;
    int integerTwoInput;
    int total;
    char userInputBuffer[4096];

    printf("You've selected addition!\n");

    printf("Enter the first integer: ");
    if (fgets(userInputBuffer, sizeof(userInputBuffer), stdin) == NULL ) {
        printf("ERROR: fail to read the standard input"); 
        putchar('\n');   
    } else {
        sscanf(userInputBuffer, "%d", &integerOneInput);
        fflush(stdin);
    }


    printf("Enter the second integer: ");
    if (fgets(userInputBuffer, sizeof(userInputBuffer), stdin) == NULL ) {
        printf("ERROR: fail to read the standard input"); 
        putchar('\n');   
    } else {
        sscanf(userInputBuffer, "%d", &integerOneInput);
        fflush(stdin);
    }

    printf("The total is %d\n", integerOneInput + integerTwoInput);
}

void subtractionFunction () {
    printf("You've selected subtraction!");
}

void multiplicationFunction () {
    printf("You've selected multiplcation!");
}

void divisionFunction () {
    printf("You've selected division!");
}