#include "monty.h"
/**
 * mul_ele - multiplies the top two elements of the stack.
 * @hd_st: stack head
 * @count_l: line_number
 * Return: no return
*/
void mul_ele(stack_t **hd_st, unsigned int count_l)
{
	stack_t *a;
	int l = 0, az;

	a = *hd_st;
	while (a)
	{
		a = a->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count_l);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_st);
		exit(EXIT_FAILURE);
	}
	a = *hd_st;
	az = a->next->n * a->n;
	a->next->n = az;
	*hd_st = a->next;
	free(a);
}
