/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:02:39 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/17 17:49:35 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

void	print_out(const char *str, unsigned int i, va_list *lst, int *c);

int	ft_printf(const char *input, ...)
{
	va_list			list;
	int				printed;
	unsigned int	index;

	printed = 0;
	index = 0;
	if (input)
	{
		va_start(list, input);
		print_out(input, index, &list, &printed);
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
		c++;
		i++;
	}	
	if (str[i] == '%' && str[i + 1] == '%')
	{
		ft_putchar_fd('%', 0);
		c++;
		i += 2;
		print_out(str, i, lst, c);
	}
	else if (str[i] == '%')
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
	ft_printf("no conversion\n");
	ft_printf("char test: %c", 'p');
	return (0);
}