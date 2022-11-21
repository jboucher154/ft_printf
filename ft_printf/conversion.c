/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:28:31 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 16:51:01 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

static char	*get_legend(const char *str, unsigned int index, unsigned int *end)
{
	while (is_flag(str[index + (*end)]) || ft_isdigit(str[index + (*end)]))
		(*end)++;
	if (is_format_specifier(str[index + (*end)]))
		(*end)++;
	return (ft_substr(str, index, *end));
}

int	convert_print(const char *str, unsigned int index, va_list *lst, int *count)
{
	unsigned int	end;
	char			*s_leg;
	t_legend		*leg;

	end = 0;
	s_leg = get_legend(str, index, &end);
	leg = new_legend();
	fill_legend(s_leg, &leg);
	handle_per_specifier(&leg, lst);
	free(leg);
	free (s_leg);
	return (index + end);
}
