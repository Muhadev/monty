#include "monty.h"
/**
 * push_opcode - add node of the stack
 * @stack_head: stack head top
 * @check: numbers of line occupied
 * Return: no return
 */
void push_opcode(stack_t **stack_head, unsigned int check)
{
	int notify = 0, x = 0, z;

	if (pack.argument)
	{
		if (pack.argument[0] == '-')
			x++;
		for (; pack.argument[x] != '\0'; x++)
		{
			if (pack.argument[x] > 57 || pack.argument[x] < 48)
				notify = 1;
		}
		if (notify == 1)
		{
			fprintf(stderr, "L%d: can't div, stack too short\n", check);
			fclose(pack.folder);
			free(pack.info);
			stack_empty(*stack_head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	z = atoi(pack.argument);
	if (pack.value == 0)
		node_stack(stack_head, z);
	else
		queue_add(stack_head, z);
}
