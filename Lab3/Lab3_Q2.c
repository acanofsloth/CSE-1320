// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab3 Q2
#include <stdio.h>
#include <stdlib.h>
#define MAX 6
#define LENGTH 10

struct record
{
    char firstName[MAX][LENGTH];
    char lastName[MAX][LENGTH];
    double score[MAX];
    char nation[MAX][LENGTH];
};

void printRecords(struct record info);

int main(void)
{
    int input;
    struct record info = {{{"Henry"},{"Issac"},{"Albert"},{"Marie"},{"Charles"},{"Nikola"}},{{"Ford"},{"Newton"},{"Einstein"},{"Curie"},{"Darwin"},{"Tesla"}},{3.9,3.7,4.1,4.2,3.7,3.8},{{"American"},{"British"},{"American"},{"French"},{"British"},{"American"}}};
    printf("Select a numeric choice from the given menu:\n\n0) Exit program.\n\n1) Clear Screen.\n\n2) Print all student records.\n\n3) Search records by first name. 4) Search records by last name.\n\n5) Search records by Grade (>=).\n\n6) Print List,total,count, and average score for all American students.\n\n7) Save the records of British students in British.txt.\n\n8) Sort all records by First Name.\n\n9) Sort all records by Last name.\n\n10) Sort all records by scores.\n\n\n");
    while (1) 
    {
        printf("Enter a choice.\n\n");
        scanf("%d",&input);
        if(input == 0)
        {
            printf("\n");
            return 0;
        }
        if(input == 1)
        {
            system("clear");
            printf("Select a numeric choice from the given menu:\n\n0) Exit program.\n\n1) Clear Screen.\n\n2) Print all student records.\n\n3) Search records by first name. 4) Search records by last name.\n\n5) Search records by Grade (>=).\n\n6) Print List,total,count, and average score for all American students.\n\n7) Save the records of British students in British.txt.\n\n8) Sort all records by First Name.\n\n9) Sort all records by Last name.\n\n10) Sort all records by scores.\n\n\n");
        }
        if(input == 2)
        {
            printRecords(info);
        }
        if(input < 0 || input > 10)
        {
            printf("\nInput invalid. Try again.\n\n");
        }
    }
}

void printRecords(struct record info)
{
    printf("\n\n");
    for(int n = 0; n < MAX;n++)
    {
        printf("%s\t\t%s\t\t%0.1f\n",info.firstName[n],info.lastName[n],info.score[n]);
    }
    printf("\n");
}
