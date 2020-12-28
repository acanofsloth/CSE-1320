// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab4 Q2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pancake{
    char name[1][31];
    int calories[1];
};

void printMenu();
void displayStack();
void pushPancake();
void popPancake();
void clearScreen();

int top = 1;
struct pancake *stack;

int main()
{
    int choice = 1;
    printMenu();
    while(choice > 0 && choice < 5)
    {
        printf("\n\nEnter a choice\n\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 0:
                break;
            case 1:
                clearScreen();
                break;
            case 2:
                displayStack();
                break;
            case 3:
                pushPancake();
                break;
            case 4:
                popPancake();
                break;
            defualt:
                printf("Invalid choice! Try again.");
                choice = 1;
                break;
        }
    }
    free(stack);
}

void clearScreen()
{
    system("clear");
    printMenu();
}

void printMenu()
{
    printf("0) Exit program.\n\n1) Clear Screen.\n\n2) Display the pancake stack.\n\n3) Push a pancake.\n\n4) Pop a pancake.\n");
}

void displayStack()
{
    int total = 0;
    printf("name\t\t\t\tcalories\n");
    for(int loop = 1;loop < top;loop++)
    {
        int size = 0;
        for(int n = 0; n < 31;n++)
        {
            if(stack->name[loop][n] == '\0')
            {
                size = n;
                n = 21;
            }
        }
        if(size < 8)
        {
            printf("%s\t\t\t\t%d\n",stack->name[loop],stack->calories[loop]);
        }
        if(size < 16 && size >= 8)
        {
            printf("%s\t\t\t%d\n",stack->name[loop],stack->calories[loop]);
        }
        if(size < 24 && size >= 16)
        {
            printf("%s\t\t%d\n",stack->name[loop],stack->calories[loop]);
        }
        if(size <= 31 && size >= 24)
        {
            printf("%s\t%d\n",stack->name[loop],stack->calories[loop]);
        }
        total += stack->calories[loop];
    }
    printf("\nTotal calories: %d",total);
}

void pushPancake()
{
    char inputName[31];
    int inputCalories;
    printf("Enter pancake name and its calories: ");
    scanf("%s %d",inputName,&inputCalories);
    top++;
    stack = (struct pancake*)realloc(stack,top*sizeof(struct pancake));
    strcpy(stack->name[top-1],inputName);
    stack->calories[top-1] = inputCalories;
    printf("The pancake has been added at the top of the stack.");
}

void popPancake()
{
    top--;
    stack = (struct pancake*)realloc(stack,top*sizeof(struct pancake));
    printf("A pancake has been removed from the top of the stack.");
}
