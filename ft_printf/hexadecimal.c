/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:58:43 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/17 17:25:11 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int			print_hex(char specifier, va_list *list);
int			print_pointer(va_list *list);
static int	get_num_len(unsigned long n, int base);
char		*ft_itoa_ubase(unsigned long num, int base);
void		hex_to_caps(char **str);

int	print_hex(char specifier, va_list *list)
{
	int				count;
	unsigned long	hex_int;
	char			*hex_str;

	hex_int = va_arg(*list, unsigned int);
	hex_str = ft_itoa_ubase(hex_int, 16);
	if (specifier == 'X')
		hex_to_caps(&hex_str);
	ft_putstr_fd(hex_str, 0);
	count = ft_strlen(hex_str);
	free (hex_str);
	return (count);
}

int	print_pointer(va_list *list)
{
	unsigned long	addy;
	char			*addy_str;
	int				count;

	addy = va_arg(*list, unsigned long);
	addy_str = ft_itoa_ubase(addy, 16);
	ft_putstr_fd("0x", 0);
	count = ft_strlen(addy_str) + 2;
	free(addy_str);
	return (count);
}

static int	get_num_len(unsigned long n, int base)
{
	int	i;

	i = 0;
	if (n < base)
		i++;
	else
	{
		while (n > base)
		{
			n = n / base;
			i++;
		}
	}
	return (i);
}

//protect against negative bases...
char	*ft_itoa_ubase(unsigned long num, int base)
{
	char		*str_num;
	int			len;
	int			to_add;

	len = get_num_len(num, base);
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
				str_num[len--] = to_add + 88;
			num = num / base;
		}
	}
	return (str_num);
}

void	hex_to_caps(char **str)
{
	int	i;

	i = 0;
	while ((*str)[i] != '\0')
	{
		if (ft_isalpha((*str)[i]))
		{
			ft_toupper((*str)[i]);
		}
		i++;
	}
}
