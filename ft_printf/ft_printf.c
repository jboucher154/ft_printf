/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:02:39 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 17:44:33 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"
#include <stdio.h> //remove

void	print_out(const char *str, unsigned int i, va_list *lst, int *c);

int	ft_printf(const char *input, ...)
{
	va_list			list;
	int				printed;

	printed = 0;
	if (input)
	{
		va_start(list, input);
		print_out(input, 0, &list, &printed);
		va_end(list);
	}
	else
	{
		ft_putstr_fd("(null)", 0);
		printed += 5;
	}
	return (printed);
}

void	print_out(const char *str, unsigned int i, va_list *lst, int *c)
{
	while (str[i] != '%' && str[i] != '\0')
	{
		ft_putchar_fd(str[i], 0);
		(*c)++;
		i++;
	}	
	if (str[i] == '%')
	{
		if (str[i + 1] == '\0')
			return ;
		i++;
		i = convert_print(str, i, lst, c);
		print_out(str, i, lst, c);
	}
	else
		return ;
}

int	main(void)
{
	//NULL test
	char *n;

	n = NULL;
	ft_printf(n);
	
	//no wildcards
	ft_printf("\nno conversion\n");

	//char tests
	char	test = 't';
	
	// ft_printf("char test: %c\n", test);
	// ft_printf("char test: %c %c\n", test, test);
	// ft_printf("char test: %c %c %c\n", test, test, 'p');
	// ft_printf("char test: %c %c %c %c %c\n", test, test, test, test, test);
	// ft_printf("char test: %-c\n", test);
	// ft_printf("char test: |%-2c|\n", test);
	// ft_printf("char test: |%-17c|\n", test);
	// ft_printf("char test: |%2-c|\n", test); //default prints: char test: |t|
	// ft_printf("char test: |%5c|\n", test);

	//string test

	// char	*str = "test";
	
	// ft_printf("string test: %s\n", str);
	// ft_printf("string test: %s %s\n", str, str);
	// ft_printf("string test: %s %s %s\n", str, str, "literal");
	// ft_printf("string test: %s %s %s %s %s\n", str, str, str, str, str);
	// ft_printf("string test: %-s\n", str);
	// ft_printf("string test: |%-2s|\n", str);
	// ft_printf("string test: |%-17s|\n", str);
	// ft_printf("string test: |%2-s|\n", str); //default prints: string test: |t|
	// ft_printf("string test: |%5s|\n", str);

	// ft_printf("\nstring test: %.s\n");
	// ft_printf("string test: %.6s\n");
	// ft_printf("string test: %.2s\n");

	// ft_printf("\nstring test: |%-.s|\n");
	// ft_printf("string test: |%-.6s|\n");
	// ft_printf("string test: |%-8.2s|\n");
	// ft_printf("string test: |%-8.4s|\n");

	//hex test

	int	hex = 123456;
	// ft_printf("\nhex test lc: |%x|\n", hex);
	// ft_printf("\nhex test uc: |%X|\n", hex);
	// printf("\nprintf conversion: |%x|\n", hex);

	// ft_printf("\nhex test lc: |%x|\n", 56789654);
	// printf("\nprintf conversion: |%x|\n", 56789654);


	// ft_printf("\nThis is a lowercase hexadecimalwith #: %#x\n", hex);
	// printf("printf lowercase hexadecimalwith #: %#x\n", hex);
	//padding not coming out right
	// ft_printf("This is a lowercase hexadecimalwith #6: %#6x\n", hex);
	// printf("printf lowercase hexadecimalwith #6: %#6x\n", hex);

	// ft_printf("This is an uppercase hexadecimalwith #: %#X\n", hex);
	// printf("printf uppercase hexadecimalwith #: %#X\n", hex);

	// ft_printf("This is a lowercase hexadecimalwith 0#6: |%0#6x|\n", hex);
	// printf("printf lc hexadecimalwith 0#6: |%0#6x|\n", hex);

	// ft_printf("This is a lowercase hexadecimalwith 0#6: |%#06x|\n", hex);
	// printf("printf lowercase hexadecimalwith 0#6: |%#06x|\n", hex);

	// ft_printf("This is a lowercase hexadecimalwith -#6: |%-#6x|\n", hex); //broken, inf loop
	// printf("printflowercase hexadecimalwith -#6: |%-#6x|\n", hex);

	// ft_printf("This is a lowercase hexadecimalwith #-6: |%#-6x|\n", hex); //not right spacing
	// printf("printf lowercase hexadecimalwith #-6: |%#-6x|\n", hex);

	// ft_printf("This is a lowercase hexadecimalwith #.6: |%#.6x|\n", hex);
	// printf("printf lowercase hexadecimalwith #.6: |%#.6x|\n", hex);

	// ft_printf("This is a lowercase hexadecimalwith #10.6: |%#10.6x|\n", hex);
	// ft_printf("printf lowercase hexadecimalwith #10.6: |%#10.6x|\n", hex);

	// ft_printf("ft - lc hexadecimalwith #10.6: |%#10.6x|\n", hex); //spacing wrong
	// printf("Printf - lc hexadecimalwith #10.6: |%#10.6x|\n", hex);



	return (0);
}


//move the % handing to be done elsewhere
	// if ((str[i] == '%' && str[i + 1] == '%') || \
	// (str[i] == '%' && str[i + 2] == '%'))
	// {
	// 	ft_putchar_fd('%', 0);
	// 	(*c)++;
	// 	i += 2;
	// 	print_out(str, i, lst, c);
	// }