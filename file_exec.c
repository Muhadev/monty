#include "monty.h"
/**
 * file_exec - to execute thr code
 * @stack_bus: the linked list head
 * @check: to count the numbers of line
 * @folder: pointer to the file of the monty
 * @info: context
 * Return: no return
 */
int file_exec(char *info, stack_t **stack_bus, unsigned int check,
		FILE *folder)
{
	instruction_t command[] = {
		{"div", div_opcode}, {"swap", opcode_swap}, {"push", push_opcode},
		{"mul", mul_opcode}, {"nop", nop_opcode}, {"sub", sub_opcode},
		{"add", add_opcode}, {"pall", pall_opcode}, {"pint", pint_opcode},
		{"pchar", pchar_opcode}, {"pstr", pstr_opcode}, {"rotl", rotl_opcode},
		{"rotr", rotr_opcode}, {"stack", stack_opcode}, {"push", push_opcode},
		{"queue", queue_opcode}, {"mod", mod_opcode}, {NULL, NULL}
	};
	unsigned int x = 0;
	char *menu;

	menu = strtok(info, " \n\t");
	if (menu && menu[0] == '#')
		return (0);
	pack.argument = strtok(NULL, " \n\t");
	while (command[x].opcode && menu)
	{
		if (strcmp(menu, command[x].opcode) == 0)
		{
			command[x].f(stack_bus, check);
			return (0);
		}
		x++;
	}
	if (menu && command[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", check, menu);
		fclose(folder);
		free(info);
		stack_empty(*stack_bus);
		exit(EXIT_FAILURE);
	}
	return (1);
}
