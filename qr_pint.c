#include "monty.h"
/**
 * pri_t - prints the top
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void pri_t(stack_t **hd_stk, unsigned int cou_line)
{
	if (*hd_stk == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd_stk)->n);
}
