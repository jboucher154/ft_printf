/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:04:26 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/18 17:38:06 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
// # include <stdint.h> //for uintptr_t

//ftprintf
int		ft_printf(const char *input, ...);
int		convert_print(const char *input, unsigned int i, va_list *lst, int *c);

//conversion
int		is_format_specifier(char c);
int		is_flag(char c);
char	*get_legend(const char *str, unsigned int index, unsigned int *end);
int		print_from_legend(char *legend, va_list *list);
int		convert_print(const char *str, unsigned int index, va_list *lst, int *count);

//handle_specifiers
int		handle_per_specifier(char s, char * legend, int flags, va_list *list);

//characters
int		print_char(va_list *list, char *legend, int flags);
int		print_percent(va_list *list, char *legend, int flags);
int		print_string(va_list *list, char *legend, int flags);

//numbers
int		print_int_dec(int specifier, va_list *list);
void	print_unsigned(va_list *list, int *count);

//flags
int		print_flag_char(char c, int repeat);
char	*apply_hex_prefix(char s);
int		get_num_from_leg(char *legend);

//hexadecimal
int		print_hex(char specifier, va_list *list);
int		print_pointer(va_list *list);

#endif
