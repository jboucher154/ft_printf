/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:51:54 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/22 15:56:59 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char1(va_list *list)
{
	ft_putchar_fd(va_arg(*list, int), 1);
	return (1);
}

