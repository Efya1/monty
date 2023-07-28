#include "monty.h"

/**
 * free_stack - free and nullify a stack
 * @sp: pointer to a pointer to the top of a stack
 * Afua's tasks
 */
void free_stack(stack_t **sp)
{
	stack_t *top = NULL;

	if (sp && *sp)
	{
		top = *sp;
		top->next->prev = NULL;
		do {
			*sp = top->prev;
			free(top);
		} while ((top = *sp));
	}
}
