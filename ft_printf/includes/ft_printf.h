/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:04:26 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/17 17:24:44 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
// # include <stdint.h> //for uintptr_t

int		ft_printf(const char *input, ...);
int		convert_print(const char *input, unsigned int i, va_list *lst, int *c);

int		handle_flags(char *flags, int *count);
// int		handle_specifier(int specifier, va_list *list, int *count);

int		print_int_dec(int specifier, va_list *list);
void	print_unsigned(va_list *list, int *count);

int		print_hex(char specifier, va_list *list);
int		print_pointer(va_list *list);

#endif
