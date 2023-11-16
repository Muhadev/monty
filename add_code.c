#include "monty.h"
/**
 * add_opcode - add the first two element on the top of the stack
 * @stack_head: the head of the stack
 * @check:the numbers of line occupied
 * Return: no return
 */
void add_opcode(stack_t **stack_head, unsigned int check)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", check);
		fclose(pack.folder);
		free(pack.info);
		stack_empty(*stack_head);
		exit(EXIT_FAILURE);
	}
	num = *stack_head;
	temp = num->n + num->next->n;
	num->next->n = temp;
	*stack_head = num->next;
	free(num);
}
/**
 * node_stack - adding node to the stack
 * @stack_head: the head of the stack
 * @new_value: new value assign
 * Return: no return
 */
void node_stack(stack_t **stack_head, int new_value)
{
	stack_t *add_node, *temp;

	temp = *stack_head;
	add_node = malloc(sizeof(stack_t));
	if (add_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = add_node;
	add_node->n = new_value;
	add_node->next = *stack_head;
	add_node->prev = NULL;
	*stack_head = add_node;
}
