/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:52:53 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/22 14:18:52 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	get_speci(const char *str, unsigned int index)
{
	if (is_format_specifier(str[index]))
		return (str[index]);
	return (0);
}

int	convert_print(const char *str, unsigned int i, va_list *lst, int **count)
{
	char	s_leg;

	s_leg = get_speci(str, i);
	if (s_leg)
		**count += handle_per_specifier(s_leg, lst);
	return (i + 1);
}
