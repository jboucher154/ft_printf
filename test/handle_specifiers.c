/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:14:26 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/22 14:16:19 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_per_specifier(char speci, va_list *list)
{
	// if (speci == '%')
	// 	return (print_percent());
	if (speci == 'c')
		return (print_char1(list));
	// if ((*legend)->specifier == 's')
	// 	return (print_string(&legend, list));
	// if ((*legend)->specifier == 'd' || (*legend)->specifier == 'i')
	// 	return (print_int_dec(&legend, list));
	// if ((*legend)->specifier == 'u')
	// 	return (print_unsigned(&legend, list));
	// if ((*legend)->specifier == 'x' || (*legend)->specifier == 'X')
	// 	return (print_hex(&legend, list));
	// if ((*legend)->specifier == 'p')
	// {
	// 	(*legend)->hash = 1;
	// 	return (print_hex(&legend, list));
	// }
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
