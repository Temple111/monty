#include "monty.h"
/**
 * add_ele_stack - adds the top two elements of the stack.
 * @hd_st: stack head
 * @l_count: line_number
 * Return: no return
*/
void add_ele_stack(stack_t **hd_st, unsigned int l_count)
{
	stack_t *a;
	int l = 0, ax;

	a = *hd_st;
	while (a)
	{
		a = a->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_count);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_st);
		exit(EXIT_FAILURE);
	}
	a = *hd_st;
	ax = a->n + a->next->n;
	a->next->n = ax;
	*hd_st = a->next;
	free(a);
}
