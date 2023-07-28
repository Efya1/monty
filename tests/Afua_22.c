#include "monty.h"

/**
 * op_stack - set stack mode to last-in first-out (default)
 * @sp:This is a function that stack pointer
 * By Afua's Task
 */
void op_stack(stack_t **sp __attribute__((unused)))
{
	op_env.mode = LIFO;
}
