#include "monty.h"
/**
  *rot_st_bm - rotates the stack to the bottom
  *@hd_stk: stack head
  *@cou_line: line_number
  *Return: no return
 */
void rot_st_bm(stack_t **hd_stk, __attribute__((unused))
unsigned int cou_line)
{
	stack_t *cp;

	cp = *hd_stk;
	if (*hd_stk == NULL || (*hd_stk)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *hd_stk;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*hd_stk)->prev = cp;
	(*hd_stk) = cp;
}
