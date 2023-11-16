#include "monty.h"
/**
  *rotr_opcode- rotates the stack to the top
  *@stack_head: stack head
  *@check: line_number
  *Return: no return
 */
void rotr_opcode(stack_t **stack_head, __attribute__((unused))
		unsigned int check)
{
	stack_t *dup;

	dup = *stack_head;
	if (*stack_head == NULL || (*stack_head)->next == NULL)
		return;
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *stack_head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*stack_head)->prev = dup;
	(*stack_head) = dup;
}
