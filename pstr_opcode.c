#include "monty.h"
/**
 * pstr_opcode - print the string from top  of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void pstr_opcode(stact_t **stack_head, unsigned int check)
{
	stack_t *num;
	(void)check;

	num = *stack_head;
	while (num)
	{
		if (*stack_head == NULL)
		{
			break;
		}
		printf("%c", num->n);
		num = num->next;
	}
	printf("\n");
}
