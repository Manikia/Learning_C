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
    printf("End of run.\n");

    return 0; //successful termination
}

void insertAtBeginning(ListNodePtr *head, char val)
{
    ListNodePtr new_node = malloc(sizeof(node_t));
    //we are passing the head from the method to in here,
    //thats how we are able to identify the first node
    new_node->data = val; //val takes the value that we want to insert
    new_node->nextPtr = *head;//next pointer from the head is pointer to previous head
    //thats why it says nextPtr = *head bc its the previous head
    //in here the next pointer is assigned as the head
    //meaning that we are setting a new head and then after
    *head = new_node; //points to first element in the list being val since we added
    //in here we are moving the new head node to be the new node
    //that we added

    //the two elements above are referencing this:
    /*typedef struct node
    {
        char data;
        struct node *nextPtr;
    } node_t;
    */
}


void insertAtEnd(ListNodePtr *head, char value)
{
    ListNodePtr current = *head;

    if(current != NULL) //if its already at end of list then move forward
    {
        while(current->nextPtr != NULL) //while its not at the end of the list
        {
            current = current->nextPtr; //move the current to the next one
        }
        //if it hits the end then get out of the while loop and add the new node at tail
        current->nextPtr = malloc(sizeof(node_t)); //fixing size for nextPtr
        //since we hit the end w the while loop, we know we are at the end so the data
        //will assign its value with value and then the next one from the current data
        //will be NULL 
        current->nextPtr->data = value; //this is setting the data as value
        current->nextPtr->nextPtr = NULL; //we are setting the node next to the last one as NULL
        //since we hit the end of the list
    }
    else
    {
        current = malloc(sizeof(node_t));
        current->data = value;
        current->nextPtr = NULL; //this time it will point as the next node as null since its at the end
        *head = current; //since we were already at the end that means there was only a head in there
        //so we set the head to point to the current and then move the new node to the end
    }
}

void insert(ListNodePtr *head, char value) 
//we are inserting in an alreaady sorted list
{
    //creating local variables
    ListNodePtr newPtr; //pointer to new node
    ListNodePtr previousPtr; //pointer to previous node
    ListNodePtr currentPtr; //pointer to current node

    newPtr = malloc(sizeof(node_t));

    if(newPtr != NULL) 
    {
    //checking that there is a LL w at least a node and setting it up
        //right now we are just setting up our nodes
        //so in this case we create our new pointer as our data
        //(as usual) then we create our next pointer as null since
        //there 
        newPtr->data = value; 
        newPtr->nextPtr = NULL;
    //since we are inserting in a sorted list we know that the previous
    //from the head is null so we set it as null
        previousPtr = NULL;
        //and then we set the current as head since there is where we
        //are beginning at
        currentPtr = *head;

//while there is an actual head in our LL we can insert
        while(currentPtr != NULL && value > currentPtr->data)
        {
    //while theres a head in the LL
            //this will insert our new node
            previousPtr = currentPtr;
            //it will set the previous to current which is shifting it
            //then on the bottom it will finish shifting everything since
            //we have to take everything in consideration when shifting
            currentPtr = currentPtr->nextPtr;
        }

        if(previousPtr == NULL)
        {
            //if the previous node is null we know we at the head
            //so we are able to set the new node as the head since theres nothing
            //present in the LL
            newPtr->nextPtr = *head;
            //we finish setting it as the head
            *head = newPtr;
        }
        else
        {
        //else it means we do have something in there 
        //so we are going to shift everything to have space for the new node
        //our previous turns into our next node and
        //our new node turns 
            previousPtr->nextPtr = newPtr; //before the head
            newPtr->nextPtr = currentPtr; //new pointer is the new one which is the head
        }

    }
    else
    {
        printf("%c not inserted. No memory available.\n", value);\
         //left off in 12:46
    }
}

void deleteAtBeginning(ListNodePtr *head)
{
    ListNodePtr tempPtr = NULL;

    if(head == NULL)
    {
        return; //checks if we have a 
        //head and if we dont then it means we have an empty LL
    }
    else
    {
        tempPtr = *head; 
        //head pointer we still need so we are holding onto it
        *head = (*head)->nextPtr; 
        //changes the head to next pointer which means it deletes it from being head

        free(tempPtr); //deallocates memory
    }
}







