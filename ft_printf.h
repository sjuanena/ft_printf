/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_printf.h                                              :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/11/02 18:16:36 by sjuanena                #+#    #+#          */
/*Updated: 2021/11/02 18:16:36 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_wr_char(char c);
int	ft_wr_str(char *str);
int	ft_wr_num(int number);
int ft_wr_unum(unsigned int n);
int	ft_wr_hexa(unsigned long int value, char hex);

#endif
