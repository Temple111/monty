#include "monty.h"
/**
* execute - executes the opcode
* @stk: head linked list - stack
* @l_count: line_counter
* @monty_file: poiner to monty file
* @line_content: line content
* Return: no return
*/
int execute(char *line_content, stack_t **stk, unsigned int l_count,
		FILE *monty_file)
{
	instruction_t opst[] = {
				{"push", add_nd_st}, {"pall", pr_st}, {"pint", pri_t},
				{"pop", pr_tp},
				{"swap", add_tp_ele},
				{"add", add_ele_stack},
				{"nop", no_pf},
				{"sub", sub_tract},
				{"div", div_ele_stack},
				{"mul", mul_ele},
				{"mod", computes_ele},
				{"pchar", pri_ch},
				{"pstr", pr_st_top},
				{"rotl", rot_st_tp},
				{"rotr", rot_st_bm},
				{"queue", p_top},
				{"stack", sta_ck},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *po;

	po = strtok(line_content, " \n\t");
	if (po && po[0] == '#')
		return (0);
	fleet.arg = strtok(NULL, " \n\t");
	while (opst[a].opcode && po)
	{
		if (strcmp(po, opst[a].opcode) == 0)
		{	opst[a].f(stk, l_count);
			return (0);
		}
		a++;
	}
	if (po && opst[a].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", l_count, po);
		fclose(monty_file);
		free(line_content);
		free_dlink(*stk);
		exit(EXIT_FAILURE); }
	return (1);
}
