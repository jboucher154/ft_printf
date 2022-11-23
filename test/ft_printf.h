/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:04:26 by jebouche          #+#    #+#             */
/*   Updated: 2022/11/22 14:41:42 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./srcs/libft.h"

typedef struct s_legend
{
	char	specifier;
	int		padding;
	int		zero;
	int		period[2];
	int		hash;
	int		plus;
	int		space;
	int		dash[2];
}			t_legend;

t_legend	*new_legend(void);

//test
int			print_char1(va_list *list);
int			convert_print(const char *str, unsigned int i, va_list *lst, int **count);
int			handle_per_specifier(char speci, va_list *list);

//ftprintf
int			ft_printf(const char *input, ...);

//conversion
int			convert_print(const char *s, unsigned int i, va_list *lst, int **c);

//handle_specifiers
// int			handle_per_specifier(t_legend **legend, va_list *list);
int			is_format_specifier(char c);

//characters
int			print_char(t_legend ***legend, va_list *list);
int			print_percent(t_legend ***legend);
int			print_string(t_legend ***legend, va_list *list);

//numbers
int			print_int_dec(t_legend ***legend, va_list *list);
int			print_unsigned(t_legend ***legend, va_list *list);

//flags
int			print_flag_char(char c, int repeat);
int			apply_hex_prefix(char s);
void		check_ignores(t_legend **legend);
int			is_flag(char c);

//hexadecimal
int			print_hex(t_legend ***legend, va_list *list);
int			print_pointer(va_list *list);

//legend
int			fill_legend(const char *str_legend, t_legend **legend);

//itoa base
char		*ft_itoa_ubase(unsigned long num, int base);
int			get_num_len_u(unsigned long n, int base);

//padding
int			get_zpad(t_legend ****legend, int len);
#endif
