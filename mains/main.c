
#include "../includes/ft_printf.h"
#include <stdio.h>

int	main()
{
	int		i;

	// Char tests
	// printf("%15s", "CHAR\n");
	pf_putchar('\n');
	pf_putchar('\n');
	printf ("prin: %c %c \n", 'a', 65);
	ft_printf("mine: %c %c \n", 'a', 65);
	pf_putchar('\n');
	printf ("prin: %c \n", 'a');
	ft_printf("mine: %c \n", 'a');
	pf_putchar('\n');
	printf ("l test prin: %lc \n", 'a'); 
	ft_printf("l test mine: %lc \n", 'a'); //returns c rather than 
	pf_putchar('\n');
	printf("prin: %5c\n", '$');
	ft_printf("mine: %5c\n", '$');
	pf_putchar('\n');
	printf("prin: %10c\n", '$');
	ft_printf("mine: %10c\n", '$');
	pf_putchar('\n');
	printf("prin minus: %-5c %c\n", '$', '%');
	ft_printf("mine minus: %-5c %c\n", '$', '%');
	pf_putchar('\n');
	i = printf("|%c| \n", '\0'); //checks for null character
	printf("Return value: %d\n", i);
	i = ft_printf("|%c| \n", '\0');
	printf("Return value: %d\n", i); //checks for null character
	pf_putchar('\n');

	// Ints and Ds 
	printf("pf: %d, %d\n", 42, 21);
	ft_printf("me: %d, %d\n", 42, 21);
	pf_putchar('\n');
	printf("pf: %d\n", -42);
	ft_printf("me: %d\n", -42);
	pf_putchar('\n');
	// printf ("pf: %d %ld\n", 1977, 650000L);
	// ft_printf ("me: %d %ld\n", 1977, 650000L);
	// pf_putchar('\n');
	// printf ("pf preceding with blanks: %10d \n", 1977);
	// ft_printf("me preceding with blanks: %10d \n", 1977);
	// pf_putchar('\n');
	// printf ("pf preceding with zeros: %010d \n", 1977);
	// ft_printf("me preceding with zeros: %010d \n", 1977);
	// pf_putchar('\n');
	// ft_printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);

	// ft_printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	// printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);

	// ft_printf("Width trick: %*d \n", 5, 10);
	// printf ("Width trick: %*d \n", 5, 10);

	// printf("%15s\n", "STRINGS\n");
	pf_putchar('\n');
	pf_putchar('\n');
	printf ("pf a simple string: %s \n", "A string");
	ft_printf ("me a simple string: %s \n", "A string"); //printing a zero, null terminating char??
	pf_putchar('\n');
	printf ("pf prec test: %.5s \n", "abcdefg");
	ft_printf ("me prec test: %.5s \n", "abcdefg"); //printing a zero, null terminating char??
	pf_putchar('\n');
	printf ("pf prec and pad: %-10.5s %c\n", "abcdefg", 's');
	ft_printf ("me prec and pad: %-10.5s %c\n", "abcdefg", 's'); //printing a zero, null terminating char??
	pf_putchar('\n');
	printf ("pf 10 pad: %10s \n", "abcdefg");
	ft_printf ("me 10 pad: %10s \n", "abcdefg");
	pf_putchar('\n');
	printf ("pf string minus pad: %-10s%c\n", "A string",'c');
	ft_printf ("me string minus pad: %-10s%c\n", "A string",'c');
	pf_putchar('\n');
	printf("pf: hello, %s \n" , "gavin");
	ft_printf("me: hello, %s \n" , "gavin");
	pf_putchar('\n');
	// printf ("printf: %lls \n", "abcdefg");
	// ft_printf ("mine: %lls \n", "abcdefg");

	// percent sign
	// printf("%15s", "PERCENT");
	pf_putchar('\n');
	pf_putchar('\n');
	printf("pf percent: %%\n");
	ft_printf("me percent: %%\n");

	// system("leaks test"); FOR LATER
	return 0;
}

