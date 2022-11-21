/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:58:43 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/21 16:53:29 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int		print_hex(t_legend ***legend, va_list *list);
void	hex_to_caps(char **str);

static int	get_zpad(t_legend ****legend, int len)
{
	int	z_pad;

	if ((***legend)->period[0] == 0 && (***legend)->zero == 0)
		return (0);
	z_pad = (***legend)-> padding;
	if ((***legend)->period[0] == 1)
		z_pad = (***legend)->period[1];
	if ((***legend)->hash == 1 && (***legend)->zero == 1)
		z_pad -= 2;
	if (z_pad < len)
		z_pad = 0;
	else
		z_pad -= len;
	return (z_pad);
}

void	hex_to_caps(char **str)
{
	int	i;

	i = 0;
	while ((*str)[i] != '\0')
	{
		if (ft_isalpha((*str)[i]))
		{
			(*str)[i] = ft_toupper((*str)[i]);
		}
		i++;
	}
}

int	print_pad_n_string(t_legend ****leg, int len, char *hex_str, int z_pad)
{
	int		sp_pad;
	int		count;

	if ((***leg)->padding > 0 && (***leg)->zero == 0)
	{
		sp_pad = (***leg)->padding - (((***leg)->hash * 2) + len + z_pad);
		count += print_flag_char(' ', sp_pad);
	}
	if ((***leg)->hash == 1)
		count += apply_hex_prefix((***leg)->specifier);
	count += print_flag_char('0', (z_pad));
	ft_putstr_fd(hex_str, 0);
	count += len;
	sp_pad = (***leg)->dash[1] - (count);
	if ((***leg)->dash[0] == 1 && (***leg)->dash[1] > 0)
		count += print_flag_char(' ', sp_pad);
	return (count);
}

int	print_hex(t_legend ***legend, va_list *list)
{
	int		count;
	char	*hex_str;
	int		len;
	int		z_pad;

	count = 0;
	hex_str = ft_itoa_ubase(va_arg(*list, unsigned long), 16);
	if ((**legend)->specifier == 'X')
		hex_to_caps(&hex_str);
	check_ignores(&legend);
	len = ft_strlen(hex_str);
	z_pad = get_zpad(&legend, len);
	count += print_pad_n_string(&legend, len, hex_str, z_pad);
	free (hex_str);
	return (count);
}
