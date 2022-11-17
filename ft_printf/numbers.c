/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:12:14 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/17 17:29:27 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

void	put_unsigned(unsigned long num, int *count);

int	print_int_dec(int specifier, va_list *list)
{
	int	count;
	int	num;

	num = va_arg(*list, int);
	ft_putnbr_fd(num, 0);
	count = 1;
	while (num > 0)
	{
		num = num % 10;
		count++;
	}
	return (count);
}

void	print_unsigned(va_list *list, int *count)
{
	unsigned long	num;

	num = va_arg(*list, unsigned int);
	put_unsigned(num, count);
}

void	put_unsigned(unsigned long num, int *count)
{
	if (num > 9)
	{
		put_unsigned(num / 10, count);
		put_unsigned(num % 10, count);
	}
	else
	{
		ft_putchar_fd(num + 48, 0);
		(*count) += 1;
	}
}