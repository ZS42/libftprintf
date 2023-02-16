REQUIREMENTS


• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

You have to implement the following conversions:

• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format. • %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.

FOR BONUS

• Manage any combination of the following flags: ’-0.’ and the field minimum width under all conversions.

• Manage all the following flags: ’# +’ (Yes, one of them is a space)





NOTES


used a pointer *len to point to len and increment as we go along

int len;
int *len;
*len = &len;


In case of %c input is int even though the function is for char bc 


"In C you have the "%c" and "%f" formats flags for printf- and scanf-like functions. Both of these function use variable length arguments ..., which always convert floats to doubles and chars to ints." 
"For functions without prototype, or parameters corresponding to the ellipsis ..., the default argument promotions are performed.
Those are: Default integer promotions and promotion of float to double."
"Default integer promotions: Every integer type of rank less than int is promoted to int or unsigned int."

In case of %p though pointer uses a hexadecimal it needs to be prefixed with  "Ox" , only uses lower case hex and may require more than an unsigned int so needs a seperate function

in case of %u you can either add a condition to convert negative number to positive by adding max 4294967296 (4294967295 + 1 bc starts from zero) or limit input to unsigned int so it will do this automatically

in case of %x and %X both use unsigned int input bc negative in hexa is represented by the first letter being above 7 and positive 7 or below. There is no real reason for ther to be two ie capital ad small except preference. No difference.

<img width="1175" alt="ft_printf" src="https://user-images.githubusercontent.com/82111543/218945822-35ed8bde-d9d8-482a-a8b4-60aeb7bc50ec.png">
