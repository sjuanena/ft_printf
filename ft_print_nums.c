/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_print_nums.c                                          :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/11/16 19:19:58 by sjuanena                #+#    #+#          */
/*Updated: 2021/11/16 19:19:58 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_wr_num(int number)
{
	int	ret;
	char	*result;

	result = ft_itoa(number);
	ret = 0;
	while (result[ret] != '\0')
	{
		ft_wr_char(result[ret]);
		ret++;
	}
	free (result);
	return (ret);
}

int	ft_wr_unum(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		ret = ft_wr_char('-');
		n = n * -1;
	}
	if (n < 10)
	{
		ret = ft_wr_unum(n + 48);
		return (ret);
	}
	else
		ret = ft_wr_unum(n / 10);
	ret += ft_wr_unum(n % 10);
	return (ret);
}
