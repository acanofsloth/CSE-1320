// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab3 Q5
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
void findFirstName(struct record info);
void findLastName(struct record info);
void findByGrade(struct record info);

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
        if(input == 3)
        {
            findFirstName(info);
        }
        if(input == 4)
        {
            findLastName(info);
        }
        if(input == 5)
        {
            findByGrade(info);
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

void findFirstName(struct record info)
{
    char input[LENGTH],check;
    int loc = -1;
    printf("\n\n");
    printf("Enter student's first name: ");
    scanf("%s",&input);
    for(int n = 0; n < MAX;n++)
    {
        check = 'T';
        for(int i = 0; i < LENGTH;i++)
        {
            if(input[i] != info.firstName[n][i])
            {
                check = 'F';
                i += LENGTH;
            }
            if(input[i] == '\0' && info.firstName[n][i] == '\0')
            {
                i += LENGTH;
            }
        }
        if(check == 'T')
        {
            loc = n;
            n = MAX;
        }
    }
    if(loc >= 0)
    {
        printf("%s\t\t%s\t\t%0.1f\n",info.firstName[loc],info.lastName[loc],info.score[loc]);
    }
    else
    {
        printf("Name Invalid");
    }
    printf("\n\n");
}

void findLastName(struct record info)
{
    char input[LENGTH],check;
    int loc = -1;
    printf("\n\n");
    printf("Enter student's last name: ");
    scanf("%s",&input);
    for(int n = 0; n < MAX;n++)
    {
        check = 'T';
        for(int i = 0; i < LENGTH;i++)
        {
            if(input[i] != info.lastName[n][i])
            {
                check = 'F';
                i += LENGTH;
            }
            if(input[i] == '\0' && info.lastName[n][i] == '\0')
            {
                i += LENGTH;
            }
        }
        if(check == 'T')
        {
            loc = n;
            n = MAX;
        }
    }
    if(loc >= 0)
    {
        printf("%s\t\t%s\t\t%0.1f\n",info.firstName[loc],info.lastName[loc],info.score[loc]);
    }
    else
    {
        printf("Name Invalid");
    }
    printf("\n\n");
}

void findByGrade(struct record info)
{
    double input;
    printf("\n\n");
    printf("Enter grade: ");
    scanf("%lf",&input);
    for(int n = 0; n < MAX;n++)
    {
        if(input == info.score[n] || input < info.score[n])
        {
            printf("%s\t\t%s\t\t%0.1f\n",info.firstName[n],info.lastName[n],info.score[n]);
        }
    }
    printf("\n");
}
