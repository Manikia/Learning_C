//Abstract Data Type is defeined by a set of value and operations
//ADT: lists, stacks, trees, etc.
#include<string.h>
#include<stdlib.h>

typedef struct node
{
    char data;
    struct node *nextPtr;
} node_t;

typedef node_t *ListNodePtr;


//tests the different syntaxes
void insert(ListNodePtr *head, char value);
void insertAtEnd(ListNodePtr *head, char value);
void insertAtBeginning(ListNodePtr *head, char val);
char delete (ListNodePtr *head, char value);
void deleteAtBeginning(ListNodePtr *head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr currentPtr);

int main(void)
{

    ListNodePtr head = NULL; //there are no nodes in LL
    int choice = 0; //users choice
    char item = '\0'; //char entered by user, since its currently null

    //displaying menu
    printf("Enter your choice:\n"
        "   1 to insert an element into the list in alphabetical order \n"
        "   2 to inser an element at the end of the list. \n"
        "   3 to insert an element at the beginning of the list. \n"
        "   4 to delete an element from the list.\n"
        "   5 to delete an element from the beginning of the list.\n"
        "   6 to end.\n");

    printf( ":: " );
    scanf( "%d", &choice);

    while(choice != 6)
    {
        switch(choice)
        {
            case 1:
                printf("Enter a character: ");
                scanf("\n%c", &item); //adding a character
                insert(&head, item); 
                //setting first character as a head
                //since the LL is empty
                printList(head);
                break;
            case 2:
                printf("Enter a character: ");
                scanf("\n%c", &item);
                insertAtEnd(&head, item);
                printList(head);
                break;
            case 3:
                printf("Enter a character: ");
                scanf("\n%c", &item);
                insertAtBeginning(&head, item);
                printList(head);
                break;
            case 4:
            //deleting element and checking that it isnt empty
                if( !isEmpty(head) ) //as long as the head isnt empty
                {
                    printf("Enter a character to be deleted: ");
                    scanf("\n%c", &item);

                    if(delete (&head, item))
                    //if the item is present in the head then delete
                    {
                        printf("%c deleted.\n", item);
                        printList(head); //printList prints everything in list
                    }
                    else
                    {
                        printf("%c not found.\n\n", item);
                    }
                }
                else
                {
                    printf("List is empty.\n\n");
                }
                break;
            case 5: //deletes element at beginning
                if(!isEmpty(head))
                {
                    //if character is found then remove it
                    deleteAtBeginning(&head);
                    printf("%c deleted.\n", item);
                    printList(head);
                }
                else
                {
                    printf("List is empty. \n\n");
                }
                break;
            default:
                printf("Invalid choice");

                printf("Enter your choice:\n"
                       "   1 to insert an element into the list. \n"
                       "   2 to delete an element from the list. \n"
                       "   3 to end. \n");
                break;
        }

        printf("?");
        scanf("%d", &choice);
    }
}

