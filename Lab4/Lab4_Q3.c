// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab4 Q3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct order {
    char name[1][15];
    char med[1][15];
};

struct order *queue;
int top = 1;

void printMenu();
void clearScreen();
void displayAllOrders();
void enOrder();
void deOrder();

int main ()
{
    int choice = 1;
    printMenu();
    while(choice > 0 && choice <5)
    {
        printf("\n\nEnter a choice.\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                break;
            case 1:
                clearScreen();
                break;
            case 2:
                displayAllOrders();
                break;
            case 3:
                enOrder();
                break;
            case 4:
                deOrder();
                break;
            default:
                printf("Invalid choice! Try again.");
                choice = 1;
                break;
        }
    }
    free(queue);
}

void printMenu()
{
    printf("0) Exit program.\n\n1) Clear screen.\n\n2) Display all orders.\n\n3) Enqueue an order.\n\n4) Dequeue an order.");
}

void clearScreen()
{
    system("clear");
    printMenu();
}

void displayAllOrders()
{
    int total = 0;
    printf("name\t\tchoice\n");
    for(int loop = 1;loop < top;loop++)
    {
        int size = 0;
        for(int n = 0; n < 15;n++)
        {
            if(queue->name[loop][n] == '\0')
            {
                size = n;
                n = 15;
            }
        }
        if(size < 8)
        {
            printf("%s\t\t%s\n",queue->name[loop],queue->med[loop]);
        }
        if(size <= 15 && size >= 8)
        {
            printf("%s\t%s\n",queue->name[loop],queue->med[loop]);
        }
        total++;
    }
    printf("\nTotal orders: %d",total);
}

void enOrder()
{
    char inputName[15];
    char inputMed[15];
    printf("Enter customer's name and choice: ");
    scanf("%s %s",inputName,inputMed);
    top++;
    queue = (struct order*)realloc(queue,top*sizeof(struct order));
    strcpy(queue->name[top-1],inputName);
    strcpy(queue->med[top-1],inputMed);
    printf("The order has been aadded to the queue.");
    
}

void deOrder()
{
    for(int n = 1; n < top;n++)
    {
        strcpy(queue->name[n+1],queue->name[n]);
        strcpy(queue->med[n+1],queue->med[n]);
    }
    top--;
    queue = (struct order*)realloc(queue,top*sizeof(struct order));
    printf("An order has been removed from the queue.");
}
