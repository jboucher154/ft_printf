/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:28:31 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/17 17:51:59 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

static int	is_format_specifier(char c);
static int	is_flag(char c);
static int	handle_specifier(int specifier, va_list *list, int *count);

int	convert_print(const char *str, unsigned int index, va_list *lst, int *count)
{
	unsigned int	end_convert;
	char			*specifiers;
	char			*flags;
	int				i;

	end_convert = 0;
	i = 0;
	while (is_flag(str[index]))
	{
		end_convert++;
		i++;
		index++;
	}
	flags = ft_substr(str, index, end_convert + 1);
	while (is_format_specifier(str[index++]))
		end_convert++;
	specifiers = ft_substr(str, index + i, end_convert);
	// handle_flags(flags, count);
	i = 0;
	while (specifiers[i] != '\0')
		handle_specifier(is_format_specifier(specifiers[i++]), lst, count);
	free(flags);
	free(specifiers);
	return (index + end_convert);
}

//handle numbers accociated with flags too
static int	is_flag(char c)
{
	if (c == ' ' || c == '#' || c == '-' || c == '+' || c == '.' || c == '0')
		return (1);
	return (0);
}

static int	is_format_specifier(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (2);
	else if (c == 'd')
		return (3);
	else if (c == 'i')
		return (4);
	else if (c == 'u')
		return (5);
	else if (c == 'x')
		return (6);
	else if (c == 'X')
		return (7);
	else if (c == 'p')
		return (8);
	else
		return (0);
}

static int	handle_specifier(int specifier, va_list *list, int *count)
{
	if (specifier == 1)
	{
		ft_putchar_fd(va_arg(*list, int), 0);
		(*count) += 1;
	}
	else if (specifier == 2)
		(*count) += ft_putstr_fd(va_arg(*list, char *), 0);
	else if (specifier == 3 || specifier == 4)
		(*count) += print_int_dec(specifier, list);
	else if (specifier == 5)
		print_unsigned(list, count);
	else if (specifier == 6 || specifier == 7)
		(*count) += print_hex(specifier, list);
	else if (specifier == 8)
		(*count) += print_pointer(list);
	return (0);
}
