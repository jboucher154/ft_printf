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

int	print_char(va_list *list, char *legend, int flags);
int	print_percent(va_list *list, char *legend, int flags);
int	print_string(va_list *list, char *legend, int flags);

int	print_char(va_list *list, char *legend, int flags) //flags affecting: '-' -> 1
{
	int	count;
	int	num;

	count  = 0;
	if (flags == 0)
	{
		ft_putchar_fd(va_arg(*list, int), 0);
		count++;
	}
	else if (flags == 1) // not checking for correct placement of number, might be okay
	{
		ft_putchar_fd(va_arg(*list, int), 0);
		count++;
		num = get_num_from_leg(legend);
		if (num > 1)
			count += print_flag_char(' ', num - 1);
	}
	return (count);
}

int	print_string(va_list *list, char *legend, int flags) //flags affecting: '-', '.', '-.' '.-' -> 1, 5, 6 (6 has 2 outcomes)
{
	return (0);
}

int	print_percent(va_list *list, char *legend, int flags) //flags affecting: '0', '-0', '0-' -> 2, 3 (3 has one outcome)
{
	return (0);
}
