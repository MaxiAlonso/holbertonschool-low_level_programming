# **0x01 variables if else while**

The learning objectives for this project were:

## **General**
	• What are the arithmetic operators and how to use them
	• What are the logical operators (sometimes called boolean operators) and how to use them
	• What the the relational operators and how to use them
	• What values are considered TRUE and FALSE in C
	• What are the boolean operators and how to use them
	• How to use the if, if ... else statements
	• How to use comments
	• How to declare variables of types char, int, unsigned int
	• How to assign values to variables
	• How to print the values of variables of type char, int, unsigned int with printf
	• How to use the while loop
	• How to use variables with the while loop
	• How to print variables using printf
	• What is the ASCII character set
	• What are the purpose of the gcc flags -m32 and -m64

###For this project we had to write the following C programs:
	• 0-positive_or_negative.c - assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
		-	You can find the source code here (https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
		-	The variable n will store a different value every time you run this program
		-	You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
		-	The output of the program should be:
			o	The number, followed:
					if the number is greater than 0: is positive
					If the number is 0: is zero 
					if the number is less than 0: is negative
			o	followed by a new line
	• 1-last_digit.c - assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
		-	You can find the source code here (https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
		-	The variable n will store a different value every time you run this program
		-	You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
		-	The output of the program should be:
			o	The string Last digit of, followed by
			o	n, followed by
			o	the string is, followed by
					if the last digit of n is greater than 5: the string and is greater than 5
					if the last digit of n is 0: the string and is 0
					if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
			o	followed by a new line
	• 2-print_alphabet.c - prints the alphabet in lowercase, followed by a new line.
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	All your code should be in the main function
		-	You can only use putchar twice in your code
	• 3-print_alphabets.c - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	All your code should be in the main function
		-	You can only use putchar three times in your cod
	• 4-print_alphabt.c - prints the alphabet in lowercase, followed by a new line.
		-	Print all the letters except q and e
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	All your code should be in the main function
		-	You can only use putchar twice in your code
	• 5-print_numbers.c - prints all single digit numbers of base 10 starting from 0, followed by a new line. All your code should be in the main function.
	• 6-print_numberz.c - prints all single digit numbers of base 10 starting from 0, followed by a new line.
		-	You are not allowed to use any variable of type char
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	You can only use putchar twice in your code
		-	All your code should be in the main function
	• 7-print_tebahpla.c - prints the lowercase alphabet in reverse, followed by a new line.
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	All your code should be in the main function
		-	You can only use putchar twice in your code
	• 8-print_base16.c - prints all the numbers of base 16 in lowercase, followed by a new line.
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	All your code should be in the main function
		-	You can only use putchar three times in your cod
	• 9-print_comb.c - prints all possible combinations of single-digit numbers.
		-	Numbers must be separated by ,, followed by a space
		-	Numbers should be printed in ascending order
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	All your code should be in the main functionYou can only use putchar four times maximum in your code
		-	You are not allowed to use any variable of type char
	100-print_comb3.c - prints all possible different combinations of two digits.
		-	Numbers must be separated by (,) followed by a space
		-	The two digits must be different
		-	01 and 10 are considered the same combination of the two digits 0 and 1
		-	Print only the smallest combination of two digits
		-	Numbers should be printed in ascending order, with two digits
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	You can only use putchar five times maximum in your code
		-	You are not allowed to use any variable of type char
		-	All your code should be in the main function
	101-print_comb4.c - prints all possible different combinations of three digits.
		-	Numbers must be separated by ,, followed by a space
		-	The three digits must be different
		-	012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
		-		Print only the smallest combination of three digits
		-	Numbers should be printed in ascending order, with three digits
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	You can only use putchar six times maximum in your code
		-	You are not allowed to use any variable of type char
		-	All your code should be in the main function
	102-print_comb5.c  - prints all possible combinations of two two-digit numbers.
		-	The numbers should range from 0 to 99
		-	The two numbers should be separated by a space
		-	All numbers should be printed with two digits. 1 should be printed as 01
		-	The combination of numbers must be separated by comma, followed by a space
		-	The combinations of numbers should be printed in ascending order
		-	00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
		-	You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
		-	You can only use putchar eight times maximum in your code
		-	You are not allowed to use any variable of type char
		-	All your code should be in the main function
