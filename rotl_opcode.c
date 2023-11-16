#include "monty.h"
/**
  *rotl_opcode- rotates the stack to the top
  *@stack_head: stack head
  *@check: line_number
  *Return: no return
 */
void rotl_opcode(stack_t **stack_head, __attribute__((unused))
		unsigned int check)
{
	stack_t *post = *stack_head, *temp;

	if (*stack_head == NULL || (*stack_head)->next == NULL)
		return;
	temp = (*stack_head)->next;
	temp->prev = NULL;
	while (post->next != NULL)
	{
		post = post->next;
	}
	post->next = *stack_head;
	(*stack_head)->next = NULL;
	(*stack_head)->prev = post;
	(*stack_head) = temp;
}
