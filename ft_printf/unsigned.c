/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:27:08 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 16:56:23 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

static int	get_zpad(t_legend ****legend, int len)
{
	int	z_pad;

	if ((***legend)->period[0] == 0 && (***legend)->zero == 0)
		return (0);
	z_pad = (***legend)-> padding;
	if ((***legend)->period[0] == 1)
		z_pad = (***legend)->period[1];
	if (z_pad < len)
		z_pad = 0;
	else
		z_pad -= len;
	return (z_pad);
}

static void	put_unsigned(unsigned long num)
{
	if (num > 9)
	{
		put_unsigned(num / 10);
		put_unsigned(num % 10);
	}
	else
	{
		ft_putchar_fd(num + 48, 0);
	}
}

static int	print_pad_n_un(t_legend ****legend, int len, int num, int z_pad)
{
	int		sp_pad;
	int		count;

	if ((***legend)->padding > 0 && (***legend)->zero == 0)
	{
		sp_pad = (***legend)->padding - (len + z_pad);
		count += print_flag_char(' ', sp_pad);
	}
	count += print_flag_char('0', (z_pad));
	put_unsigned(num);
	count += len;
	sp_pad = (***legend)->dash[1] - (count);
	if ((***legend)->dash[0] == 1 && (***legend)->dash[1] > 0)
		count += print_flag_char(' ', sp_pad);
	return (count);
}

int	print_unsigned(t_legend ***legend, va_list *list)
{
	int				count;
	unsigned int	num;
	int				z_pad;
	int				len;

	num = va_arg(*list, unsigned int);
	check_ignores(&legend);
	len = get_num_len_u(num, 10);
	z_pad = get_zpad(&legend, len);
	count = print_pad_n_un(&legend, len, num, z_pad);
	return (count);
}
