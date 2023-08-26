#include "monty.h"

/**
 * monty_nop- Null fonction
 * @stack: Pointer to top node of the stack.
 * @line_number: Line number of of the opcode.
 */
void monty_nop(stack_t **stack, unsigned int line_number)
{
}
return;
/**
 * swap_nodes - Swaps are two elements of the stack.
 * @stack: Pointer to top node of the stack.
 * @line_number: Line number of of the opcode.
 */
void swap_nodes(stack_t **stack, unsigned int line_number);
{
Int *stack;
If (if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
}
more_error(int error_code, line_number);
tmp = (*stack)->next;
(*stack)->next = tmp->next;
{
}
return;
/**
 * add_nodes : two function in the nodes of the stack.
 * @stack: Pointer to node of the stack.
 * @@line_number: Line number of of the opcode.
 *
 */
void add_nod(stack_t **stack, unsigned int line_number);
if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
(*stack)->next == next->next;
add_nodes (*stack, line_number);
}
return;
/**
 * sub_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: the line number of the opcode.
 */
void sub_nod(stack_t **stack, unsigned int line_number);
{
if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_error(int line_number, "sub");
(*stack) = (*stack)->next;
{
}
free((*stack)->next);
(*stack)->next= NULL;
}
return;
/**
 * div_nod - two finction in the nodes of the stack.
 * @stack: ointer to node of the stack.
 * @line_number: the line of the opcode.
 *
 */
void div_nod(stack_t **stack, unsigned int line_number);
{
if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_error(int line_number, "div");
{
div_nod (*stack, line_number);
}
}
return;
