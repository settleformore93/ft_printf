/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssettle <ssettle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:33:59 by ssettle           #+#    #+#             */
/*   Updated: 2019/07/29 13:29:31 by ssettle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** The only flag for str is l which creates a wchar_t.
*/

































// static int parse(t_opts options, int j, char *str)
// {
// 	int 	i;
// 	t_flags flags;

// 	i = 0;
// 	j = 0;
// 	while (options.field_width && options.field_width - i > j && !(flags.minus))
// 	{
// 		pf_putchar(flags.zero ? '0' : ' '); //dont remeber this but its smart
// 		i++;
// 	}
// 	if ((int)ft_strlen(str) > options.field_width && options.precision != -1)
// 	{
// 		while (j < options.precision && str[j])
// 		{
// 			ft_putchar(str[j]);
// 			i++;
// 			j++;
// 		}
// 	}
// 	else
// 		i += (int)write(1, str, ft_strlen((char *)str));
// 	return (i);

// }

// //will need to put null terminator at the end of the string as usual
// int			convert_str(t_opts options, va_list ap)
// {
// 	char	*s;
// 	int		i;
// 	int		j;
// 	t_flags	flags;

// 	i = 0;
// 	s = va_arg(ap, char *);
// 	{
// 		free(s);
// 		s = "(null)";
// 	}
// 	if (options.precision == -1)
// 		options.precision = 0;
// 	else if (options.precision == 0)
// 		options.precision = -1;
// 	j = ((int)ft_strlen(s) > options.precision && options.precision != -1) ?
// 		options.precision : (int)ft_strlen(s);
// 	i += parse(options, j, s);
// 	while (options.field_width && options.width > j && flags.minus)
// 	{
// 		ft_putchar(' ');
// 		options.field_width--;
// 		i++;
// 	}
// 	return (i);
// }
























// https://github.com/spitox/ft_printf/blob/master/srcs/print_s.c
// https://github.com/NicoGGG/ft_printf.2/blob/master/src/ft_putstr.c
// https://github.com/MagicHatJo/-42-ft_printf/blob/master/type/d_s.c
// https://github.com/cbg119/42-ft_printf/blob/master/conversions/convert_s.c