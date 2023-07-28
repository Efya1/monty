#include "monty.h"

/**
 * op_pint -This Print the value at the top of the stack
 * @sp:This is a Stack pointer
 * Pint code created by Martin
 * Afua's Tasks
 */
void op_pint(stack_t **sp)
{
	if (*sp)
		printf("%d\n", (*sp)->n);
	else
		pfailure("L%u: can't pint, stack empty\n", op_env.lineno);
}
