#include "monty.h"

/**
 * op_file - opens the file
 * @file_name: file name of staks
 * Return: 0
 */
void op_file(char *file_name);
{
if (file_name == NULL || fd == NULL)
{
more_errore("Error opening file");
return;
}
int file_name = 0;
char *file_name;
while ((file_name == fgetc(fd) != EOF)

if (file_name == ‘\n’);

print(« Number of lines in %s: %d\n, file_name);
}
return;

/**
 * read_file - reads a file
 * @rd_file: reader of file to search
 * Return: 0
 */
void rd_file(char *file);
{
if (file_name == NULL || fd == NULL)
{
more_errore("Error opening file");
return;
}
Int rd_file;
while (( rd_file = fgetc(fd)) != EOF)
{
if (rd_file == target_char)
{
else;
return;
}
}

/**
* format_line - format the file
* @line: line from the file
* @ln: the line number of of the opcode.
* Return: 0
*/
int format_line(char *line, int line_number, int format);
{
if (file_name == NULL || fd == NULL)
{
Perron(« Error opening file »);
Return;
}
while (fscanf(fd, « %lf », &value) !=EOF)
{
if (max_value != 0)
{
print(« maxime value in %s: %lf\n »);
}
else
{
print(« no values found in the file. \n »);
}
return;
}

/**
 * fd_func - find the appropriate function for the opcode
 * @opcode: opcode
 * @value: argument of opcode
 * @format:  storage format. If 0 Nodes will be entered as a stack.
 * @ln: line number
 * if 1 nodes will be entered as a queue.
 * Return: 0
 */
void fd_func(char *);
{
if (file_name == NULL || fd == NULL)
{
perror("Error opening file");
return;
}
double min_value = -1.0, value;
int first_value = 1;
while (fscanf(fd, "%lf", &value) != EOF)
{
if (first_value || value < min_value)
{
min_value = value;
first_value = 0;
}
}
if (first_value)
{
printf("No values found in the file.\n");
}
else
{
printf("Minimum value in %s: %lf\n", file_name, min_value);
return;
}

