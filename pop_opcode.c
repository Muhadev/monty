#include "monty.h"
/**
 * pop_opcode - print the top element of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void pop_opcode(stact_t **stack_head, unsigned int check)
{
	stack_t *num;

	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	num = *stack_head;
	*stack_head = num->next;
	free(num);
}
