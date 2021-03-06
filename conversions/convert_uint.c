/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssettle <ssettle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:34:04 by ssettle           #+#    #+#             */
/*   Updated: 2019/09/11 16:21:38 by ssettle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*prec_u(t_opts options, char *str)
{
	char	*new_str;
	int		len;
	int		z_len;
	int		new_len;

	new_str = pf_strdup(str);
	len = pf_strlen(str);
	z_len = options.precision;
	new_str[z_len] = '\0';
	if (options.precision > len)
	{
		pf_memset(new_str, '0', z_len);
		new_len = z_len - len;
		pf_strncpy(&new_str[new_len], str, len);
	}
	free(str);
	return (new_str);
}

char		*padding_unbr(t_opts options, char *str)
{
	int		wd_len;
	int		len;
	int		new_len;
	char	*new_str;

	new_len = 0;
	len = pf_strlen(str);
	wd_len = options.width_field;
	new_str = pf_strdup(str);
	pf_memset(new_str, ' ', wd_len);
	new_str[wd_len] = '\0';
	if (options.flags.zero && !options.flags.minus)
		pf_memset(new_str, '0', wd_len);
	if (options.flags.minus >= 1)
		pf_strncpy(new_str, str, len);
	else
	{
		new_len = wd_len - len;
		pf_strncpy(&new_str[new_len], str, len);
	}
	return (new_str);
}

int			convert_uint(t_opts options, va_list ap)
{
	char	*str;
	char	*new_str;
	int		len;

	str = pf_itoa_unsigned(options.content_size > 0 ?
		(va_arg(ap, uint64_t)) : (va_arg(ap, uint32_t)));
	len = pf_strlen(str);
	if (options.precision > len)
		str = prec_u(options, str);
	if (options.width_field > len)
	{
		new_str = padding_unbr(options, str);
		pf_putstr(new_str);
		free(new_str);
	}
	else
		pf_putstr(str);
	free(str);
	return (len);
}
