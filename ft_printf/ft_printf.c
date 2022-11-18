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
	
	ft_printf("char test: %c\n", test);
	ft_printf("char test: %c %c\n", test, test);
	ft_printf("char test: %c %c %c\n", test, test, 'p');
	ft_printf("char test: %c %c %c %c %c\n", test, test, test, test, test);
	ft_printf("char test: %-c\n", test);
	ft_printf("char test: |%-2c|\n", test);
	ft_printf("char test: |%-17c|\n", test);
	ft_printf("char test: |%2-c|\n", test); //default prints: char test: |t|


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