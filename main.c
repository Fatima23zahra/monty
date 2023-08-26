#include "monty.h"

/**
 * main - function full path to command.
 * @argc: arguments count
 * @argv: full command
 * Return: always 0
 */
int main(int argc, char *argv[])
{
{
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
// Call a function to open and process the file (not shown here)
op_file(argv[1]);
// Call a function to free any allocated memory (not shown here)
free_nodes();
return (0); // Return 0 to indicate successful execution
}
/**
 * create_node - Creates a node.
 * @n: num of the nodes
 * Return: always 0
 */
void stack_t *create_node(n)
{
stack_t *node;
// Allocate memory for the new node
node = malloc(sizeof(stack_t));
if (node == NULL) // This likely exits the program with an error code
error(4); // Initialize the node's next and previous pointers
node->next = NULL;
node->prev = NULL; // Set the node's value to the provided number
node->n = n;
return (node); // Return the created node
}
/**
 * free_nodes - Function in the stack.
 *
 */
void free_nodes(void);
{
stack_t *tmp;// If the head pointer is already NULL (empty stack), no action needed
if (read == NULL)
return;// Traverse the linked list and free each node
while (read != NULL)
{
tmp = read;        // Store the current node in a temporary pointer
read = read->next; // Move the head pointer to the next node
free(tmp);         // Free the current node}
}
/**
 * monty_queue - Adds a node to the queue.
 * @new_node: Pointer to the new node.
 * @ln: line number of the opcode.
 *
 */
void monty_queue(stack_t **new_node, unsigned int line_number);
{
stack_t *tmp;
if (new_node == NULL)
head = *new_node;
return;
{
tmp = head;
while (tmp->nt == NULL)
tmp = tmp->nt;
tmp->nt = *new_node;
}
}
return;

