/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_printf.c                                              :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/11/02 18:33:57 by sjuanena                #+#    #+#          */
/*Updated: 2021/11/02 18:33:57 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

include "printf.h"

void	ft_format_wr(va_list tab, char format)
{
	if format == '%'
		ft_putchar_fd('%', 1);
	elseif format == 'c'
		va_arg(tab, int);
		ft_putchar_fd(tab, 1);
	elseif format == 's'

	elseif format == 'p'

	elseif format == 'd'

	elseif format == 'i'

	elseif format == 'u'

	elseif format == 'x'

	elseif format == 'X'

	else
/* ERROR*/
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	tab;

	va_start(tab, format);
	ret = 0;
	i = -1;
	while (format[++i])
	{
		if format[i] == '%'
			ft_format_wr(tab, format[i]);
		else
			write(1, &format[i], 1);
	}
	va_end(tab);
	return(ret);
i}
