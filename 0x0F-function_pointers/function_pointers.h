#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void rev_string(char *s);
int int_index(int *array, int size, int (*cmp)(int));

#endif
