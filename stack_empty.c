#include "monty.h"
/**
 * stack_empty - free a double linked
 * @stack_head: head of a stack
 */
void stack_empty(stack_t *stack_head)
{
	stack_t *temp;

	temp = stack_head;
	while (stack_head)
	{
		temp = stack_head->next;
		free(stack_head);
		stack_head = temp;
	}
}
