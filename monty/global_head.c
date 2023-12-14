#include "monty.h"

stack_t **get_global_head(void)
{
  static stack_t *head = NULL;
  return &head;
}

void set_global_head(stack_t *new_head)
{
  stack_t **head_ptr = get_global_head();
  *head_ptr = new_head;
}
