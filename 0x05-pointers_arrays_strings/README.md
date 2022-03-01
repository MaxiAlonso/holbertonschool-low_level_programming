# **0x05 pointers arrays strings**

The learning objectives for this project were:

## **General**
	• What are pointers and how to use them
	• What are arrays and how to use them
	• What are the differences between pointers and arrays
	• How to use strings and how to manipulate them
	• Scope of variables

### For this project we had to write the following C programs:
	• 0-reset_to_98.c - takes a pointer to an int as parameter and updates the value it points to to 98.
		- Prototype: void reset_to_98(int *n);
	• 1-swap.c - swaps the values of two integers.
		- Prototype: void swap_int(int *a, int *b);
	• 2-strlen.c - returns the length of a string.
		- Prototype: int _strlen(char *s);
	• 3-puts.c - prints a string, followed by a new line, to stdout.
		- Prototype: void _puts(char *str);
	• 4-print_rev.c - prints a string, in reverse, followed by a new line.
		- Prototype: void print_rev(char *s)
	• 5-rev_string.c - reverses a string.
		- Prototype: void rev_string(char *s)
	• 6-puts2.c - prints every other character of a string, starting with the first character, followed by a new line.
		- Prototype: void puts2(char *str);
	• 7-puts_half.c - prints half of a string, followed by a new line.
		- Prototype: void puts_half(char *str);
		- The function should print the second half of the string
		- If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
	• 8-print_array.c - prints n elements of an array of integers, followed by a new line.
		- Prototype: void print_array(int *a, int n);
		- where n is the number of elements of the array to be printed
		- Numbers must be separated by comma, followed by a space
		- The numbers should be displayed in the same order as they are stored in the array
		- You are allowed to use printf
	• 9-strcpy.c - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
		- Prototype: char *_strcpy(char *dest, char *src);
		- Return value: the pointer to dest
	• 100-a	toi.c - convert a string to an integer.
		- Prototype: int _atoi(char *s);
		- The number in the string can be preceded by an infinite number of characters
		- You need to take into account all the - and + signs before the number
		- If there are no numbers in the string, the function must return 0
		- You are not allowed to use long
		- You are not allowed to declare new variables of “type” array
		- You are not allowed to hard-code special values
		- We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

