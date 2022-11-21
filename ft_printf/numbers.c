/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:12:14 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 16:55:46 by jebouche         ###   ########.fr       */
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
	if (((***legend)->plus == 1 || (***legend)->space == 1) \
	&& (***legend)->zero == 1)
		z_pad -= 1;
	if (z_pad < len)
		z_pad = 0;
	else
		z_pad -= len;
	return (z_pad);
}

static int	get_num_len(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n < 10)
		i++;
	else
	{
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

static int	print_sign(int plus, int *num)
{
	int	count;

	count = 0;
	if (plus == 1 && num > 0)
		count += print_flag_char('+', 1);
	else if (*num < 0)
	{
		count += print_flag_char('-', 1);
		(*num) *= -1;
	}
	return (count);
}

int	print_pad_n_num(t_legend ****legend, int len, int num, int z_pad)
{
	int		sp_pad;
	int		count;
	int		flag_holder;

	flag_holder = 0;
	if ((***legend)->plus == 1 || (***legend)->space == 1)
		flag_holder = 0;
	if ((***legend)->padding > 0 && (***legend)->zero == 0)
	{
		sp_pad = (***legend)->padding - (flag_holder + len + z_pad);
		count += print_flag_char(' ', sp_pad);
	}
	count += print_sign((***legend)->plus, &num);
	if ((***legend)->space == 1 && num > 0)
		count += print_flag_char(' ', 1);
	count += print_flag_char('0', (z_pad));
	ft_putnbr_fd(num, 0);
	count += len;
	sp_pad = (***legend)->dash[1] - (count);
	if ((***legend)->dash[0] == 1 && (***legend)->dash[1] > 0)
		count += print_flag_char(' ', sp_pad);
	return (count);
}

int	print_int_dec(t_legend ***legend, va_list *list)
{
	int	count;
	int	num;
	int	z_pad;
	int	len;

	num = va_arg(*list, int);
	check_ignores(&legend);
	if (num < 0)
		len = get_num_len(num * -1);
	else
		len = get_num_len(num);
	z_pad = get_zpad(&legend, len);
	count = print_pad_n_num(&legend, len, num, z_pad);
	return (count);
}
