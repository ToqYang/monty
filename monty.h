#ifndef MONTY_HOL
#define MONTY_HOL

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
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

void (*get_opcode_func(char *str))(stack_t **stack, unsigned int line_number);

void Push_In_Stack(stack_t **stack, unsigned int line_number);
void Pall_Stack(stack_t **stack, unsigned int line_number);
void Pint_Top_Stack(stack_t **stack, unsigned int line_number);
void Pop_Element_Stack(stack_t **stack, unsigned int line_number);
void Swap_Top_Stack(stack_t **stack, unsigned int line_number);
void Nop_Stack(stack_t **stack, unsigned int line_number);

void Add_Top_Stack(stack_t **stack, unsigned int line_number);
void Sub_Top_Stack(stack_t **stack, unsigned int line_number);
void Div_Top_Stack(stack_t **stack, unsigned int line_number);
void Mul_Top_Stack(stack_t **stack, unsigned int line_number);
void Mod_Top_Stack(stack_t **stack, unsigned int line_number);
void pchar_func(stack_t **stack, unsigned int line_number);

int _isdigit(char *str);

#ifdef EXTERNS
/**
 * struct externs - global variables
 * @number: number to push
 * @opco: opcode
 * @l_num: line of number
 * Description: global variables
 */
typedef struct externs
{
	int number;
	char *opco;
	int l_num;
} ex_t;
ex_t global;
#else
/**
 * struct externs - global variables
 * @number: number to push
 * @opco: opcode
 * @l_num: line of number
 * Description: global variables
 */
typedef struct externs
{
	int number;
	char *opco;
	int l_num;
} ex_t;
extern ex_t global;
#endif

#endif
