#include "monty.h"
/**
 * pr_tp - prints the top
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void pr_tp(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *hd;

	if (*hd_stk == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE);
	}
	hd = *hd_stk;
	*hd_stk = hd->next;
	free(hd);
}
