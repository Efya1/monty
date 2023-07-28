#include "monty.h"

/**
 * free_op_env -This function clear stack operation environment
 * This code frees env
 * Afua's Task
 */
void free_op_env(void)
{
	free_stack(&op_env.sp);
	free(op_env.argv);
	free(op_env.line);
	op_env.argv = NULL;
	op_env.line = NULL;
}
