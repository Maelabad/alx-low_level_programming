
# 0x02. C - Functions, nested loops

0-putchar.c => Write a program that prints _putchar, followed by a new line.

    The program should return 0
    
1-alphabet.c => Write a function that prints the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet(void);
    You can only use _putchar twice in your code
    
    
2-print_alphabet_x10.c => Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet_x10(void);
    You can only use _putchar twice in your code
    
3-islower.c => Write a function that checks for lowercase character.

    Prototype: int _islower(int c);
    Returns 1 if c is lowercase
    Returns 0 otherwise
    FYI: The standard library provides a similar function: islower. Run man islower to learn more.
    
    
4-isalpha.c => Write a function that checks for alphabetic character.

    Prototype: int _isalpha(int c);
    Returns 1 if c is a letter, lowercase or uppercase
    Returns 0 otherwise
    FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.
    
    
5-sign.c => Write a function that prints the sign of a number.

    Prototype: int print_sign(int n);
    Returns 1 and prints + if n is greater than zero
    Returns 0 and prints 0 if n is zero
    Returns -1 and prints - if n is less than zero

    julien@ubuntu:~/0x02$ cat 5-main.c
    #include "main.h"

    /**
     * main - check the code.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = print_sign(98);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = print_sign(0);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = print_sign(0xff);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = print_sign(-1);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        return (0);
    }
    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
    julien@ubuntu:~/0x02$ ./5-sign 
    +, 1
    0, 0
    +, 1
    -, /
    julien@ubuntu:~/0x02$ 
    
    
6-abs.c => Write a function that computes the absolute value of an integer.

    Prototype: int _abs(int);
    FYI: The standard library provides a similar function: abs. Run man abs to learn more.
    
    
  
7-print_last_digit.c => Write a function that prints the last digit of a number.

    Prototype: int print_last_digit(int);
    Returns the value of the last digit
    
    
    
8-24_hours.c => Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

    Prototype: void jack_bauer(void);
    You can listen to this soundtrack while coding :)

    julien@ubuntu:~/0x02$ cat 8-main.c
    #include "main.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        jack_bauer();
        return (0);
    }
    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
    julien@ubuntu:~/0x02$ ./8-24 | head
    00:00
    00:01
    00:02
    00:03
    00:04
    00:05
    00:06
    00:07
    00:08
    00:09
    julien@ubuntu:~/0x02$ ./8-24 | tail
    23:50
    23:51
    23:52
    23:53
    23:54
    23:55
    23:56
    23:57
    23:58
    23:59
    julien@ubuntu:~/0x02$ ./8-24 | wc -l
    1440
    julien@ubuntu:~/0x02$     
    
    
9-times_table.c => Write a function that prints the 9 times table, starting with 0.

    Prototype: void times_table(void);
    Format: see example    
    
    
10-add.c => Write a function that adds two integers and returns the result.

    Prototype: int add(int, int);
    

11-print_to_98.c => Write a function that prints all natural numbers from n to 98, followed by a new line.

    Prototype: void print_to_98(int n);
    Numbers must be separated by a comma, followed by a space
    Numbers should be printed in order
    The first printed number should be the number passed to your function
    The last printed number should be 98
    You are allowed to use the standard library 
    
    
100-times_table.c => Write a function that prints the n times table, starting with 0.

    Prototype: void print_times_table(int n);
    If n is greater than 15 or less than 0 the function should not print anything
    Format: see example    
    
    
101-natural.c => If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that                   computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
                  You are allowed to use the standard library    
                  
                  
102-fibonacci.c => Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

    The numbers must be separated by comma, followed by a space , 
    You are allowed to use the standard library
    
    
    
103-fibonacci.c => Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2
                  , 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds
                  and prints the sum of the even-valued terms, followed by a new line.
                  You are allowed to use the standard library    
    

104-fibonacci.c => Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

      The numbers should be separated by comma, followed by a space ,
      You are allowed to use the standard library
      You are not allowed to use any other library (You can’t use GMP etc…)
      You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
      You are not allowed to hard code any Fibonacci number (except for 1 and 2)
    
