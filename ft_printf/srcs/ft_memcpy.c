/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:47:29 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/08 11:47:31 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
	{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
	}
	return (dst);
}
