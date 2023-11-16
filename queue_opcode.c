#include "monty.h"
/**
 * queue_opcode - modulus of the first two element of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void queue_opcode(stack_t **stack_head, unsigned int check)
{
	(void)stack_head;
	(void)check;
	pack.value = 1;
}
/**
 * queue_add - add node to the tail stack
 * @num: new_value
 * @stack_head: head of the stack
 * Return: no return
*/
void queue_add(stack_t **stack_head, int num)
{
	stack_t *add_node, *temp;

	temp = *stack_head;
	add_node = malloc(sizeof(stack_t));
	if (add_node == NULL)
	{
		printf("Error\n");
	}
	add_node->n = num;
	add_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*stack_head = add_node;
		add_node->prev = NULL;
	}
	else
	{
		temp->next = add_node;
		add_node->prev = temp;
	}
}
