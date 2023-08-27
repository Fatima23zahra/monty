#include "monty.h"

/**
 * mul_nodes - Adds two elements of the stack.
 * @stack: Pointer to node of the stack.
 * @line_number: the line number of of the opcode.
 */
void mul_nodes(char *stack, unsigned int line_number)
{
int product;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        more_error(8, line_number, "mul");

    (*stack) = (*stack)->next;
    product = (*stack)->n * (*stack)->prev->n;

    (*stack)->n = product;
    free((*stack)->prev);
    (*stack)->prev = NULL;
}

/**
 * monty_mul - multiplies the second top element of the stack
 * @stack: Pointer to node of the stack.
 * @line_number: the line number of of the opcode.
 */
void mod_nod(stack_t *stack, unsigned int line_number);
{
int remainder;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        more_error(8, line_number, "mod");

    if ((*stack)->n == 0)
        more_error(9, line_number);

    (*stack) = (*stack)->next; 
    remainder = (*stack)->n % (*stack)->prev->n;

    (*stack)->n = remainder;
    free((*stack)->prev);
    (*stack)->prev = NULL;
}
