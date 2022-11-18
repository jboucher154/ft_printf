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

int		is_format_specifier(char c);
int		is_flag(char c);
char	*get_legend(const char *str, unsigned int index, unsigned int *end);
int		print_from_legend(char *legend, va_list *list);
int		convert_print(const char *str, unsigned int index, va_list *lst, int *count);

int	convert_print(const char *str, unsigned int index, va_list *lst, int *count)
{
	unsigned int	end;
	char			*legend;

	end = 0;
	legend = get_legend(str, index, &end);
	print_from_legend(legend, lst);
	free(legend);
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

// determine flags vs padding vs specifier
//ASSUME SINGLE CHAR SPECIFIER

int	print_from_legend(char *legend, va_list *list)
{
	char	specifier;
	int		count;
	int		flags;
	int		i;

	i = 0;
	flags = 0;
	specifier = legend[ft_strlen(legend) - 1];
	if (!is_format_specifier(specifier))
		return (0); //invalid input...
	while (is_flag(legend[i]))
	{
		if (legend[i] == '0' && i == 0)
			flags += is_flag(legend[i++]);
		else if (legend[i] == '0' && ft_isdigit(legend[i - 1]))
			i++;
		else if (ft_isdigit(legend[i]))
			i++;
		else
			flags += is_flag(legend[i++]);
	}
	count = handle_per_specifier(specifier, legend, flags, list);
	return (count);
}
