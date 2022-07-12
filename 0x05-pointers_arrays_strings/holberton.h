#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Function that prints characters*/
int _putchar(char c);

/*Function to update a value by pointer*/
void reset_to_98(int *n);

/*Function to swap the values of two integers*/
void swap_int(int *a, int *b);

/*Function that returns the length of a string*/
int _strlen(char *s);

/*Function that prints a string*/
void _puts(char *str);

/*Function that prints a string, in reverse*/
void print_rev(char *s);

/*Function that reverses a string*/
void rev_string(char *s);

/*Function that prints every other character of a string*/
void puts2(char *str);

/*Function that prints half of a string*/
void puts_half(char *str);

/*function that prints n elements of an array of integers*/
void print_array(int *a, int n);

/*function that copies the string pointed to by src*/
char *_strcpy(char *dest, char *src);

/*Function that convert a string to an integer*/
int _atoi(char *s);

#endif /* HOLBERTON_H */
