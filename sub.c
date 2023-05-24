#include "monty.h"
/**
  *sub_tract - sustration
  *@hd_stk: stack head
  *@cou_line: line_number
  *Return: no return
 */
void sub_tract(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *ai;
	int s, nd;

	ai = *hd_stk;
	for (nd = 0; ai != NULL; nd++)
		ai = ai->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE);
	}
	ai = *hd_stk;
	s = ai->next->n - ai->n;
	ai->next->n = s;
	*hd_stk = ai->next;
	free(ai);
}

