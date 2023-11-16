#include "monty.c"
pack_t pack = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	char *info;
	FILE *folder;
	ssize_t line_check = 1;
	stack_t *stack_bus = NULL;
	size_t len = 0;
	unsigned int check = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	folder = fopen(argv[1], "r");
	pack.folder = folder;
	if (!folder)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line_check > 0)
	{
		info = NULL;
		line_check = getline(&info, &len, folder);
		pack.info = info;
		check++;
		if (line_check > 0)
		{
			file_exec(info, &stack_bus, check, folder);
		}
		free(info);
	}
	stack_empty(stack_bus);
	fclose(folder);
return (0);
}
