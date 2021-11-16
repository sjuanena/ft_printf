/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_print_chars.c                                         :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/11/16 18:57:53 by sjuanena                #+#    #+#          */
/*Updated: 2021/11/16 18:57:53 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wr_hexa(unsigned long int value, char hex)
{
	char		*base;
	static int	ret;

	ret = 0;
	if (hex == 'x')
		base = "0123456789abcdef";
	if (hex == 'X')
		base = "0123456789ABCDEF";
	if (value > 15)
		ft_wr_hexa(value / 16, hex);
	ret++;
	ft_wr_char(base[value % 16]);
	return (ret);
}

int	ft_wr_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_wr_str(char *str)
{
	int	len;

	len = 0;
	if (str!)
		return (write(1, "(null)", 6));
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
}
