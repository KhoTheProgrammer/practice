#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int push(char *phrase); // Push a phrase onto the stack
void printList();       // Print all phrases in the stack
char *pop();            // Pop a phrase from the stack

// Define a stack node structure
typedef struct stack
{
    char phrase[100];  // Maximum length of a phrase
    struct stack *top; // Pointer to the top of the stack
} stack;

stack *list = NULL; // Initialize the stack

int main()
{
    // Get 10 words from the user and add them to the stack
    for (int i = 0; i < 5; i++)
    {
        char word[100];
        printf("Enter a word: ");
        scanf("%s", word);
        push(word);
    }
    printf("********Stack before popping************\n");
    printList();
    pop();
    printf("********Stack after popping************\n");
    printList();
}

// Function to push a phrase onto the stack
int push(char *phrase)
{
    stack *n = malloc(sizeof(stack)); // Allocate memory for a new stack node
    if (n == NULL)
    {
        printf("Memory not allocated"); // Error message if memory allocation fails
        return 1;
    }
    strcpy(n->phrase, phrase); // Copy the phrase into the new stack node
    n->top = list;             // Update the top pointer of the new node
    list = n;                  // Update the stack's top pointer to point to the new node
    return 0;                  // Return success
}

// Function to pop a phrase from the stack
char *pop()
{
    if (list != NULL) // Check if the stack is not empty
    {
        char *phrase = list->phrase; // Get the phrase from the top node
        stack *ptr = list->top;      // Move the stack's top pointer to the next node
        free(list);                  // Free the memory of the top node
        list = ptr;                  // Update the stack's top pointer
        return phrase;               // Return the popped phrase
    }
    else
    {
        printf("There are no words in the stack"); // Error message if the stack is empty
        return NULL;                               // Return NULL since there are no phrases to pop
    }
}

// Function to print all phrases in the stack
void printList()
{
    stack *ptr = list;  // Start from the top of the stack
    while (ptr != NULL) // Iterate through all nodes in the stack
    {
        printf("%s\n", ptr->phrase); // Print the phrase in the current node
        ptr = ptr->top;              // Move to the next node in the stack
    }
}
