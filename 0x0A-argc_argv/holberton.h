#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))
#define SIZE 5
#define AMOUNT(x) (x)

int is_valid(char *s);
int get_change(int coins[], int amount, int size);

#endif /*HOLBERTON_H*/
