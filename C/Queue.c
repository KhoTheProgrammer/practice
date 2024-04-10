#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void printList();
int enqueue(char *word);
char *dequeue();

// Definition of the queue node structure
typedef struct queue {
    char word[100];
    struct queue *prev;
    struct queue *next;
} queue;

// Global pointers to maintain the head and tail of the queue
queue *head = NULL;
queue *tail = NULL;

int main() {
    // Loop to enqueue five words into the queue
    for (int i = 0; i < 5; i++) {
        char word[100];
        printf("Enter a word: ");
        scanf("%s", word);
        enqueue(word);
    }
    
    // Dequeue an element from the queue and print it
    printf("%s\n", dequeue());
}

// Function to enqueue a word into the queue
int enqueue(char *word) {
    // If the queue is empty
    if (head == NULL) {
        // Create a new node
        queue *n = malloc(sizeof(queue));
        if (n == NULL) {
            printf("Error allocating memory");
            return 1;
        }
        // Initialize the node with the word and make it the head and tail
        strcpy(n->word, word);
        n->prev = tail;
        n->next = head;
        head = n;
        tail = n;
        return 0;
    }
    // If the queue is not empty
    else {
        // Create a new node
        queue *n = malloc(sizeof(queue));
        // Initialize the node with the word and add it after the current head
        strcpy(n->word, word);
        n->prev = head;
        n->next = NULL;
        head->next = n;
        head = n;
        return 0;
    }
}

// Function to dequeue an element from the queue
char *dequeue() {
    // Allocate memory for the word
    char *word = malloc(20 * sizeof(char));
    if (word == NULL)
    {
        printf("Error allocating memeory");
        return NULL;
    }
    // Copy the word from the tail node
    strcpy(word, tail->word);
    // Update tail to point to the next node
    queue *ptr = tail;
    tail = ptr->next;
    // Free the memory of the dequeued node
    free(ptr);
    // Return the word
    return word;
}

// Function to print all phrases in the queue
void printList() {
    // Start from the top of the queue
    queue *ptr = head;
    // Iterate through all nodes in the queue
    while (ptr != NULL) {
        // Print the word in the current node
        printf("%s\n", ptr->word);
        // Move to the previous node in the queue
        ptr = ptr->prev;
    }
}
