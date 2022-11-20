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

int	apply_hex_prefix(char s)
{
	if (s == 'X')
	{
		ft_putchar_fd('0', 0);
		ft_putchar_fd('X', 0);
	}
	else
	{
		ft_putchar_fd('0', 0);
		ft_putchar_fd('x', 0);
	}
	return (2);
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

void	check_ignores(t_legend ****legend)
{
	if ((***legend)->dash[0] == 1 || (***legend)->period[0] == 1)
	{
		(***legend)->zero = 0;
	}
	if ((***legend)->plus == 1)
	{
		(***legend)->space = 0;
	}
}