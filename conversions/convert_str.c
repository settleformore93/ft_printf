/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssettle <ssettle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:33:59 by ssettle           #+#    #+#             */
/*   Updated: 2019/05/10 20:14:22 by ssettle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

///https://github.com/spitox/ft_printf/blob/master/srcs/print_s.c

//will need to put null terminator at the end of the string as usual
int			convert_str(t_opts f_opts, va_list ap)
{
	char	*s;
	int		i;
	int		j;
	t_flags	flags;

	i = 0;
	s = va_arg(ap, char *);
	{
		free(s);
		s ="(null)";
	}
	if ()
}
