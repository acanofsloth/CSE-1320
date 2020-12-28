// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab4 Q1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linkedlist {
    char name[21];
    int distance;
    struct linkedlist *next;
};

struct linkedlist *head;

void printMenu();
int insert(int n, char name[21], int distance);
void printCities();
int addCity(int n);
int deleteCity(int n);
int insertCity(int n);
void clearScreen();

int main ()
{
    head = NULL;
    int choice = 1,n = 1;
    printMenu();
    while(choice < 6 && choice > 0)
    {
        printf("\nEnter a choice.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                break;
            case 1:
                clearScreen();
                break;
            case 2:
                printCities();
                break;
            case 3:
                n = addCity(n);
                break;
            case 4:
                n = deleteCity(n);
                break;
            case 5:
                n = insertCity(n);
                break;
            default:
                printf("Invalid choice! Try again.");
                choice = 1;
                break;
        }
    }
    return 0;
}

void clearScreen()
{
    system("clear");
    printMenu();
}

int insert(int n, char name[21], int distance)
{
    struct linkedlist *temp1 = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    strcpy(temp1 ->name,name);
    temp1 ->distance = distance;
    temp1 ->next = NULL;
    if(n==1)
    {
        temp1 ->next = head;
        head = temp1;
    }
    else
    {
        struct linkedlist *temp2 = head;
        for(int i = 0 ; i < n-2 ; i++)
        {
            temp2 = temp2 ->next;
        }
        temp1 ->next = temp2 ->next;
        temp2 ->next = temp1;
    }
    n++;
    return n;
}

void printMenu()
{
    printf("0) Exit program.\n\n1) Clear screen.\n\n2) Print all cities\n\n3) Add city.\n\n4) Delete a city by city name.\n\n5) Insert a city by position.\n");
}

void printCities()
{
    int total = 0,size = 0;
    struct linkedlist *temp = head;
    while(temp != NULL)
    {
        for(int n = 0; n < 21;n++)
        {
            if(temp ->name[n] == '\0')
            {
                size = n;
                n = 21;
            }
        }
        if(size < 8)
        {
            printf("%s\t\t\t%d\n",temp ->name, temp ->distance);
        }
        if(size < 16 && size >= 8)
        {
            printf("%s\t\t%d\n",temp ->name, temp ->distance);
        }
        if(size <= 21 && size >= 16)
        {
            printf("%s\t%d\n",temp ->name, temp ->distance);
        }
        total += temp ->distance;
        temp = temp ->next;
    }
    printf("\nTotal distance: %d\n", total);
}

int addCity(int n)
{
    struct linkedlist *temp1 = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    struct linkedlist *temp2 = head;
    char inputName[21];
    int inputDistance;
    printf("Enter city name and distance from previouse city: ");
    scanf("%s %d", inputName, &inputDistance);
    n = insert(n, inputName,inputDistance);
    printf("The city has been added.\n");
    return n;
}

int deleteCity(int n)
{
    char inputName[21];
    int check,del;
    printf("Enter city name to delete: ");
    scanf("%s", inputName);
    struct linkedlist *temp = head;
    for(int a = 1; a < n+1; a++) 
    {
        check = 0;
        for(int i = 0; i < 20; i++)
        {
            if(inputName[i] != temp->name[i])
            {
                check = 1;
                i = 20;
            }
            if(inputName[i] == '\0' && temp->name[i] == '\0')
            {
                check = 0;
                i = 20;
            }
        }
        if(check == 0)
        {
            del = a;
            a = n+1;
        }
        else
        {
            temp = temp ->next;
        }
    }
    if(check == 0)
    {
        struct linkedlist *temp1 = head;
        if (del==1)
        {
            head = temp1->next;
            temp1 = head;
            free(temp1);
            n--;
        }
        else
        {
            for(int i = 0; i < del-2 ; i++)
            {
                temp1 = temp1->next;
            }
            struct linkedlist *temp2 = temp1 ->next; 
            temp1 ->next = temp2->next; 
            free(temp2); 
            n--;
        }
        printf("The city has been deleted.\n");
    }
    else
    {
        printf("city not found!\n");
    }
    return n;
}

int insertCity(int n)
{
    char inputName[21];
    int position, inputDistance;
    printf("Enter city name, distance from previous city and position: ");
    scanf("%s %d %d",inputName,&inputDistance,&position);
    n = insert(position,inputName,inputDistance);
    printf("Enter new distance for next city: ");
    scanf("%d",&inputDistance);
    struct linkedlist *temp1 = head;
    if (position==1)
    {
        temp1 = temp1->next;
        temp1->distance = inputDistance;
    }
    else
    {
        if(position < n-1)
        {
            for(int i = 0; i < position ; i++)
            {
                temp1 = temp1->next;
            }
            temp1->distance = inputDistance;
        }
    }
    printf("The city has been inserted.\n");
}
