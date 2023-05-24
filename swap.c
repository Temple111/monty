#include "monty.h"
/**
 * add_tp_ele - adds the top two elements of the stack.
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void add_tp_ele(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *hd;
	int l = 0, ai;

	hd = *hd_stk;
	while (hd)
	{
		hd = hd->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE);
	}
	hd = *hd_stk;
	ai = hd->n;
	hd->n = hd->next->n;
	hd->next->n = ai;
}
