# 0x06. C - More pointers, arrays and strings


### [0-strcat.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c) => Write a function that concatenates two strings.

    Prototype: char *_strcat(char *dest, char *src);
    This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
    Returns a pointer to the resulting string dest
    FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
   
   
### [1-strncat.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c) => Write a function that concatenates two strings.

    Prototype: char *_strncat(char *dest, char *src, int n);
    The _strncat function is similar to the _strcat function, except that
    it will use at most n bytes from src; and
    src does not need to be null-terminated if it contains n or more bytes
    Return a pointer to the resulting string dest
    FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.    
    

### [2-strncpy.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c) => Write a function that copies a string.

    Prototype: char *_strncpy(char *dest, char *src, int n);
    Your function should work exactly like strncpy
    FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.


    julien@ubuntu:~/0x06$ cat 2-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s1[98];
        char *ptr;
        int i;

        for (i = 0; i < 98 - 1; i++)
        {
            s1[i] = '*';
        }
        s1[i] = '\0';
        printf("%s\n", s1);
        ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
        printf("%s\n", s1);
        printf("%s\n", ptr);
        ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
        printf("%s", s1);
        printf("%s", ptr);
        for (i = 0; i < 98; i++)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", s1[i]);
        }
        printf("\n");
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
    julien@ubuntu:~/0x06$ ./2-strncpy 
    *************************************************************************************************
    First********************************************************************************************
    First********************************************************************************************
    First, solve the problem. Then, write the code
    First, solve the problem. Then, write the code
    0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
    0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
    0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
    0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
    0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
    julien@ubuntu:~/0x06$ 
    
    
    
### [3-strcmp.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c) => Write a function that compares two strings.

    Prototype: int _strcmp(char *s1, char *s2);
    Your function should work exactly like strcmp
    FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.     
    
    
### [4-rev_array.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c) => Write a function that reverses the content of an array of integers.

    Prototype: void reverse_array(int *a, int n);
    Where n is the number of elements of the array


    julien@ubuntu:~/0x06$ cat 4-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     * @a: an array of integers
     * @n: the number of elements to swap
     *
     * Return: nothing.
     */
    void print_array(int *a, int n)
    {
        int i;

        i = 0;
        while (i < n)
        {
            if (i != 0)
            {
                printf(", ");
            }
            printf("%d", a[i]);
            i++;
        }
        printf("\n");
    }

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

        print_array(a, sizeof(a) / sizeof(int));
        reverse_array(a, sizeof(a) / sizeof(int));
        print_array(a, sizeof(a) / sizeof(int));
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
    julien@ubuntu:~/0x06$ ./4-rev_array 
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
    1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    julien@ubuntu:~/0x06$     
    
    
    
### [5-string_toupper.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c) => Write a function that changes all lowercase letters of a string to uppercase.

    Prototype: char *string_toupper(char *);
    
    julien@ubuntu:~/0x06$ cat 5-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char str[] = "Look up!\n";
        char *ptr;

        ptr = string_toupper(str);
        printf("%s", ptr);
        printf("%s", str);
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
    julien@ubuntu:~/0x06$ ./5-string_toupper 
    LOOK UP!
    LOOK UP!
    julien@ubuntu:~/0x06$     
    
    
### [6-cap_string.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c) => Write a function that capitalizes all words of a string.

    Prototype: char *cap_string(char *);
    Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
    
    
    julien@ubuntu:~/0x06$ cat 6-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
        char *ptr;

        ptr = cap_string(str);
        printf("%s", ptr);
        printf("%s", str);
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
    julien@ubuntu:~/0x06$ ./6-cap 
    Expect The Best. Prepare For The Worst. Capitalize On What Comes.
    Hello World! Hello-world 0123456hello World Hello World.Hello World
    Expect The Best. Prepare For The Worst. Capitalize On What Comes.
    Hello World! Hello-world 0123456hello World Hello World.Hello World
    julien@ubuntu:~/0x06$ 
    
    
    
### [7-leet.c](https://github.com/Maelabad/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c) => Write a function that encodes a string into 1337.

    + Letters a and A should be replaced by 4
    + Letters e and E should be replaced by 3
    + Letters o and O should be replaced by 0
    + Letters t and T should be replaced by 7
    + Letters l and L should be replaced by 1
    + Prototype: char *leet(char *);
    + You can only use one if in your code
    + You can only use two loops in your code
    + You are not allowed to use switch
    + You are not allowed to use any ternary operation    
    
    
