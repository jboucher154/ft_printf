/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:28:43 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 16:58:27 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	printf("--EXPLORATION OF PRINTF, with printf--\n");

	char	c = 'g';
	printf("This is a char: %c\n", c);
	printf("This is a char with pad4: |%4c|\n", c);
	char	*str = "hello";
	printf("This is a string: %s\n", str);
	char	*ptr = &c;
	printf("This is a pointer: %p\n", ptr);
	int		deci = 012;
	printf("This is a decimal: %d\n", deci); //signed decimal i.e. int, assumes base 10
	int		num = 012;
	printf("This is an integer: %i\n", num);//signed decimal, detects base...
	unsigned int udbl = 95; //changed from unsgned dbl
	printf("This is a unsigned int: %u\n", udbl); //unsigned decimal
	int	hex = 15;
	printf("This is a lowercase hexadecimal: %x\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal: %X\n", hex);
	printf("This is a percent sign: %%\n");

//%o is printed as unsigned octal

	printf("--Above values with FT_PUTCHAR_FD FT_PUTSTR_FD or FT_PUTNBR_FD--\n");
	ft_putchar_fd(c, 0);
	ft_putchar_fd('\n', 0);//
	ft_putstr_fd(str, 0);
	ft_putchar_fd('\n', 0);//
	ft_putstr_fd(ptr, 0); //doesn't give address, prints the char
	// ft_putchar_fd(ptr, 0); //dnc
	// ft_putnbr_fd(ptr, 0);//dnc
	ft_putchar_fd('\n', 0);//
	ft_putnbr_fd(deci, 0);
	ft_putchar_fd('\n', 0);//
	ft_putnbr_fd(num, 0);
	ft_putchar_fd('\n', 0);//
	ft_putnbr_fd(udbl, 0);
	ft_putchar_fd('\n', 0);//
	ft_putnbr_fd(hex, 0);
	ft_putchar_fd('\n', 0);//
	ft_putchar_fd(hex, 0);
	ft_putchar_fd('\n', 0);//
	// ft_putstr_fd(hex, 0); //dnc
	ft_putchar_fd('\n', 0);//

	printf("--EXPLORATION OF PRINTF FLAGS, with printf--\n");

	//# 
	//applicable forms: x, X (prepend 0x/0X to the result)
	//no effect on: c, d, s, u
	//other affect but not required for this project
	printf("-- '#' flag--\n\n");
	int	hex1 = 100;
	printf("This is a lowercase hexadecimalwith #: %#x\n", hex1);
	printf("This is a lowercase hexadecimalwith #6: %#6x\n", hex1);
	printf("This is an uppercase hexadecimalwith #: %#X\n", hex1);
	// printf("This is an int with #: %#i\n", hex1); //does not compile
	printf("This is a lowercase hexadecimalwith 0#6: |%0#6x|\n", hex1);
	printf("This is a lowercase hexadecimalwith 0#6: |%#06x|\n", hex1);
	printf("This is a lowercase hexadecimalwith -#6: |%-#6x|\n", hex1);
	printf("This is a lowercase hexadecimalwith #-6: |%#-6x|\n", hex1);
	printf("This is a lowercase hexadecimalwith #.6: |%#.6x|\n", hex1);
		printf("This is a lowercase hexadecimalwith #10.6: |%#10.6x|\n", hex1);

	//- 
	//applicable forms: all
	printf("\n-- '-' flag--\n\n");
	printf("This is a char with -: %-c\n", c);
	printf("This is a string with -: %-s\n", str);
	printf("This is a pointer with -: %-p\n", ptr);
	printf("This is a decimal with -: %-d\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is an integer with -: %-i\n", num);//signed decimal, detects base...
	printf("This is a unsigned int with -: %-u\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with -: %-x\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with -: %-X\n", hex);
	printf("This is a percent sign with -: %-5%\n");

	printf("char only:  |%c|\n", c);
	printf("-3 with a char:  |%-3c|\n", c);
	printf("- no num with a char:  |%-c|\n", c);
	// printf("3- with a char:  |%3-c|\n", c);//DNC
	printf("3 with a char:  |%3c|\n", c);
	// printf("-3 with a char:  |%3-c|\n", c); num first not valid
	

	//+ 
	//applicable forms: signed formats
	//no effect on: unsigned, hex, char/str
	printf("\n-- '+' flag--\n\n");
	// printf("This is a char with +: %+c\n", c); //does not compile
	// printf("This is a string with +: %+s\n", str); //does not compile
	// printf("This is a pointer with +: %+p\n", ptr); //does not compile
	printf("This is a decimal with +: |%+d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is a decimal with +6: |%+6d|\n", deci);
	printf("This is an integer with +: |%+i|\n", num);//signed decimal, detects base...
	printf("This is a negative integer with +: |%+i|\n", -85);
	printf("This is an int sign with NO flag: |%i|\n", num);
	printf("This is an int sign with NO flag: |%i|\n", -52);
	// printf("This is a unsigned int with +: %+u\n", udbl); //unsigned decimal //does not compile
	// printf("This is a lowercase hexadecimal with +: %+x\n", hex); //print as unsgined hexadecimal xX//does not compile
	// printf("This is an uppercase hexadecimal with +: %+X\n", hex); //does not compile
	printf("This is a percent sign with +: |%+%|\n");


	printf("\nThis is a lowercase int with 0#6: |%0+6i|\n", hex1);
	printf("This is a lowercase int with -#6: |%-+6i|\n", hex1);
	printf("This is a lowercase int with #-6: |%+-6i|\n", hex1);
	printf("This is a lowercase int with #.6: |%+.6i|\n", hex1);

		// ' '
	//applicable forms: space before positive numbers
	printf("\n-- ' ' flag --\n\n");
	// printf("This is a char with space: % c\n", c);//dnc
	// printf("This is a string with space: % s\n", str);//dnc
	// printf("This is a pointer with space: % p\n", ptr);//dnc
	printf("This is a decimal with space: |% d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is a decimal with space10: |% 10d|\n", deci);
	printf("This is an integer with space: |% i|\n", num);//signed decimal, detects base...
	printf("This is a negative integer with space: |% i|\n", -85);
	printf("This is a negative integer with space10: |% 10i|\n", -85);
	// printf("This is a unsigned int with space: % u\n", udbl); //unsigned decimal//dnc
	// printf("This is a lowercase hexadecimal with space: % x\n", hex); //print as unsgined hexadecimal xX//dnc
	// printf("This is an uppercase hexadecimal with space: % X\n", hex);//dnc
	printf("This is a percent sign with space: |% %|\n");

		printf("\nThis is a lowercase int with 0#6: |%0 6i|\n", hex1);
	printf("This is a lowercase int with -#6: |%- 6i|\n", hex1);
	printf("This is a lowercase int with #-6: |% -6i|\n", hex1);
	printf("This is a lowercase int with #.6: |% .6i|\n", hex1);

	// printf("This is a lowercase int with #.6: |%6 .i|\n", hex1);



	//0
	//applicable forms: all, not compile with char/ char*/ ptr
	// '-' padding overrides a 0 if both present
	printf("\n-- '0' flag--\n\n");
	// printf("This is a char with 0: %0c\n", c); //does not compile
	// printf("This is a string with 0: %0s\n", str);//does not compile
	// printf("This is a pointer with 0: %0p\n", ptr);//does not compile
	printf("This is a decimal with 0: |%02d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is an integer with 0: |%02i|\n", num);//signed decimal, detects base...
	printf("This is an integer with 0: |%02i|\n", -42);//
	printf("This is a unsigned int with 0: |%02u|\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with 0: |%02x|\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with 0: |%02X|\n", hex);
	printf("This is a percent sign with 0: |%02%|\n");
	printf("WITH 5 PADDING");
	printf("This is a decimal with 0: |%05d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is an integer with 0: |%05i|\n", num);//signed decimal, detects base...
	printf("This is an integer with 0: |%05i|\n", -42);//
	printf("This is a unsigned int with 0: |%05u|\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with 0: |%05x|\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with 0: |%05X|\n", hex);
	printf("This is a percent sign with 0: |%05%|\n");

	//.
	//applicable forms: all, dnc with char and ptr
	printf("\n-- '.' flag with 3 --\n\n");
	// printf("This is a char with .: %.3c\n", c); //does not compile
	printf("This is a string with .3: |%.3s|\n", str); //prints frist 3 chars
	printf("This is a string with .3: |%.8s|\n", str); //prints frist 3 chars
	printf("This is a string with 3.: |%3.s|\n", str); //prints frist 3 chars
	printf("This is a string with 3.3: |%3.3s|\n", str); //prints frist 3 chars
	printf("This is a string with . and NO 3: |%.s|\n", str); //prints frist 3 chars
	// printf("This is a pointer with .: %.3p\n", ptr); //does not compile
	printf("This is a decimal with .3: |%.3d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is a decimal with 3.: |%3.d|\n", deci); 
	printf("This is an integer with .: |%3.i|\n", num);//signed decimal, detects base...
	printf("This is an integer with .: |%.3i|\n", -42);//
	printf("This is an integer with . and NO 3: |%.i|\n", -42);//

	printf("This is an integer with .3: |%.5i|\n", -42);//
	printf("This is an integer with 3.: |%5.i|\n", -42);//
	printf("This is an integer with 3.3: |%5.5i|\n", -42);

	printf("This is a unsigned int with .: |%.3u|\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with .: |%.3x|\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with .: |%.3X|\n", hex);
	printf("This is a percent sign with .: |%.3%|\n");


	printf("\n-- '0' and '-' tgether flag with 4 --\n\n"); //DNC for ALL!!!!!! except the % sign....

	// printf("This is a decimal with 0 -: |%0-4d|\n", deci); //signed decimal i.e. int, assumes base 10
	// printf("This is an integer with 0 -: |%0-4i|\n", num);//signed decimal, detects base...
	// printf("This is an integer with 0 -: |%0-4i|\n", -42);//
	// printf("This is a unsigned int with 0 -: |%0-4u|\n", udbl); //unsigned decimal
	// printf("This is a lowercase hexadecimal with 0 -: |%0-4x|\n", hex); //print as unsgined hexadecimal xX
	// printf("This is an uppercase hexadecimal with 0 -: |%0-4X|\n", hex);
	// printf("This is an uppercase hexadecimal with - 0: |%-04X|\n", hex);
	printf("This is a percent sign with 0 -: |%0-4%|\n");
	printf("This is a percent sign with - 0: |%-04%|\n");
	printf("WITH no PADDING specified");
	// printf("This is a decimal with 0: |%0-d|\n", deci); //signed decimal i.e. int, assumes base 10
	// printf("This is an integer with 0: |%0-i|\n", num);//signed decimal, detects base...
	// printf("This is an integer with 0: |%0-i|\n", -42);//
	// printf("This is a unsigned int with 0: |%0-u|\n", udbl); //unsigned decimal
	// printf("This is a lowercase hexadecimal with 0: |%0-x|\n", hex); //print as unsgined hexadecimal xX
	// printf("This is an uppercase hexadecimal with 0: |%0-X|\n", hex);
	printf("This is a percent sign with 0-: |%0-%|\n");
	printf("This is a percent sign with -0: |%-0%|\n");


	// printf("This is an int test with flag digt order with : |%4+i|\n", 89);

	printf("\n-- '0' and '.' tgether flag with 4 --\n\n"); //DNC for ALL!!!!!! except the % sign....

	// printf("This is a string with -: %0.s\n", str); //DNC
	printf("This is a decimal with 0 .: |%0.4d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is a decimal with 05.4: |%05.4d|\n", deci);
	printf("This is an integer with 0 .: |%0.4i|\n", num);//signed decimal, detects base...
	printf("This is an integer with 0 .: |%0.4i|\n", -42);//
	printf("This is a unsigned int with 0 .: |%0.4u|\n", udbl); //unsigned decimal
	printf("This is a unsigned int with 09.6: |%09.6u|\n", udbl); //unsigned decimal
	printf("This is a unsigned int with 06.9: |%06.9u|\n", udbl);
	printf("This is a unsigned int with 06.6: |%06.6u|\n", udbl);
	printf("This is a lowercase hexadecimal with 0 .: |%0.4x|\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with 0 .: |%0.4X|\n", hex);
	printf("This is an uppercase hexadecimal with . 0: |%.04X|\n", hex);
	printf("This is a percent sign with 0 .: |%0.4%|\n");
	printf("WITH no PADDING specified");
	printf("This is a decimal with 0: |%0.d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is an integer with 0: |%0.i|\n", num);//signed decimal, detects base...
	printf("This is an integer with 0: |%0.i|\n", -42);//
	printf("This is a unsigned int with 0: |%0.u|\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with 0: |%0.x|\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with 0: |%0.X|\n", hex);
	printf("This is a percent sign with 0: |%0.%|\n");


	printf("\n-- '-' and '.' tgether flag with 4 --\n\n"); //DNC for ALL!!!!!! except the % sign....

	printf("This is a string with -.6: |%-.6s|\n", str); 
	printf("This is a string with -9.4:|%-9.4s|\n", str); 
	printf("This is a string with -4.9:|%-4.9s|\n", str); 
	printf("This is a decimal with - .: |%-.4d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is a decimal with -9.4: |%-9.4d|\n", deci);
	printf("This is a decimal with -9.1: |%-9.1d|\n", 452);
	printf("This is an integer with - .: |%-.4i|\n", num);//signed decimal, detects base...
	printf("This is an integer with - .: |%-.4i|\n", -42);//
	printf("This is a unsigned int with - .: |%-.4u|\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with - .: |%-.4x|\n", hex); //print as unsgined hexadecimal xX
	// printf("This is an uppercase hexadecimal with . -: |%.-4X|\n", hex); invalid specifer????
	printf("This is a string with -.: %-.s\n", str); //DNC
	printf("This is an uppercase hexadecimal with - .: |%-.4X|\n", hex);
	printf("This is a percent sign with - .: |%-.4%|\n");
	printf("WITH no PADDING specified");
	printf("This is a decimal with . -: |%-.d|\n", deci); //signed decimal i.e. int, assumes base 10
	printf("This is an integer with .-: |%-.i|\n", num);//signed decimal, detects base...
	printf("This is an integer with . -: |%-.i|\n", -42);//
	printf("This is a unsigned int with . -: |%-.u|\n", udbl); //unsigned decimal
	printf("This is a lowercase hexadecimal with . -: |%-.x|\n", hex); //print as unsgined hexadecimal xX
	printf("This is an uppercase hexadecimal with  .-: |%-.X|\n", hex);
	printf("This is a percent sign with .-: |%-.%|\n");

	printf("\n-- '-' '.' ' 0' together flag with 4 --\n\n"); //DNC for ALL!!!!!! except the % sign....

	// printf("This is a string with: %0-.4s\n", str); 
	// printf("This is a decimal with: |%0-.4d|\n", deci); //signed decimal i.e. int, assumes base 10
	// printf("This is an integer with.: |%0-.4i|\n", num);//signed decimal, detects base...
	// printf("This is an integer with : |%0-.4i|\n", -42);//
	// printf("This is a unsigned int with : |%0-.4u|\n", udbl); //unsigned decimal
	// printf("This is a lowercase hexadecimal with : |%0-.4x|\n", hex); //print as unsgined hexadecimal xX
	// printf("This is an uppercase hexadecimal with . -: |%0.-4X|\n", hex); //invalid specifer????
	// printf("This is a string with: %0-.s\n", str); 
	// printf("This is an uppercase hexadecimal with : |%0-.4X|\n", hex);
	printf("This is a percent sign with : |%0-.4%|\n");
	printf("This is a percent sign with 0-8.4: |%0-8.4%|\n");
	printf("This is a percent sign with 0-8.: |%0-8.%|\n");
	// printf("WITH no PADDING specified");
	// printf("This is a decimal with : |%-.0d|\n", deci); //--> evals to -. flag with  secified padding
	// printf("This is an integer with : |%0-.i|\n", num);//signed decimal, detects base...
	// printf("This is an integer with : |%0-.i|\n", -42);//
	// printf("This is a unsigned int with : |%0-.u|\n", udbl); //unsigned decimal
	// printf("This is a lowercase hexadecimal with: |%0-.x|\n", hex); //print as unsgined hexadecimal xX
	// printf("This is an uppercase hexadecimal with : |%0-.X|\n", hex);
	printf("This is a percent sign with no numbers: |%0-.%|\n");




	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
	{
		ft_putchar_fd(num + 48, fd);
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

///////////// inital tests to figure out the pointer...
// int	ft_printf(const char *input, ...)
// {
// 	va_list	list;
// 	int		printed;

// 	printed = 0;
// 	va_start(list, input);


// 	char	c = va_arg(list, int);
// 	ft_putchar_fd(c, 0);
// 	int		num = va_arg(list, int);
// 	ft_putnbr_fd(num, 0);
// 	// int	*ptr = &c;
// 	uintptr_t	ptrptr = (uintptr_t) &c;
// 	int	mod = ptrptr % 16;
// 	ft_putnbr_fd(mod, 0);


// 	va_end(list);
// 	return (printed);
// }

// int	main(void)
// {
// 	ft_printf("b", 'a', 1);
// 	return (0);
// }