#include "monty.h"
/**
 * sub_opcode - sub the first two element on the top of the stack
 * @stack_head: the head of the stack
 * @check:the numbers of line occupied
 * Return: no return
 */
void sub_opcode(stack_t **stack_head, unsigned int check)
{
	stack_t *temp;
	int sub, num;

	temp = *stack_head;

	for (num = 0; temp != NULL; num++)
	{
		temp = temp->next;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	temp = *stack_head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*stack_head = temp->next;
	free(temp);
}
