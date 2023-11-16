#include "monty.h"
/**
 * pchar_opcode - divide the first two element of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void pchar_opcode(stact_t **stack_head, unsigned int check)
{
	stact_t *num;

	num = *stack_head;
	if (!num)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	if (num->n > 127 || num->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", num->n);
}
