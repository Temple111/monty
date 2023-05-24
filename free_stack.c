#include "monty.h"
/**
* free_dlink - frees a doubly linked list
* @hd_st: head of the stack
*/
void free_dlink(stack_t *hd_st)
{
	stack_t *ax;

	ax = hd_st;
	while (hd_st)
	{
		ax = hd_st->next;
		free(hd_st);
		hd_st = ax;
	}
}
