// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab3 Q1
#include <stdio.h>
#include <stdlib.h>

struct record
{
    char firstName[6][10];
    char lastName[6][10];
    double score[6];
    char nation[6][10];
};

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
        if(input < 0 || input > 10)
        {
            printf("\nInput invalid. Try again.\n\n");
        }
    }
}
