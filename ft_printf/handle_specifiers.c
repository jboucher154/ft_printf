/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:14:26 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 16:06:24 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	handle_per_specifier(t_legend **legend, va_list *list)
{
	if ((*legend)->specifier == '%')
		print_percent(&legend);
	if ((*legend)->specifier == 'c')
		print_char(&legend, list);
	if ((*legend)->specifier == 's')
		print_string(&legend, list);
	if ((*legend)->specifier == 'd' || (*legend)->specifier == 'i')
		print_int_dec(&legend, list);
	if ((*legend)->specifier == 'u')
		print_unsigned(&legend, list);
	if ((*legend)->specifier == 'x' || (*legend)->specifier == 'X')
		print_hex(&legend, list);
	if ((*legend)->specifier == 'p')
	{
		(*legend)->hash = 1;
		print_hex(&legend, list);
	}
	return (0);
}

int	is_format_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'x' \
	|| c == 'X' || c == 'p' || c == '%')
		return (1);
	else
		return (0);
}
