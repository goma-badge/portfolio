#include <stdio.h>
#include "stack.h"

int main(void)
{
	int		x;

	stack_initialize();

	stack_push(10); stack_print();
	stack_push(50); stack_print();
	stack_push(20); stack_print();

	while ((x=stack_pop()) >= 0) {
		printf("x=%d\n", x);
		stack_print();
	}

	return 0;
}
