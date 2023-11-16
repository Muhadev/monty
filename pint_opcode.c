#include "monty.h"
/**
 * pint_opcode - print the top element of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void pint_opcode(stact_t **stack_head, unsigned int check)
{
	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack_head)->n);
}
