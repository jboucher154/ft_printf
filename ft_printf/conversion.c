/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:28:31 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 17:15:41 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"
#include <stdio.h> //remove

int		is_format_specifier(char c);
int		is_flag(char c);
char	*get_legend(const char *str, unsigned int index, unsigned int *end);
int		convert_print(const char *str, unsigned int index, va_list *lst, int *count);

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

////
	// printf("legend values\n");
	// printf("legend  dash => %i\n", leg->dash[0]);
	// printf("legend  dash pad=> %i\n\n", leg->dash[1]);
////
	// print_from_legend(legend, lst);
	free(leg);
	free (s_leg);
	return (index + end);
}

int	is_flag(char c)
{
	if (c == '-')
		return (1);
	else if (c == '0')
		return (2);
	else if (c == '.')
		return (4);
	else if (c == '#')
		return (10);
	else if (c == ' ')
		return (20);
	else if (c == '+')
		return (40);
	else
		return (0);
}

int	is_format_specifier(char c)
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
	else if (c == '%')
		return (9);
	else
		return (0);
}

char	*get_legend(const char *str, unsigned int index, unsigned int *end)
{
	while (is_flag(str[index + (*end)]) || ft_isdigit(str[index + (*end)]))
		(*end)++;
	if (is_format_specifier(str[index + (*end)]))
		(*end)++;
	return (ft_substr(str, index, *end));
}
