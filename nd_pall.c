#include "monty.h"
/**
 * pr_st - prints the stack
 * @hd_stk: stack head
 * @cou_line: no used
 * Return: no return
*/
void pr_st(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *z;
	(void)cou_line;

	z = *hd_stk;
	if (z == NULL)
		return;
	while (z)
	{
		printf("%d\n", z->n);
		z = z->next;
	}
}

