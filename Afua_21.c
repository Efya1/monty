#include "monty.h"

/**
 * op_rotr - rotate downward (toward bottom of stack)
 * @sp:This function is a stack pointer
 * Afua's Task
 */
void op_rotr(stack_t **sp)
{
	if (*sp)
		*sp = (*sp)->next;
}
