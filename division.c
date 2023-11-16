#include "monty.h"
/**
 * div_opcode - divide the first two element of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void div_opcode(stact_t **stack_head, unsigned int check)
{
	stact_t *num;
	int size = 0, temp;

	num = *stack_head;
	while (num)
	{
		num = num->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	num = *stack_head;
	if (num->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	num = *stack_head;
	temp = num->next->n / num->n;
	num->next->n = temp;
	*stack_head = num->next;
	free(num);
}
