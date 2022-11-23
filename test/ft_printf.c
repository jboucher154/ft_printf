/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:02:39 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/22 16:05:40 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h> //remove

static void	print_out(const char *str, unsigned int i, va_list *lst, int *c)
{
	while (str[i] != '%' && str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		(*c)++;
		i++;
	}	
	if (str[i] == '%')
	{
		if (str[i + 1] == '\0')
			return ;
		i++;
		i = convert_print(str, i, lst, &c);
		print_out(str, i, lst, c);
	}
	else
		return ;
}

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
		ft_putstr_fd("(null)", 1);
		printed += 5;
	}
	return (printed);
}

// int	main(void)
// {
// 	int	ft;
// 	int	pf;

// 	ft = ft_printf("%c", '0');
// 	pf = printf("%c", '0');

// 	printf("\nft: %i pf: %i\n", ft, pf);

// 	ft = ft_printf("| %c |", '0');
// 	pf = printf("| %c |", '0');

// 	printf("\nft: %i pf: %i\n", ft, pf);
// 	return (0);
// } 