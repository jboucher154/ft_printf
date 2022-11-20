/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:17:45 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 17:44:40 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

// int	print_char(t_legend *legend, va_list *list);
// int	print_percent(t_legend *legend, va_list *list);
// int	print_string(t_legend *legend, va_list *list);

int	print_char(t_legend ***legend, va_list *list) //flags affecting: '-', field width not recognized...
{
	int	padding;
	int	count;

	count= 0;
	padding = (**legend)->padding;
	if ((**legend)->dash[0] == 1)
	{
		padding = (**legend)->dash[1];
		ft_putchar_fd(va_arg(*list, int), 0);
		count += print_flag_char(' ', padding - 1) + 1;
	}
	else
	{
		if (padding > 0)
			count = print_flag_char(' ', padding - 1) + 1;
		ft_putchar_fd(va_arg(*list, int), 0);
		count++;
	}
	return (count);
}

//

int	print_string(t_legend ***legend, va_list *list) //flags affecting: '-', '.', '-.' '.-'
{
	char	*str;
	int		len;
	int		count;
	int		i;

	count = 0;
	i = 0;
	str = va_arg(*list, char *);
	len = ft_strlen(str);
	if (len > (**legend)->period[1] && (**legend)->period[0] == 1)
		len = (**legend)->period[1];
	if ((**legend)->dash[0])
	{
		(**legend)->dash[1] -= len;
		while (i < len)
		{
			ft_putchar_fd(str[i], 0);
			count++;
			i++;
		}
		if ((**legend)->dash[1] > 0)
			count += print_flag_char(' ', (**legend)->dash[1]);
	}
	else
	{
		count += print_flag_char(' ', (**legend)->padding);
		while (i < len)
		{
			ft_putchar_fd(str[i], 0);
			count++;
			i++;
		}
	}
	return (count);
}

// int	print_percent(t_legend **legend, va_list *list) //flags affecting: '0', '-0', '0-'
// {
// 	return (0);
// }
