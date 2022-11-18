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

int	handle_per_specifier(char s, char *legend, int flags, va_list *list)
{
	// if (s == '%')
	// 	print_percent(list, legend, flags);
	if (s == 'c')
		print_char(list, legend, flags);
	// if (s == 's')
	// 	print_string(list, legend, flags);
	// if (s == 'd')
	// if (s == 'i')
	// if (s == 'u')
	// if (s == 'x' || s == 'X')
	// if (s == 'p')
	
	return (0);
}
