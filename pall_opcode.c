#include "monty.h"
/**
 * pall_opcode - divide the first two element of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void pall_opcode(stack_t **stack_head, unsigned int check)
{
	stact_t *num;
	(void)check;

	num = *stack_head;
	if (num == NULL)
		return;
	while (num)
	{
		printf("%d\n", num->n);
		num = num->next;
	}
}
