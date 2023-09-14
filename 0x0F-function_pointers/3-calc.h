#ifndef CALC_H
#define CALC_H
/**
 * struct op - A struct oparator
 * @f: The function associated
 * @o: oparand
 *
 * Return: Always 0.
 */
typedef struct op

{
	char *o;
	int (*f)(int a, int b);
}
op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
op_mod(int a, int b);

#endif
