#include <stdio.h>

void start_up_func(void)__attribute__((constructor));

void start_up_func(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
