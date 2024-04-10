#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LETTERS 26 // Constant representing the number of letters in the alphabet

// Function prototypes
int hashFunction(char *phrase);
int addPhrase(char *phrase, int index);
void printPhrases();

// Node structure for linked list in each hash table bucket
typedef struct node
{
    char *phrase;
    struct node *next;
} node;

// Array of linked lists (hash table) to store phrases
node *table[LETTERS];

int main()
{
    // Initialize hash table to NULL pointers
    for (int i = 0; i < LETTERS; i++)
    {
        table[i] = NULL;
    }

    // Prompt the user to enter three phrases and add them to the hash table
    for (int i = 0; i < 3; i++)
    {
        char phrase[100];
        printf("Enter a phrase: ");
        scanf("%s", phrase);
        addPhrase(phrase, hashFunction(phrase));
    }

    // Print all the phrases stored in the hash table
    printPhrases();
}

// Hash function to determine the index where a phrase will be stored in the hash table
int hashFunction(char *phrase)
{
    return tolower(phrase[0]) - 'a';
}

// Function to add a phrase to the hash table
// Returns 0 on success, 1 on failure (memory allocation error)
int addPhrase(char *phrase, int index)
{
    // Allocate memory for a new node
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    // Allocate memory for the phrase and copy it
    n->phrase = malloc(strlen(phrase) + 1); // +1 for null terminator
    if (n->phrase == NULL)
    {
        printf("Memory allocation failed");
        free(n);
        return 1;
    }
    strcpy(n->phrase, phrase);

    // Insert the new node at the beginning of the linked list at the given index
    n->next = table[index];
    table[index] = n;
    return 0;
}

// Function to print all the phrases stored in the hash table
void printPhrases()
{
    for (int i = 0; i < LETTERS; i++)
    {
        if (table[i] != NULL)
        {
            node *ptr = table[i];
            while (ptr != NULL)
            {
                printf("%s ", ptr->phrase);
                ptr = ptr->next;
            }
            printf("\n");
        }
    }
}
