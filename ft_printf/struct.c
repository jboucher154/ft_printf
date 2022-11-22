/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:56:06 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/22 11:49:27 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_legend	*new_legend(void)
{
	t_legend	*new;

	new = (t_legend *) malloc(sizeof(t_legend));
	if (new)
	{
		new->padding = 0;
		new->zero = 0;
		new->period[0] = 0;
		new->period[1] = 0;
		new->hash = 0;
		new->plus = 0;
		new->space = 0;
		new->dash[0] = 0;
		new->dash[1] = 0;
	}
	return (new);
}
