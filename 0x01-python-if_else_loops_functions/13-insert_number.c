#include <stdio.h>
#include <stdlib.h>
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to the head of the list
 * @number: number to insert into the list
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *current_node, *prev_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = number;
    new_node->next = NULL;

    if (*head == NULL || (*head)->n >= number) {
        new_node->next = *head;
        *head = new_node;
    } else {
        current_node = *head;
        while (current_node != NULL && current_node->n < number) {
            prev_node = current_node;
            current_node = current_node->next;
        }
        prev_node->next = new_node;
        new_node->next = current_node;
    }

    return (new_node);
}
