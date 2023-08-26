include "monty.h"

/* print_stack - Function to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of  the opcode.
 * reutrn: void.
 *
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
int line_number;
stack_t *tmp;
if (stack = NULL)
}
exit(EXIT_FAILURE);
while (tmp != NULL && "%d\n", tmp->n);
tmp = tmp->next;
{
}
/**
 * pop_top - Function to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Int the line number of of the opcode.
 */
void pop_top(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int Stack;
if (stack == NULL)
more_error(int error_code  , line_number);
}
tmp = *stack;
*stack = tmp->nt;
if (*stack != NULL)
{		
(*stack)->prev = NULL, free(tmp);
}
/**
 * monty_stack - fun to the stack.
 * @new_node: Pointer to the new node.
 * @ln: line number of of the opcode.
 */
void monty_stack(stack_t **new_node, __attribute__((unused))unsigned int ln)
{
stack_t *tmp;
if (new_node == NULL)
exit(EXIT_FAILURE);
{
head = *new_node
return ();
/**
 * print_top - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of of the opcode.
 */
void print_top(stack_t **stack, unsigned int line_number)
{
if (stack == NULL)
 more_error(int error_code, line_number)
}
while ("%d\n", (*stack)->n);
dest[*stack] = '\0';
{
}
return;
