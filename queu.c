#include "monty.h"
/**
 * p_top - prints the top
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void p_top(stack_t **hd_stk, unsigned int cou_line)
{
	(void)hd_stk;
	(void)cou_line;
	fleet.zf = 1;
}

/**
 * add_que - add node to the tail stack
 * @nw: new_value
 * @hd_stk: head of the stack
 * Return: no return
*/
void add_que(stack_t **hd_stk, int nw)
{
	stack_t *nw_nd, *ai;

	ai = *hd_stk;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{
		printf("Error\n");
	}
	nw_nd->n = nw;
	nw_nd->next = NULL;
	if (ai)
	{
		while (ai->next)
			ai = ai->next;
	}
	if (!ai)
	{
		*hd_stk = nw_nd;
		nw_nd->prev = NULL;
	}
	else
	{
		ai->next = nw_nd;
		nw_nd->prev = ai;
	}
}
