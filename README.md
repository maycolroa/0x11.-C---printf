![logo](https://user-images.githubusercontent.com/85509333/140988843-905a68d8-cd62-4db6-ba4c-d41d863c5dc9.jpg)
# Printf
first c language project, create a function that prints special characters

## Objective. ##
Write your own printf function 



## Description. ##


```
       %c: Prints the character passed as parameter.

       %s: Prints text string finished with null character.

       %d: Converts argument to signed decimal notation and print it.

       %i:  Converts  argument  to unsigned decimal notation and print it.

       %% Prints a single '%' character

       %b Convert the unsigned argument to a binary and print it.

       %u Prints the integer unsigned decimal conversion.
```

## printf flowchart  ##

![diagrama printf](https://user-images.githubusercontent.com/85509333/141142813-531a1210-c8af-4316-9b6b-a8c95f17a46e.png)

## Examples: ##
```
       1:) _printf("Let's try to printf a simple sentence.\n");
       Let's try to printf a simple sentence.
       
       2:) _printf("Length:[%d, %i]\n", len, len);
       Length:[39, 39]
       
       3:) _printf("Negative:[%d]\n", -762534);
       Negative:[-762534]
       
       4:) _printf("Unsigned:[%u]\n", ui);
       Unsigned:[2147484671]
```
## Compilations: ##
```
      Your code will be compiled this way:

      $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

      and execute it with the command 
      ./a.out
```

SYNOPSYS

```
        
    .B Print ARGUMENT(s) according to FORMAT.


    .B Interpreted sequences are:


    .B %c:
     Prints the character passed as parameter.

    .B %s:
     Prints text string finished with null character.

    .B %d:
     Converts argument to signed decimal notation and print it.

    .B %i:
     Converts argument to unsigned decimal notation and print it.

    .B %%
     Prints a single '%' character

    .B %b
     Convert the unsigned argument to a binary and print it.

    .B %u
     Prints the integer unsigned decimal conversion.

    .B %o
     Prints the integer unsigned octal conversion.

    .B %x
     Unsigned hexadecimal conversion in lowercase form.

    .B %X
     Unsigned hexadecimal conversion uppercase  form.	

    .B %r
     prints the reversed string.

    .B %R
     print a string in Rot 13.
```
```
 AUTHOR(S)
        Juan David Ballesteros.
        Maycol David Roa.
```
