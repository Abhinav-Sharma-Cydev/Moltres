#include "stdio.h"
#include "stdlib.h"
struct node
{
    int data;
    struct node *next;
} *temp, *first, *last, *prev;

int main()
{
    int i, n, x, item, val, count;
    printf("Enter the number of initial nodes: ");
    scanf(" %d", &n);
    
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf(" %d", &temp->data);
    temp->next = NULL;
    first = last = temp;
    for (i = 0; i < n - 1; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d", &temp->data);
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    for (;;) // infinite loop
    {
        printf("\n\nChoose the operation for the List:\npress '1' for insertion\npress '2' for search data\npress '3' for Deletion\npress '4' for display\npress '5' for exit from the program\npress your choice: ");
        scanf(" %d", &x);
        switch (x)
        {
        case 1:
            x = 0;
            while (x != 4)
            {
                printf("\n\nChoose the place where do you want to insert\npress '1' for insert at beginning\npress '2' for insert at the end\npress '3' for insert in between\npress '4' for exit from isertion\npress your choice: ");
                scanf(" %d", &x);
                switch (x)
                {
                case 1:
                    temp = (struct node *)malloc(sizeof(struct node));
                    printf("Enter the data: ");
                    scanf(" %d", &temp->data);
                    temp->next = first;
                    first = temp;
                    break;

                case 2:
                    temp = (struct node *)malloc(sizeof(struct node));
                    printf("Enter the data: ");
                    scanf(" %d", &temp->data);
                    temp->next = NULL;
                    last->next = temp;
                    last = temp;
                    break;

                case 3:
                    temp = (struct node *)malloc(sizeof(struct node));
                    printf("Enter the data: ");
                    scanf(" %d", &temp->data);
                    printf("Enter the value after which insertion is to be done: ");
                    scanf("%d", &val);
                    prev = first;
                    while (prev != NULL)
                    {
                        if (prev->data == val)
                        {
                            temp->next = prev->next;
                            prev->next = temp;
                            if (temp->next == NULL)
                            {
                                last = temp;
                            }
                            break;
                        }
                        prev = prev->next;
                    }
                    if (prev == NULL)
                    {
                        printf("\n Value not found");
                    }
                    break;

                case 4:
                    printf("Exited from insertion\n");
                    break;
                default:
                    printf("select a valid choice");
                }
            }
            break; // case 1 closed

        case 2:
            printf("\nEnter the data to be searched: ");
            scanf(" %d", &item);
            temp = first;
            count = 1;
            while (temp != NULL)
            {
                if (temp->data == item)
                {
                    printf("\nItem found at %d position", count);
                    break;
                }
                temp = temp->next;
                count++;
            }
            if (temp == NULL)
            {
                printf("\nElement not found");
            }
            break; // case 2 closed

        case 3:
            x = 0;
            while (x != 4)
            {
                printf("\n\nChoose the place you want to delete from\npress '1' for delete the first\npress '2' for delete the last\npress '3' for delete in between\npress '4' for exit from deletion\npress your choice: ");
                scanf(" %d", &x);
                switch (x)
                {
                case 1:
                    if (first != NULL)
                    {
                        temp = first;
                        first = first->next;
                        free(temp);
                    }
                    else
                    {
                        printf("List is empty");
                    }
                    break;

                case 2:
                    if (first != NULL)
                    {
                        prev = first;
                        while (prev->next != last)
                        {
                            prev = prev->next;
                        }
                        temp = last;
                        last = prev;
                        last->next = NULL;
                        free(temp);
                    }
                    else
                    {
                        printf("List is empty");
                    }
                    break;

                case 3:
                    if (first != NULL)
                    {
                        printf("Enter the value to delete: ");
                        scanf(" %d", &val);
                        prev = first;
                        while (prev != NULL && prev->next != NULL)
                        {
                            if (prev->next->data == val)
                            {
                                temp = prev->next;
                                prev->next = temp->next;
                                if (temp == last)
                                {
                                    last = prev;
                                }
                                free(temp);
                                break;
                            }
                            prev = prev->next;
                        }
                        if (prev == NULL)
                        {
                            printf("Value not found");
                        }
                    }
                    else
                    {
                        printf("List is empty");
                    }
                    break;
                case 4:
                    printf("Exited from deletion\n");
                default:
                    printf("Select a valid choice");
                }
            }
            break; // case 3 closed

        case 4:
            if (first != NULL)
            {
                printf("List is: ");
                temp = first;
                while (temp != NULL)
                {
                    if (temp->next != NULL)
                    {
                        printf("%d-> ", temp->data);
                    }
                    else
                        printf("%d", temp->data);
                    temp = temp->next;
                }
            }
            else
            {
                printf("List is Empty");
            }
            break; // case 4 closed

        case 5:
            printf("Exiting from the program :)");
            return 0; // program end
        default:
            printf("Enter a valid choice");
        }
    }
}