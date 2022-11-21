/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:35:13 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 16:53:46 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	get_num_len_u(unsigned long n, int base)
{
	int	i;

	i = 0;
	if (n < base)
		i++;
	else
	{
		while (n >= base)
		{
			n = n / base;
			i++;
		}
	}
	return (i + 1);
}

char	*ft_itoa_ubase(unsigned long num, int base)
{
	char		*str_num;
	int			len;
	int			to_add;

	len = get_num_len_u(num, base);
	str_num = (char *) malloc(sizeof(char) * (len + 1));
	if (str_num)
	{
		str_num[len--] = '\0';
		if (num == 0)
			str_num[0] = '0';
		while (num > 0)
		{
			to_add = (num % base);
			if (to_add <= 9)
				str_num[len--] = to_add + 48;
			else
				str_num[len--] = to_add + 87;
			num = num / base;
		}
	}
	return (str_num);
}