// PURPOSE:
// Helps individuals determine wether they should be tested for COVID-19.

// Built by: (Github) @MattMarquise


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    // AGREE
    char* agree = malloc(sizeof(char) * 5);
    printf("\nWould you mind answering some questions to determine if you should be tested for COVID-19?\nType yes or no: ");
    scanf("%s", agree);

    // If yes
    if (strcmp(agree, "yes") == 0) {
        printf("\nOkay, let's begin!\nIt won't take long\n\n");
    }

    // If no
    else {
        exit(0);
    }
    sleep(3);

    printf("For each answer please answer with \"yes\" or \"no\" using no caps.");
    sleep(2);

    // Q1
    char* q1 = malloc(sizeof(char) * 5);
    printf("\n\n\nQ1: Have you ever been tested for COVID-19? ");
    scanf("%s", q1);

    // If yes
    if (strcmp(q1, "yes") == 0) {

        // Q1 Part 2
        char* q1part2 = malloc(sizeof(char) * 5);
        printf("\n\nQ1 PART 2: Have you tested positive for COVID-19 within the past two weeks? ");
        scanf("%s", q1part2);
        if (strcmp(q1part2, "yes") == 0) {
            printf("If you've already been tested then you should wait to be tested again until 10 to 14 days have passed.\n\n");
            return 0;
        }
        else {
            printf("\nOkay, then let's continue...\n\n");
        }

        // Q1 Part 3
        char* q1part3 = malloc(sizeof(char) * 5);
        printf("\n\nQ1 PART 3: Did you test positive for COVID-19 more than two weeks ago? ");
        scanf("%s", q1part3);
        if (strcmp(q1part3, "yes") == 0) {
            printf("\nYou might want to get tested again to make sure you don't still have it.\n\n");
            return 0;
        }
        else {
            printf("\nOkay, then let's continue...\n\n");
        }
    }

    // If no
    else {
        printf("\nOkay, then let's continue...\n\n");
    }

    // Q2
    char* q2 = malloc(sizeof(char) * 5);
    printf("\nQ2: Have you been around anyone who has tested positive for COVID-19 within the past two weeks? ");
    scanf("%s", q2);

    // If yes
    if (strcmp(q2, "yes") == 0) {
        printf("\nYou need to be tested.\n\n");
        return 0;
    }

    // If no
    else {
        printf("\nOkay, then let's continue...\n\n");
    }

    // Q3
    char* q3 = malloc(sizeof(char) * 5);
    printf("\nQ3: Are you currently experiencing any of the symptoms commonly related to COVID-19? If you're not sure if you have symptoms of COVID-19 search COVID-19 symptoms to find out. ");
    scanf("%s", q3);

    // If yes
    if (strcmp(q3, "yes") == 0) {
        printf("\nYou might want to get tested to see if the symptoms are from the Coronavirus\n");
        return 0;
    }

    // If no
    else {
        printf("\nOkay, then let's continue...\n\n");
    }

    // END
    printf("\nIt seems that it isn't entirely neccesary for you to get tested for COVID-19 right now. However, if at any point you believe you'd answer yes to any of the questions we asked, please retake this quick questionnaire.\nStay safe and healthy!\n\n");
}
