#include "monty.h"
/**
 * pstr_opcode - print the string from top  of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void pstr_opcode(stack_t **stack_head, unsigned int check)
{
	stack_t *num;
	(void)check;

	num = *stack_head;
	while (num)
	{
		if (num->n > 127 || num->n <= 0)
		{
			break;
		}
		printf("%c", num->n);
		num = num->next;
	}
	printf("\n");
}
