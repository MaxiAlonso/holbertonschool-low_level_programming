# **0x06 pointers arrays strings**

The learning objectives for this project were:

## **General**
	• What are pointers and how to use them
	• What are arrays and how to use them
	• What are the differences between pointers and arrays
	• How to use strings and how to manipulate them
	• Scope of variable

### For this project we had to write the following C programs:
	
	• 0-strcat.c - concatenates two strings.
		- Prototype: char *_strcat(char *dest, char *src);
		- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
		- Returns a pointer to the resulting string dest
	• 1-strncat.c - concatenates two strings.
		- Prototype: char *_strncat(char *dest, char *src, int n);
		- The _strncat function is similar to the _strcat function, except that
		- it will use at most n bytes from src; and
		- src does not need to be null-terminated if it contains n or more bytes
		- Return a pointer to the resulting string dest
	• 2-strncpy.c - copies a string.
		- Prototype: char *_strncpy(char *dest, char *src, int n);
		- Your function should work exactly like strncpy
	• 3-strcmp.c - compares two strings.
		- Prototype: int _strcmp(char *s1, char *s2);
		- Your function should work exactly like strcmp
	• 4-rev_array.c - reverses the content of an array of integers.
		- Prototype: void reverse_array(int *a, int n);
		- Where n is the number of elements of the array
	• 5-string_toupper.c - changes all lowercase letters of a string to uppercase.
		- Prototype: char *string_toupper(char *);
	• 6-cap_string.c - capitalizes all words of a string.
		- Prototype: char *cap_string(char *);
		- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
	• 7-leet.c - encodes a string into 1337.
		- Letters a and A should be replaced by 4
		- Letters e and E should be replaced by 3
		- Letters o and O should be replaced by 0
		- Letters t and T should be replaced by 7
		- Letters l and L should be replaced by 1
		- Prototype: char *leet(char *);
		- You can only use one if in your code
		- You can only use two loops in your code
		- You are not allowed to use switch
		- You are not allowed to use any ternary operation
	• 100-rot13.c - encodes a string using rot13.
		- Prototype: char *rot13(char *);
		- You can only use if statement once in your code
		- You are not allowed to use else if
		- You are not allowed to use else
		- You can only use two loops in your code
		- You are not allowed to use switch
		- You are not allowed to use any ternary operation
	• 101-print_number.c - prints an integer.
		- Prototype: void print_number(int n);
		- You can only use _putchar function to print
		- You are not allowed to use long
		- You are not allowed to use arrays or pointers
		- You are not allowed to hard-code special values
	• 102-magic.c - Add one line to this code (https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c),  so that the program prints a[2] = 98, followed by a new line.
		- You are not allowed to use the variable a in your new line of code
		- You are not allowed to modify the variable p
		- You can only write one statement
		- You are not allowed to use ,
		- You are not allowed to code anything else than the line of expected line of code at the expected line
		- Your code should be written at line 19, before the ;
		- Do not remove anything from the initial code (not even the comments)
		- and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
		- You are allowed to use the standard library
