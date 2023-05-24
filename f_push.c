#include "monty.h"
/**
 * add_nd_st - add node to the stack
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void add_nd_st(stack_t **hd_stk, unsigned int cou_line)
{
	int ni, aj = 0, fg = 0;

	if (fleet.arg)
	{
		if (fleet.arg[0] == '-')
			aj++;
		for (; fleet.arg[aj] != '\0'; aj++)
		{
			if (fleet.arg[aj] > 57 || fleet.arg[aj] < 48)
				fg = 1; }
		if (fg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", cou_line);
			fclose(fleet.monty_file);
			free(fleet.line_content);
			free_dlink(*hd_stk);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE); }
	ni = atoi(fleet.arg);
	if (fleet.zf == 0)
		add_nd(hd_stk, ni);
	else
		add_que(hd_stk, ni);
}
