#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ft;
	int	pf;

	// ft = ft_printf("%c", '0');
	// pf = printf("%c", '0');

	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf("| %c |", '0');
	// pf = printf("| %c |", '0');

	// printf("\nft: %i pf: %i\n", ft, pf);

	// //string
	// //failing this test case?
	// ft = ft_printf(" NULL %s NULL ", NULL);
	// pf = printf(" NULL %s NULL ", NULL);
	// printf("ft: %i pf: %i\n", ft, pf);

	////pointer tests

	// ft = ft_printf(" %p ", 1);
	// pf = printf(" %p ", 1);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %p ", 15);
	// pf = printf(" %p ", 15);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// pf = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %p %p ", 0, 0);
	// pf = printf(" %p %p ", 0, 0);
	// printf("ft: %i pf: %i\n", ft, pf);

	// //i and d tests

	// ft = ft_printf(" %d ", INT_MIN);
	// pf = printf(" %d ", INT_MIN);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// pf = printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("ft: %i pf: %i\n", ft, pf);

	// //unsigned tests

	// ft = ft_printf(" %u ", -1);
	// pf = printf(" %u ", -1);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", -9);
	// pf = printf(" %u ", -9);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", -10);
	// pf = printf(" %u ", -10);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", INT_MIN);
	// pf = printf(" %u ", INT_MIN);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", LONG_MAX);
	// pf = printf(" %u ", LONG_MAX);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", UINT_MAX);
	// pf = printf(" %u ", UINT_MAX);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", ULONG_MAX);
	// pf = printf(" %u ", ULONG_MAX);
	// printf("ft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %u ", 9223372036854775807LL);
	// pf = printf(" %u ", 9223372036854775807LL);
	// printf("ft: %i pf: %i\n", ft, pf);

	//hex tests

	// ft = ft_printf(" %X ", LONG_MAX);
	// pf = printf(" %X ", LONG_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %X ", LONG_MIN);
	// pf = printf(" %X ", LONG_MIN);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %X ", ULONG_MAX);
	// pf = printf(" %X ", ULONG_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %X ", 9223372036854775807LL);
	// pf = printf(" %X ", 9223372036854775807LL);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// pf = printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\nft: %i pf: %i\n", ft, pf);


	//minus tests
	//strings

	// ft = ft_printf("|%-1s|", "");
	// pf = printf("|%-1s|", "");
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |%-1s| |%-2s| ", "", "-");
	// pf = printf(" |%-1s| |%-2s| ", "", "-");
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |%-3s| %-3s| %-4s| %-5s| %-3s| ", " - ", "", "4", "", "2 ");
	// pf = printf(" |%-3s| %-3s| %-4s| %-5s| %-3s| ", " - ", "", "4", "", "2 ");
	// printf("\nft: %i pf: %i\n", ft, pf);
	

	//0 tests
	//d and i


	// ft = ft_printf(" %02d ", -1);
	// pf = printf(" %02d ", -1);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %03d ", -11);
	// pf = printf(" %03d ", -11);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %04d ", -14);
	// pf = printf(" %04d ", -14);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %05d ", -15);
	// pf = printf(" %05d ", -15);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %06d ", -16);
	// pf = printf(" %06d ", -16);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %011d ", LONG_MAX);
	// pf = printf(" %011d ", LONG_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %013d ", UINT_MAX);
	// pf = printf(" %013d ", UINT_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %014d ", ULONG_MAX);
	// pf = printf(" %014d ", ULONG_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);


	// ft = ft_printf(" %015d ", 9223372036854775807LL);
	// pf = printf(" %015d ", 9223372036854775807LL);
	// printf("\nft: %i pf: %i\n", ft, pf);


	//hash tests

	// ft = ft_printf(" %#x ", 0);
	// pf = printf(" %#x ", 0);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %#x ", LONG_MIN);
	// pf = printf(" %#x ", LONG_MIN);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %#x %#x %#x %#x %#x %#x %#x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// pf = printf(" %#x %#x %#x %#x %#x %#x %#x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// //space tests
	// //on i & d

	// ft = ft_printf(" |% d| ", 0);
	// pf = printf(" |% d| ", 0);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| ", -1);
	// pf = printf(" |% d| ", -1);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| ", LONG_MAX);
	// pf = printf(" |% d| ", LONG_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);

	

	// ft = ft_printf(" |% d| ", LONG_MIN);
	// pf = printf(" |% d| ", LONG_MIN);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| ", UINT_MAX);
	// pf = printf(" |% d| ", UINT_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| ", ULONG_MAX);
	// pf = printf(" |% d| ", ULONG_MAX);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| ", 9223372036854775807LL);
	// pf = printf(" |% d| ", 9223372036854775807LL);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| ", 17);
	// pf = printf(" |% d| ", 17);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" |% d| |% d| |% d| |% d| |% d| |% d| |% d|", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// pf = printf(" |% d| |% d| |% d| |% d| |% d| |% d| |% d|", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\nft: %i pf: %i\n", ft, pf);

	//+ tests

	// ft = ft_printf(" %+d ", 0);
	// pf = printf(" %+d ", 0);
	// printf("\nft: %i pf: %i\n", ft, pf);

	// ft = ft_printf(" %+d ", LONG_MIN);
	// pf = printf(" %+d ", LONG_MIN);
	// printf("\nft: %i pf: %i\n", ft, pf);

	ft = ft_printf(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	pf = printf(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nft: %i pf: %i\n", ft, pf);



	return (0);
} 



// int	main(void)
// {
// 	// NULL test
// 	char *n;

// 	n = NULL;
// 	ft_printf(n);
	
// 	//no wildcards
// 	ft_printf("\nno conversion\n");

// 	// char 	tests
// 	char	test = 't';
	
// 	ft_printf("char test: %c\n", test);
// 	ft_printf("char test: %c %c\n", test, test);
// 	ft_printf("char test: %c %c %c\n", test, test, 'p');
// 	ft_printf("char test: %c %c %c %c %c\n", test, test, test, test, test);
// 	ft_printf("char test: %-c\n", test);
// 	ft_printf("char test: |%-2c|\n", test);
// 	ft_printf("char test: |%-17c|\n", test);
// 	ft_printf("char test: |%2-c|\n", test); //default prints: char test: |t|
// 	ft_printf("char test: |%5c|\n", test);

// 	// //string test

// 	char	*str = "test";
	
// 	ft_printf("string test: %s\n", str);
// 	ft_printf("string test: %s %s\n", str, str);
// 	ft_printf("string test: %s %s %s\n", str, str, "literal");
// 	ft_printf("string test: %s %s %s %s %s\n", str, str, str, str, str);
// 	ft_printf("string test: %-s\n", str);
// 	ft_printf("string test: |%-2s|\n", str);
// 	ft_printf("string test: |%-17s|\n", str);
// 	ft_printf("string test: |%2-s|\n", str); //default prints: string test: |t|
// 	ft_printf("string test: |%5s|\n", str);

// 	ft_printf("\nstring test: %.s\n", str);
// 	ft_printf("string test: %.6s\n", str);
// 	ft_printf("string test: %.2s\n", str);

// 	ft_printf("\nstring test: |%-.s|\n", str);
// 	ft_printf("string test: |%-.6s|\n", str);
// 	ft_printf("string test: |%-8.2s|\n", str);
// 	ft_printf("string test: |%-8.4s|\n", str);

// 	// ft_printf("test from discord  : |%.-4s|\n", str);
// 	// printf("printf from discord: |%.-4s|\n", str);

// 	// //hex test

// 	int	hex = 123456;
// 	ft_printf("\nhex test lc: |%x|\n", hex);
// 	ft_printf("\nhex test uc: |%X|\n", hex);
// 	printf("\nprintf conversion: |%x|\n", hex);

// 	ft_printf("\nhex test lc: |%x|\n", 56789654);
// 	printf("\nprintf conversion: |%x|\n", 56789654);


// 	ft_printf("\nThis is a lowercase hexadecimalwith #: %#x\n", hex);
// 	printf("printf lowercase hexadecimalwith #: %#x\n", hex);
	
// 	ft_printf("This is a lowercase hexadecimalwith #6: %#6x\n", hex);
// 	printf("printf lowercase hexadecimalwith #6: %#6x\n", hex);

// 	ft_printf("This is an uppercase hexadecimalwith #: %#X\n", hex);
// 	printf("printf uppercase hexadecimalwith #: %#X\n", hex);

// 	ft_printf("This is a lowercase hexadecimalwith 0#6: |%0#6x|\n", hex);
// 	printf("printf lc hexadecimalwith 0#6: |%0#6x|\n", hex);

// 	ft_printf("This is a lowercase hexadecimalwith 0#6: |%#06x|\n", hex);
// 	printf("printf lowercase hexadecimalwith 0#6: |%#06x|\n", hex);

// 	ft_printf("This is a lowercase hexadecimalwith -#6: |%-#6x|\n", hex);
// 	printf("printflowercase hexadecimalwith -#6: |%-#6x|\n", hex);

// 	ft_printf("This is a lowercase hexadecimalwith #-6: |%#-6x|\n", hex);
// 	printf("printf lowercase hexadecimalwith #-6: |%#-6x|\n", hex);

// 	ft_printf("This is a lowercase hexadecimalwith #.6: |%#.6x|\n", hex);
// 	printf("printf lowercase hexadecimalwith #.6: |%#.6x|\n", hex);

// 	ft_printf("This is a lowercase hexadecimalwith #10.6: |%#10.6x|\n", hex);
// 	printf("printf lowercase hexadecimalwith #10.6: |%#10.6x|\n", hex);

// 	//pointer tests
// 	char *sting = "pointer addy";

// 	char **ptr = &sting;

// 	ft_printf("pointer test  : %p\n", ptr);
// 	printf("printf pointer: %p\n", ptr);
// 	ft_printf("pointer test  : |%20p|\n", ptr);
// 	printf("printf pointer: |%20p|\n", ptr);


// 	// //// integer tests

// 	int	num = 5678;
// 	int	neg = -2245;

// 	ft_printf("int test: %i\n", num);
// 	ft_printf("int test: %i\n", neg);
// 	ft_printf("int test +: %+i\n", num);
// 	ft_printf("int test +: %+i\n", neg);//
// 	ft_printf("int test +: % i\n", num);
// 	ft_printf("int test +: % i\n", neg);//

// 	ft_printf("int test -: |%-i|\n", num);
// 	ft_printf("int test -: |%-i|\n", neg);
// 	ft_printf("int test -: |%-8i|\n", num);
// 	ft_printf("int test -: |%-8i|\n", neg);
	
// 	ft_printf("int test .: |%.i|\n", num);
// 	ft_printf("int test .: |%.i|\n", neg);
// 	ft_printf("int test .: |%.7i|\n", num);
// 	ft_printf("int test .: |%.7i|\n", neg);

// 	ft_printf("int test 0: |%0i|\n", num);
// 	ft_printf("int test 0: |%0i|\n", neg);
// 	ft_printf("int test 0: |%07i|\n", num);
// 	ft_printf("int test 0: |%07i|\n", neg);

// 	ft_printf("int test 0.: |%04.7i|\n", num);
// 	ft_printf("int test 0.: |%04.7i|\n", neg);
// 	ft_printf("int test 0.: |%0.7i|\n", num);
// 	ft_printf("int test 0.: |%0.7i|\n", neg);

// 	ft_printf("int test -.: |%-10.7i|\n", num);
// 	printf("printf    : |%-10.7i|\n", num);
// 	ft_printf("int test -.: |%-10.7i|\n", neg);
// 	printf("printf    : |%-10.7i|\n", neg);
// 	ft_printf("int test -.: |%+-.7i|\n", num);
// 	printf("printf -.7: |%+-.7i|\n", num);
// 	ft_printf("int test -.: |%-.7i|\n", neg);
// 	printf("printf -.7: |%-.7i|\n", neg);

// 	ft_printf("int test almost all flags  +05-20.9i: |% +05-20.9i|\n", 5);
// 	ft_printf("int test many flags  +20.9i: |% +20.9i|\n", 5);


// 	//test unsigned

// 	unsigned int un = 466878;

// 	ft_printf("unsigned test : |%u|\n", un);
// 	printf("printf compare: |%u|\n", un);
	
// 	ft_printf("unsigned test  +: |%+u|\n", un);
// 	printf("printf compare  : |%u|\n", un);

// 	ft_printf("unsigned test  spc: |% u|\n", un);
// 	printf("printf compare   : |%u|\n", un);

// 	ft_printf("unsigned test  .10: |%.10u|\n", un);
// 	printf("printf compare .10: |%.10u|\n", un);

// 	ft_printf("unsigned test  010: |%010u|\n", un);
// 	printf("printf compare 010: |%010u|\n", un);

// 	ft_printf("unsigned test  -10: |%-10u|\n", un);
// 	printf("printf compare -10: |%-10u|\n", un);

// 	ft_printf("unsigned test  -10: |%010-12u|\n", un);
// 	// printf("printf compare -10: |%10-12u|\n", un);

// 	ft_printf("unsigned test  -10: |%02.10u|\n", un);
// 	printf("printf compare -10: |%02.10u|\n", un);

// 	ft_printf("unsigned test  -10: |%-10.7u|\n", un);
// 	printf("printf compare -10: |%-10.7u|\n", un);

// 	ft_printf("unsigned test  -10: |%02-10.12u|\n", un);
// 	printf("printf compare -10: |%-10.12u|\n", un);

// 	// test percent sign

// 	ft_printf("percent test: %%\n");
// 	printf("printf : %%\n");

// 	ft_printf("percent test: %\n");
// 	// printf("printf : %\n");

// 	ft_printf("This is a percent sign with no numbers: |%0-.%|\n");
// 	printf("print f: |%0-.%|\n");

// 	ft_printf("This is a percent sign with : |%0-.4%|\n");
// 	printf("printf 					: |%0-.4%|\n");

// 	ft_printf("This is a percent sign with 0-8.4: |%0-8.4%|\n");
// 	printf("printf 0-8.4			: |%0-8.4%|\n");

// 	ft_printf("This is a percent sign with 0-8.: |%00-8%|\n");
// 	printf("printf 0-8.			: |%00-8%|\n");

// 	printf("This is a percent sign with -6.4: |%-6.4%|\n");
// 	printf("printf	 -6.4			: |%-6.4%|\n");

// 	ft_printf("percent sign with 04.4: |%06.4%|\n");
// 	printf("printf 04.4: |%06.4%|\n");

// 	ft_printf("percent sign with 04.4: |%06.4%|\n");
// 	printf("printf 04.4: |%06.4%|\n");

// 	ft_printf("This is a percent sign with 0-: |%0-%|\n");
// 	printf("printf 0-: |%0-%|\n");

// 	ft_printf("percent sign with -0: |%-0%|\n");
// 	printf("printf -0: |%-0%|\n");

// 	ft_printf("percent sign with 0 -: |%0-4%|\n");
// 	printf("printf 0 -: |%0-4%|\n");

// 	ft_printf("percent sign with - 0: |%-04%|\n");
// 	printf("printf - 0: |%-04%|\n");

// 	ft_printf("percent sign with .: |%.3%|\n");
// 	printf("printf .: |%.3%|\n");

// 	ft_printf("percent sign with 0: |%05%|\n");
// 	printf("printf 0: |%05%|\n");

// 	ft_printf("percent sign with space: |% %|\n");
// 	printf("printf space: |% %|\n");

// 	ft_printf("percent sign with +: |%+%|\n");
// 	printf("printf +: |%+%|\n");

// 	ft_printf("percent sign with -: |%-5%|\n");
// 	printf("printf -: |%-5%|\n");
	
// 	return (0);
// }