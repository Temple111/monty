#include "monty.h"
/**
 * add_nd - add node to the head stack
 * @hd_st: head of the stack
 * @nw: new_value
 * Return: no return
*/
void add_nd(stack_t **hd_st, int nw)
{

	stack_t *nw_nd, *ax;

	ax = *hd_st;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = nw_nd;
	nw_nd->n = nw;
	nw_nd->next = *hd_st;
	nw_nd->prev = NULL;
	*hd_st = nw_nd;
}
