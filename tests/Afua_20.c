#include "monty.h"

/**
 * op_rotl - rotate upward (toward top of stack)
 * @sp: This function is a stack pointer
 * Afua's Tasks
 */
void op_rotl(stack_t **sp)
{
	if (*sp)
		*sp = (*sp)->prev;
}
