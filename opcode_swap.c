#include "monty.h"
/**
 * opcode_swap - add the first two element on the top of the stack
 * @stack_head: the head of the stack
 * @check:the numbers of line occupied
 * Return: no return
 */
void opcode_swap(stack_t **stack_head, unsigned int check)
{
	stack_t *num;
	int size = 0, temp;

	num = *stack_head;
	while (num)
	{
		num = num->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	num = *stack_head;
	temp = num->n;
	num->n = num->next->n;
	num->next->n = temp;
}
