#include "monty.h"
/**
 * pri_ch - prints the char at the top of the stack,
 * followed by a new line
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void pri_ch(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *hd;

	hd = *hd_stk;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_dlink(*hd_stk);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
