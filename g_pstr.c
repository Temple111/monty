#include "monty.h"
/**
 * pr_st_top - prints the string starting at the top of the stack,
 * followed by a new
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void pr_st_top(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *hd;
	(void)cou_line;

	hd = *hd_stk;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
