#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct pack_s - variables -args, file, line content
 * @argument: value
 * @folder: pointer to monty file
 * @info: line content
 * @value: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct pack_s
{
	char *argument;
	FILE *folder;
	char *info;
	int value;
}  pack_t;
extern pack_t pack;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void add_opcode(stack_t **stack_head, unsigned int check);
void node_stack(stack_t **stack_head, int new_value);
void div_opcode(stack_t **stack_head, unsigned int check);
int file_exec(char *info, stack_t **stack_bus, unsigned int check,
		FILE *folder);
void mod_opcode(stack_t **stack_head, unsigned int check);
int main(int argc, char *argv[]);
void stack_empty(stack_t *stack_head);
void mul_opcode(stack_t **stack_head, unsigned int check);
void nop_opcode(stack_t **stack_head, unsigned int check);
void opcode_swap(stack_t **stack_head, unsigned int check);
void pall_opcode(stack_t **stack_head, unsigned int check);
void pchar_opcode(stack_t **stack_head, unsigned int check);
void pint_opcode(stack_t **stack_head, unsigned int check);
void pop_opcode(stack_t **stack_head, unsigned int check);
void pstr_opcode(stack_t **stack_head, unsigned int check);
void push_opcode(stack_t **stack_head, unsigned int check);
void queue_add(stack_t **stack_head, int num);
void queue_opcode(stack_t **stack_head, unsigned int check);
void rotl_opcode(stack_t **stack_head,
		__attribute__((unused)) unsigned int check);
void rotr_opcode(stack_t **stack_head,
		__attribute__((unused)) unsigned int check);
void stack_opcode(stack_t **stack_head, unsigned int check);
void sub_opcode(stack_t **stack_head, unsigned int check);
#endif
