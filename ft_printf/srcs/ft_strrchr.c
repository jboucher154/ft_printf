/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:49:28 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/17 16:50:33 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	int				i;
	unsigned char	new_c;

	temp = NULL;
	new_c = c;
	i = ft_strlen(s);
	while (i >= 0 && s != NULL)
	{
		if (s[i] == new_c)
			return (temp = (char *) &s[i]);
		i--;
	}
	return (temp);
}
