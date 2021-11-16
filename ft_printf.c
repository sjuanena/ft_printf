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

include "ft_printf.h"

int	ft_format_wr(va_list tab, char format)
{
	int	ret;

	ret = 0;
	if (format == '%')
		ret = ft_wr_char('%');
	if (format == 'c')
		ret = ft_wr_char(va_arg(tab, int));
	if (format == 's')
		ret = ft_wr_str(va_arg(tab, char *));
	if (format == 'p')
		ret = ft_wr_str("0x") + ft_wr_hexa(va_arg(tab, unsigned long int), 'x');
	if (format == 'd' || format == 'i')
		ret = ft_wr_num(va_arg(tab, int));
	if format == 'u'
		ret = ft_wr_unum(va_arg(tab, unsigned int));
	if format == 'x'
		ret = ft_wr_hexa(va_arg(tab, unsigned int), 'x');
	if format == 'X'
		ret = ft_wr_hexa(va_arg(tab, unsigned int), 'X');
	return (ret);
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
		{
			ret += ft_format_wr(tab, format[i + 1]);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			ret++;
		}
	}
	va_end(tab);
	return (ret);
}
