#include "includes/ft_printf.h"
#include "includes/libft.h"
// #include <stdio.h> //remove


// int	is_format_specifier(char c)
// {
// 	if (c == 'c')
// 		return (1);
// 	else if (c == 's')
// 		return (2);
// 	else if (c == 'd')
// 		return (3);
// 	else if (c == 'i')
// 		return (4);
// 	else if (c == 'u')
// 		return (5);
// 	else if (c == 'x')
// 		return (6);
// 	else if (c == 'X')
// 		return (7);
// 	else if (c == 'p')
// 		return (8);
// 	else if (c == '%')
// 		return (9);
// 	else
// 		return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if (c >= 48 && c <= 57)
// 		return (1);
// 	return (0);
// }

// t_legend	*new_legend(void)
// {
// 	t_legend	*new;

// 	new = (t_legend *) malloc(sizeof(t_legend));
// 	if(new)
// 	{
// 		new->padding = 0;
// 		new->zero = 0;
// 		new->period[0] = 0;
// 		new->period[1] = 0;
// 		new->hash = 0;
// 		new->plus = 0;
// 		new->space = 0;
// 		new->dash[0] = 0;
// 		new->dash[1] = 0;
// 	}
// 	return (new);
// }

//////////////////////////

int	check_num(const char *str, int *index)
{
	int	sum;

	sum = 0;
	if (ft_isdigit(str[*index]))
	{
		while (ft_isdigit(str[*index]))
		{
			if (sum == 0)
				sum = str[*index] - 48;
			else
				sum = (sum * 10) + str[*index] - 48;
			(*index)++;
		}
	}
	return (sum);
}

int	is_plus_hex_spc(char c, t_legend ***leg, int	*i)
{
	if (c == '#' || c == '+' || c == ' ')
	{
		if (c == '#')
			(**leg)->hash = 1;
		if (c == '+')
			(**leg)->plus = 1;
		if (c == ' ')
			(**leg)->space = 1;
		(*i)++;
		return (1);
	}
	return (0);
}

//maybe function for checking the 0 condition...
void	eval_zero(t_legend ***leg, const char *str, int *i)
{
	if (str[*i] == '0' && *i == 0)
	{
		(**leg)->zero = 1;
		(*i)++;
	}
	else if (str[*i] == '0') //how to catch the one that can be after one of the above flags...
	{
		if (((**leg)->hash == 1 || (**leg)->plus == 1 || (**leg)->space == 1) 
		&& (!(**leg)->dash[0] && !(**leg)->period[0]))
			(**leg)->zero = 1;
			(*i)++;
	}
}

void	eval_check_dash(t_legend ***leg, const char *str, int *i)
{
	if (str[*i] == '.')
	{
		(**leg)->period[0] = 1;
		(*i)++;
		if (ft_isdigit(str[*i]))
			(**leg)->period[1] = check_num(str, i);
	}
	else if (str[*i] == '-')
	{
		(**leg)->dash[0] = 1;
		(*i)++;
		if (ft_isdigit(str[*i]))
			(**leg)->dash[1] = check_num(str, i);
	}
}

int	fill_legend(const char *str_legend, t_legend **legend)
{
	int	i;

	i = 0;
	if (!str_legend || !(*legend))
		return (0);	
	while(str_legend[i] != '\0')
	{
		is_plus_hex_spc(str_legend[i], &legend, &i);
		if (str_legend[i] == '0')
			eval_zero(&legend, str_legend, &i);
		if (ft_isdigit(str_legend[i]) && (!(*legend)->dash[0] && !(*legend)->period[0]))
			(*legend)->padding = check_num(str_legend, &i);
		if (str_legend[i] == '.' || str_legend[i] == '-')
			eval_check_dash(&legend, str_legend, &i);
		if (is_format_specifier(str_legend[i]))
		{
			(*legend)->specifier = str_legend[i];
			break ;
		}
	}
	return (1);
}

// int	main(void)
// {
// 	t_legend	*new = new_legend();
// 	const char		*str = "6c";
	
// 	fill_legend(str, &new);

// 	printf("specifier: %c\n", new->specifier);
// 	printf("padding: %i\n", new->padding);
// 	printf("zero: %i\n", new->zero);
// 	printf("dash: %i\n", new->dash[0]);
// 	printf("dash val: %i\n", new->dash[1]);
// 	printf("period: %i\n", new->period[0]);
// 	printf("period val: %i\n", new->period[1]);
// 	printf("hash: %i\n", new->hash);
// 	printf("plus: %i\n", new->plus);
// 	printf("space: %i\n", new->space);

// 	free(new);
// 	return (0);
// }
