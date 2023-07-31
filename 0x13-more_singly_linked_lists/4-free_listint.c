#include "lists.h"


/**
 * 0x13 C
 * free_listint - frees a linked list
 * @head means = listint_t list to be freed
 */
void free_listint(listint_t *head)
{
        listint_t *temp;


        while (head)
        {
                temp = head->next;
                free(head);
                head = temp;
        }
}



