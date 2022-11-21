/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:05:02 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 17:00:17 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

static int	get_zpad(t_legend ****legend)
{
	int	z_pad;

	if ((***legend)->zero == 0)
		return (0);
	z_pad = (***legend)-> padding;
	if ((***legend)->period[0] == 1)
		z_pad = (***legend)->period[1];
	if (z_pad < 1)
		z_pad = 0;
	else
		z_pad -= 1;
	return (z_pad);
}

int	print_pad_n_per(t_legend ****legend, int z_pad)
{
	int sp_pad;
	int	count;

	count = 0;
	if ((***legend)->padding > 0 && (***legend)->zero == 0)
	{
		sp_pad = (***legend)->padding  - (1 + z_pad);
		count += print_flag_char(' ', sp_pad);
	}
	count += print_flag_char('0', z_pad);
	ft_putchar_fd('%', 0);
	count++;
	sp_pad = (***legend)->dash[1] - (count);
	if ((***legend)->dash[0] == 1 && (***legend)->dash[1] > 0)
		count += print_flag_char(' ', sp_pad);
	return (count);
}

int	print_percent(t_legend ***legend)
{
	int	count;
	int z_pad;

	check_ignores(&legend);
	z_pad = get_zpad(&legend);
	count = print_pad_n_per(&legend, z_pad);
	return (count);
}