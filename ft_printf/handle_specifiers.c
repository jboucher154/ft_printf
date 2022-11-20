/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:14:26 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 17:13:41 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	handle_per_specifier(t_legend **legend, va_list *list)
{
	// if (s == '%')
	// 	print_percent(list, legend, flags);
	if ((*legend)->specifier == 'c')
		print_char(&legend, list);
	if ((*legend)->specifier == 's')
		print_string(&legend, list);
	// if (s == 'd')
	// if (s == 'i')
	// if (s == 'u')
	if ((*legend)->specifier == 'x' || (*legend)->specifier == 'X')
		print_hex(&legend, list);
	// if (s == 'p')
	
	return (0);
}
