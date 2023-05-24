#include "monty.h"
/**
  *rot_st_tp - rotates the stack to the top
  *@hd_stk: stack head
  *@cou_line: line_number
  *Return: no return
 */
void rot_st_tp(stack_t **hd_stk,  __attribute__((unused))
unsigned int cou_line)
{
	stack_t *cp = *hd_stk, *ai;

	if (*hd_stk == NULL || (*hd_stk)->next == NULL)
	{
		return;
	}
	ai = (*hd_stk)->next;
	ai->prev = NULL;
	while (cp->next != NULL)
	{
		cp = cp->next;
	}
	cp->next = *hd_stk;
	(*hd_stk)->next = NULL;
	(*hd_stk)->prev = cp;
	(*hd_stk) = ai;
}
