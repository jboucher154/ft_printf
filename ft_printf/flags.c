/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:00:46 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 17:35:09 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

char	*apply_hex_prefix(char s)
{
	if (s == 'X')
		return ("0X");
	else
		return ("0x");
}

int	print_flag_char(char c, int repeat)
{
	int	i;

	i = 0;
	while (i < repeat)
	{
		ft_putchar_fd(c, 0);
		i++;
	}
	return (repeat);
}

int	get_num_from_leg(char *legend) //only works for 1 number
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (legend[i] != '\0')
	{
		if (legend[i] == '0' && i == 0)
			i++;
		if (ft_isdigit(legend[i]))
		{
			while (ft_isdigit(legend[i]))
			{
				if (total == 0)
					total = legend[i] - 48;
				else
					total = (total * 10) + legend[i] - 48;
				i++;
			}
			break ;
		}
		i++;
	}
	return (total);
}
